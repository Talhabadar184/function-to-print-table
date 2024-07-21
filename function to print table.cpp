#include<iostream>
void print_table(int n)
{
   for(int i=1;i<=5;i++)
   std::cout<<n<<"*"<<i<<"="<<n*i<<std::endl;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    print_table(n);
    return 0;
}
