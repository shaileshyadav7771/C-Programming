# include<iostream>
using namespace std;

class BasicCar
  {
    public:
       virtual void start()
       {
       cout<<"Start Car with key."<<endl;
       }
  };


class AdvanceCar: public BasicCar
    {
      public:
         void start7()
         {
         cout<<"Start without key (Becz It is Advanced Car  : ))."<<endl;
         }
     };

int main()
{
  BasicCar *bc = new AdvanceCar;
  bc -> start();
  return 0 ;
  }
