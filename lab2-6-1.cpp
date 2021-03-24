//2-4-1
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
   srand(time(0));
   int N;
   ofstream ofile("integers_numbers.txt");
   cout <<"What is the number of integers you would like to generate?: ";
   cin>>N;
   for(int i = 0;i < N;i++){
   ofile<<rand()%500<<endl;  
   }
   ofile.close();
}