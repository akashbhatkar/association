#include<iostream>
using namespace std;

class Engine
{
        public: Engine()
                {
                        cout<<"Engine is created"<<endl;
                }
                ~Engine()
                {
                        cout<<"Engine is destroyed"<<endl;
                }
                void Einfo()
                {
                        cout<<"500HP"<<endl;
                }
};
class car
{

        public:
        Engine E;

                car()
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


int main()
{

        car *c=new car();
        delete c;
}
