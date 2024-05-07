#include <iostream>
using namespace std;
double converter(){
    double temp;
    char scale;
    double temp1;
    
    cout << "Enter the temperature: ";
    cin >> temp;

    cout << "Enter the temperature scale (Celsius, Farenheit, or Kelvin): ";
    cin >> scale;
    curlevel:
    switch(scale) {
          //Celsius to...
          case 'c':
                temlevel1:
                  cout<<"Enter the temperature in which it is to converted"<<endl;
                  cin>>scale;
                  if(scale=='c'|| scale=='C'){
                          temp1=temp*1;
                  }
                  else if(scale=='k'|| scale=='K'){
                         temp1= temp + 273.15;
                      }
                  else if(scale=='f'|| scale=='F'){
                          temp1=(temp * 9/5) + 32;
                  }
              else{
                  cout<<"invalid temperature scale entered!! please enter again."<<endl;
                  goto temlevel1;
              }
              break;

            //kelvin to...
              case 'k':
                  temlevel2:
                    cout<<"Enter the temperature in which it is to converted"<<endl;
                    cin>>scale;
                    if(scale=='c'|| scale=='C'){
                            temp1=temp - 273.15;
                    }
                    else if(scale=='k'|| scale=='K'){
                            temp1=temp*1;
                        }
                    else if(scale=='f'|| scale=='F'){
                            temp1=(temp * 9 / 5) - 459.67;
                    }
                else{
                    cout<<"invalid temperature scale entered!! please enter again."<<endl;
                    goto temlevel2;
                }
                break;

                  //farenheit to...
                    case 'f':
                        temlevel3:
                          cout<<"Enter the temperature in which it is to converted"<<endl;
                          cin>>scale;
                          if(scale=='c'|| scale=='C'){
                                  temp1=(temp - 32) * 5 / 9;;
                          }
                          else if(scale=='k'|| scale=='K'){
                                  temp1=(temp + 459.67) * 5 / 9;
                              }
                          else if(scale=='f'|| scale=='F'){
                                  temp1=temp*1;
                          }
                      else{
                          cout<<"invalid temperature scale entered!! please enter again."<<endl;
                          goto temlevel3;
                      }
                      break;
        default:{
            cout<<"Wrong choice entered"<<endl;
            goto curlevel;
       }
    }
    return temp1;}

  int main() {

       cout<<"Hello user!Welcome to the temperature converter application.\n"<<endl;
      cout<<"Enter temperature scale in which you want to convert temperature:"<<endl;
      cout<<"Celsius - (c), \t Farenheit - (f),\t Kelvin - (k) " <<endl;

      double finalValue = converter();
      cout<<"Result is\t"<< finalValue <<endl;
      cout<<"Thankyou for using my Application"<<endl;
 return 0;
  }
