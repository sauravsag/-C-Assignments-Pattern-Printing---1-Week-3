#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"number of rows : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout<<" ";
        }
        for (int k = 1; k<= i; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    for (int k = 1; k <= n-1; k++)
    {
        for (int l = 1; l <= k; l++)
        {
            cout<<" ";
        }
        for (int m = 1; m<= (n-k); m++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}