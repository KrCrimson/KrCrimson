#include<iostream>
#include<string>
using namespace std;

int main(){
    int x=2;
    float y=3.1416;
    char c='a';
    char curso[20]="Estructura";
    string s;
    cout<<"estamos comenzando el"<<endl;
    cout<<"ahora leamos algo de"<<endl;
    cout<<"Ingrese un numero entre el 1 al 10"<<endl;
    cin>>x;
    for(int i=1; i<=x; i++){
        cout<<"Ingrese la frase: "<<endl;
        fflush(stdin);
        getline(cin,s);
        cout<<"Has ingresado s= "<<s<<endl;
    }
    cout<<"Adios mundo "<<endl;
}