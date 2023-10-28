#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"number of rows and columns = ";
    cin>>n;
    
    for (int i = 0; i <= n; i++)
    {
        int a=1;
        for (int j = 0; j <= i; j++)
        {
            
            if (i%2==0)
            {
                cout<<a<<" ";
                a++;
            }
            else{
                cout<<(char)(j+65)<<" ";
                
            } 
        }
       cout<<endl; 
    }
    
}