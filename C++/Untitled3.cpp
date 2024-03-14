# include <iostream>
using namespace std;
int main()
{ int p;
	double n1;
	cout<<"\nIngresa la primer nota:\n";
	cin >> n1;
	double n2;
	cout<<"\nIngresa la segunda nota\n";
	cin  >> n2;
	double n3;
	cout<<"\nIngresa la tercera nota\n"<<endl;
	cin  >> n3;p=(n1+n2+n3)/3;
	cout<<"Su promedio es\n"<<p<<endl;
	if ( (n1 > 50) || (n2 > 50) ||(n3 > 50)|| (n1 < 10) || (n2 < 10)||(n3 < 10))
	{
	cout<<"Error"<<endl<<"La nota maxima que se puede ingresar es entre los valores 10 y 50"<<endl;}
	
	else if (p>=45)
	{cout<<"\nExcelente"<<endl;}
	else if((p>=35)||(p>=40))
	{
	cout<<"\nAprobo felicitaciones"<<endl;}
	else if(p>=30)
	{
	cout<<"\nAprobo puedes mejorar";}
	else 
	{
	cout<<"\nReprobado"<<endl;
}
return 0;
}
