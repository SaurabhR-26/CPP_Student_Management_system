#include <bits/stdc++.h>
using namespace std;
class ayu 
{
    public:
    int a;
    ayu(int b)
    {
       a=b;
    }
    ayu()
    {
        int b;
    cout<<"enter a number"<<endl; 
        cin>>b;
        a=b;
    }
    void display()
    {
        cout<<a*a;
    }
    
};
int main()
{
    
    ayu c2(3);
   
    c2.display();
    return 0;
}