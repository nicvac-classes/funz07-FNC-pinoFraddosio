#include <iostream>
#include <string>
using namespace std;


float Somma(float n1,float n2){
    float somm;
    somm = n1 + n2;
    return somm;
}

float Sottrazione(float n1 , float n2){
    float sott;
    sott = n1 - n2;
    return sott;
}

float Moltiplicazione(float n1, float n2){
    float molt;
    molt = n1 * n2;
    return molt;
}

float Divisione(float n1,float n2){
    float div; 
    div = n1 / n2;
    return div;
}

int main() {
    string c = "";
    float a,b,stato = 0;
    
    do{
        cout<<"Stato calcolatrice: "<<stato<<endl;
        cout<<"Inserire il tipo di operazione che deve essere eseguita (+,-,*,/); Inserire X per non fare alcuna operazione e R per resettare la calcolatrice: ";
        cin>>c;
        if(c != "X" && c != "R"){
            cout<<"Inserire il primo numero: ";
            cin>>a;
            cout<<"Inserire il secondo numero: ";
            cin>>b;
        }
        if (c == "+"){
            stato = Somma(a,b);
            cout<<"La somma dei due numeri equivale a: "<<stato<<endl;
        }
        if (c == "-"){
            stato = Sottrazione(a,b);
            cout<<"La sottrazione dei due numeri equivale a: "<<stato<<endl;
        }
        if (c == "*"){
            stato = Moltiplicazione(a,b);
            cout<<"La moltiplicazione dei du numeri equivale a: "<<stato<<endl;
        }
        if(c == "/"){
            stato = Divisione(a,b);
            cout<<"La divisione dei due numeri equivale a: "<<stato<<endl;
        }
        if(c == "R"){
            stato = 0;
        }
    }while(c != "X");
    
    cout<<"Grazie di aver usato la calcolatrice"<<endl;
    return 0;
    
}


