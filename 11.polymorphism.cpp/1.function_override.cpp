# include<iostream>
using namespace std;

class BasicCar
  {
    public:
       void start()
       {
       cout<<"Start Car with key."<<endl;
       }
  };


class AdvanceCar: public BasicCar
    {
      public:
         void start()
         {
         cout<<"Start key without key."<<endl;
         }
     };

int main()
{
  AdvanceCar adc;
  adc.start();
  // adc.BasicCar :: start();
  return 0 ;
  }
