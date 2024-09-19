#include<iostream>
using namespace std;


// Only use for loop when you know the amount of iterations
int main()
{
    //Print hello 15 times
    for(int i=1;i<=15; ++i)
        cout <<i<<"Hello \n";
//Use when you know the amount of iterations
    int j=1;
    while(i<=15){
        cout <<j<<"Hello \n";
        ++j;
    }
    return 0;
}

int k=1;
do
{
    cout <<k<<"Hello \n";
    ++k;

} while (k<=15);
return 0;
