//2-4-2
#include<iostream>
#include<fstream>
using namespace std;
int main(){
   int num;
   int max=0;
   int sum=0;
   int min=1000000;
   int count=0;
   float aver;
   ifstream infile("integers_numbers.txt");
       infile>>num;
   while(!infile.eof()){
       count++;
       sum=sum+num;
       if(num>max){
           max=num;
       }
       if(num<min){
           min=num;
       }
       infile>>num;  
   }
   infile.close();
   cout<<"Total Number of Integers read are: "<<count<<endl;
   cout<< "Minimum: "<< min << endl;
   cout<< "Maximum: "<< max << endl;
   cout<< "Sum of Integers:"<<sum<<endl;
   aver=sum/count;
   cout<< "Average: "<< aver << endl;
  

}

