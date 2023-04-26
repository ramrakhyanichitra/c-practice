#include<iostream>
using namespace std;
class element
{public:
    int a[10]={1,2,3,4,5,6,7,8};
    int k=0;
    void getelement()
    {
        cout<<"enter the element which you need to search in given array:";
        cin>>k;

    }
    void findelement()
    {
        int i=0;
        for(i=0;i<9;i++)
        {
            if(a[i]==k)
                cout<<k<<"is found at index "<<i<<endl;

        }
    }
};
int main()
{
    element e;
    e.getelement();
    e.findelement();
}
