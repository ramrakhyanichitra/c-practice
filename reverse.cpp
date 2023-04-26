#include<iostream>
using namespace std;
class reverse1{
public:
        int num;
        void getdata()
        {
            cout<<"give the number whose reverse is to be printed:";
            cin>>num;

        }
        reverse1()
        {
            cout<<"the reverse of number is intended to be printed"<<endl;

        }
        void r_num()
        {
            int temp=0;int rnumber=0;
            while(num!=0)
            {   temp=num%10;  // to extract last digit
                num=num/10; // acts as iterating condition
                rnumber=rnumber*10+temp;



            }
            cout<<"reversed number is:"<<rnumber<<endl;

        }

};
int main()
{
    reverse1 r;
    r.getdata();
    r.r_num();

}

