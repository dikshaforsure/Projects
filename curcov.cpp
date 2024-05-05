#include<iostream>
using namespace std;
float converter(){
    char curname1;
    char curname2;
    float currency1;
    float currency2;
    curlevel:
    cout<<"Enter currency1 Name"<<endl;
    cin>>curname1;
    cout<<"Enter currency1 value:"<<endl;
    cin>>currency1;
    
    switch(curname1){
        // dollar to...
        case'a':
            curlevel1:
            cout<<"Enter currency2 Name"<<endl;
            cin>>curname2;
            
        if(curname2=='a'|| curname2=='A'){
            currency2=currency1*1;
        }
        else if(curname2=='b'|| curname2=='B'){
            currency2=currency1*83.38;
        }
        else if(curname2=='c'|| curname2=='C'){
        currency2=currency1*0.93;
        }
        else if(curname2=='d'|| curname2=='D'){
        currency2=currency1*0.8;
        }
        else if(curname2=='e'|| curname2=='E'){
            currency2=currency1*7.24;
            }
        else if(curname2=='f'|| curname2=='F'){
            currency2=currency1*153.06;
        }
        else if(curname2=='g'|| curname2=='G'){
            currency2=currency1*1356.04;
        }
        else{
            cout<<"Invalid currency. please type again"<<endl;
            goto curlevel1;
        }

      break;
    // rupees to...
    case'b':
        curlevel2:
        cout<<"Enter currency2 Name"<<endl;
        cin>>curname2;

    if(curname2=='a'|| curname2=='A'){
        currency2=currency1*0.012 ;
    }
    else if(curname2=='b'|| curname2=='B'){
        currency2=currency1*1;
    }
    else if(curname2=='c'|| curname2=='C'){
    currency2=currency1*0.011 ;
    }
    else if(curname2=='d'|| curname2=='D'){
    currency2=currency1*0.0096 ;
    }
    else if(curname2=='e'|| curname2=='E'){
        currency2=currency1*0.085 ;
        }
    else if(curname2=='f'|| curname2=='F'){
        currency2=currency1*1.84;
    }
    else if(curname2=='g'|| curname2=='G'){
        currency2=currency1*16.26;
    }
    
    else{
        cout<<"Invalid currency. please type again"<<endl;
        goto curlevel2;
    }
  break;
    //euro to...
    case'c':
        curlevel3:
        cout<<"Enter currency2 Name"<<endl;
        cin>>curname2;

    if(curname2=='a'|| curname2=='A'){
        currency2=currency1*1.08 ;
    }
    else if(curname2=='b'|| curname2=='B'){
        currency2=currency1*89.82;
    }
    else if(curname2=='c'|| curname2=='C'){
    currency2=currency1*1 ;
    }
    else if(curname2=='d'|| curname2=='D'){
    currency2=currency1*0.86 ;
    }
    else if(curname2=='e'|| curname2=='E'){
        currency2=currency1*7.80 ;
        }
    else if(curname2=='f'|| curname2=='F'){
        currency2=currency1*164.92;
    }
    else if(curname2=='g'|| curname2=='G'){
        currency2=currency1*1460.80 ;
    }

    else{
        cout<<"Invalid currency. please type again"<<endl;
        goto curlevel3;
    }
 break;
    //pound to...
    case'd':
        curlevel4:
        cout<<"Enter currency2 Name"<<endl;
        cin>>curname2;

    if(curname2=='a'|| curname2=='A'){
        currency2=currency1*1.25 ;
    }
    else if(curname2=='b'|| curname2=='B'){
        currency2=currency1*104.63;
    }
    else if(curname2=='c'|| curname2=='C'){
    currency2=currency1*1.16 ;
    }
    else if(curname2=='d'|| curname2=='D'){
    currency2=currency1*1 ;
    }
    else if(curname2=='e'|| curname2=='E'){
        currency2=currency1*9.08 ;
        }
    else if(curname2=='f'|| curname2=='F'){
        currency2=currency1*192.05 ;
    }
    else if(curname2=='g'|| curname2=='G'){
        currency2=currency1*1701.56  ;
    }
    
    else{
        cout<<"Invalid currency. please type again"<<endl;
        goto curlevel4;
    }
    break;

    //chinese yuan to...
    case'e':
        curlevel5:
        cout<<"Enter currency2 Name"<<endl;
        cin>>curname2;

    if(curname2=='a'|| curname2=='A'){
        currency2=currency1*0.14 ;
    }
    else if(curname2=='b'|| curname2=='B'){
        currency2=currency1*11.81;
    }
    else if(curname2=='c'|| curname2=='C'){
    currency2=currency1*0.13 ;
    }
    else if(curname2=='d'|| curname2=='D'){
    currency2=currency1*0.11;
    }
    else if(curname2=='e'|| curname2=='E'){
        currency2=currency1*1 ;
        }
    else if(curname2=='f'|| curname2=='F'){
        currency2=currency1*21.64  ;
    }
    else if(curname2=='g'|| curname2=='G'){
        currency2=currency1*187.36  ;
    }
    
    else{
        cout<<"Invalid currency. please type again"<<endl;
        goto curlevel5;
    }
    break;

    //japenese yen to...
    case'f':
        curlevel6:
        cout<<"Enter currency2 Name"<<endl;
        cin>>curname2;

    if(curname2=='a'|| curname2=='A'){
        currency2=currency1*0.0065  ;
    }
    else if(curname2=='b'|| curname2=='B'){
        currency2=currency1*0.54;
    }
    else if(curname2=='c'|| curname2=='C'){
    currency2=currency1*0.0061 ;
    }
    else if(curname2=='d'|| curname2=='D'){
    currency2=currency1*0.0052 ;
    }
    else if(curname2=='e'|| curname2=='E'){
        currency2=currency1*0.047 ;
        }
    else if(curname2=='f'|| curname2=='F'){
        currency2=currency1*1  ;
    }
    else if(curname2=='g'|| curname2=='G'){
        currency2=currency1*8.86  ;
    }

    else{
        cout<<"Invalid currency. please type again"<<endl;
        goto curlevel6;
    }
    break;

    //korean won to...
    case'g':
        curlevel7:
        cout<<"Enter currency2 Name"<<endl;
        cin>>curname2;

    if(curname2=='a'|| curname2=='A'){
        currency2=currency1*0.00074  ;
    }
    else if(curname2=='b'|| curname2=='B'){
        currency2=currency1*0.061 ;
    }
    else if(curname2=='c'|| curname2=='C'){
    currency2=currency1*0.00068;
    }
    else if(curname2=='d'|| curname2=='D'){
    currency2=currency1*0.000588;
    }
    else if(curname2=='e'|| curname2=='E'){
        currency2=currency1*0.0053 ;
        }
    else if(curname2=='f'|| curname2=='F'){
        currency2=currency1*0.11  ;
    }
    else if(curname2=='g'|| curname2=='G'){
        currency2=currency1*1  ;
    }
   
    else{
        cout<<"Invalid currency. please type again"<<endl;
        goto curlevel7;
    }
    break;

    
    
    default:{
        cout<<"Wrong choice entered"<<endl;
        goto curlevel;
    
    } break;
   } 
return currency2;}
    int main(){

        cout<<"Hello user!Welcome to the currency converter application.\n";
        cout<<"You can have currencies dollar, rupees, euro, pound, chinese yuan, japenese yen, korean won."<<endl;
        cout<<"Enter currency1 to be converted:"<<endl;
        cout<<"Enter currency2 in which you want to convert currency1:"<<endl;
        cout<<"(a)dollar (b)rupees (c)euro (d)pound (e)chinese yuan (f)japenese yen (g) korean won" 
         <<endl;
        
        float finalValue = converter();
        cout<<"Result is\t"<< finalValue <<endl;
        cout<<"Thankyou for using my Application"<<endl;

      return 0;
    }