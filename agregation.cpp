#include<iostream>
using namespace std;

class car
{

        public: car()
                {
                        cout<<"car is created"<<endl;
                }
                ~car()
                {
                        cout<<"car is destroyed"<<endl;
                }
                void info(char *P)
                {
                        cout<<P<<endl;
                }
};


class owner
{
        public:car *cp;
               owner()
               {
                       cout<<"owner is created"<<endl;
               }
               ~owner()
               {
                       cout<<"owner is desroyed"<<endl;
               }
};

int main()
{

        //owner o;
        car c;
        owner *op=new owner();
        delete op;
        c.info("suzuki alto");
}
