#include<bits/stdc++.h>
using namespace std;
string CambiarCaracter(string palabra);
int main(){
string palabra;
cout<<"Ingrese una palabra"<<endl;
getline(cin,palabra);
string c=CambiarCaracter(palabra);
cout<<c<<endl;
return 0;
}
string CambiarCaracter(string palabra)
{
	string convertir;
	int i;
	for(i=0; i<palabra.size(); i++){
		if(palabra[i]==' '){
			palabra[i]='_';
		}
		convertir+=palabra[i];
	}
	return convertir;
}
