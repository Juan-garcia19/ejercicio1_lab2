#include <iostream>

using namespace std;

int main()
{
    int DineroD,CantidadD;

    int Dinero[10]{50000,20000,10000,5000,2000,1000,500,200,100,50};

    cout<<"ingrese la cantidad de dinero que desea retirar: ";
    cin>>DineroD;

    for(int cont=0;cont<10;cont++){
        if (DineroD>=Dinero[cont]){
            CantidadD=DineroD/Dinero[cont];
            cout<<Dinero[cont]<<" : "<<CantidadD<<endl;
            DineroD= DineroD % Dinero[cont];
        }
        else{
            cout<<Dinero[cont] <<" : 0"<<endl;
        }
    }
    if(DineroD!=0){
        cout<<"Faltante : "<<DineroD<<endl;
    }
}
