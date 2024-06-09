#include <iostream>
using namespace std;
int main()
{
	float pre1=0, pre2=0, pre3=0, pre4=0, pre5=0, totpag, totpag2;
	string pro1, pro2, pro3, pro4, pro5;
	float d1, d2, d3, d4, d5, desc;
	 
	cout<<"Ingrese el nombre del producto 1: ";  cin>>pro1;
	cout<<"Ingrese costo del producto 1: $";  cin>>pre1;
	
	cout<<"\nIngrese el nombre del producto 2: ";  cin>>pro2;
	cout<<"Ingresa costo del producto 2: $";  cin>>pre2;
	
	cout<<"\nIngrese el nombre del producto 3: ";  cin>>pro3;
	cout<<"Ingrese costo del producto 3: $";  cin>>pre3;
	
	cout<<"\nIngrese el nombre del producto 4: ";  cin>>pro4;
	cout<<"Ingrese costo del producto 4: $";  cin>>pre4;
	
	cout<<"\nIngrese el nombre del producto 5: ";  cin>>pro5;
	cout<<"Ingrese costo del producto 5: $";  cin>>pre5;
	
	if (pre1<pre2 && pre1<pre3 && pre1<pre4 && pre1<pre5){
		d1=(pre1 * 7.5)/100;
	}
	if (pre2<pre1 && pre2<pre3 && pre2<pre4 && pre2<pre5){
		d2=(pre2 * 7.5)/100;
	}
	if (pre3<pre1 && pre3<pre2 && pre3<pre4 && pre3<pre5){
		d3=(pre3 * 7.5)/100;
	}
	if (pre4<pre1 && pre4<pre2 && pre4<pre3 && pre4<pre5){
		d4=(pre4 * 7.5)/100;
	}
	if (pre5<pre1 && pre5<pre2 && pre5<pre3 && pre5<pre4){
		d5=(pre5 * 7.5)/100;
	}
	
	cout<<"\n________________________________________";
	cout<<"\nSUPER PROGRAMADORES";
	cout<<"\n________________________________________";
	cout<<"\nPRODUCTO\t\tCOSTO\t\tDESCUENTO";
	
	cout<<"\n**"<<pro1<<"\t\t\t"<<"$"<<pre1<<"\t\t"<<"$"<<d1;
	cout<<"\n**"<<pro2<<"\t\t\t"<<"$"<<pre2<<"\t\t"<<"$"<<d2;
	cout<<"\n**"<<pro3<<"\t\t\t"<<"$"<<pre3<<"\t\t"<<"$"<<d3;
	cout<<"\n**"<<pro4<<"\t\t\t"<<"$"<<pre4<<"\t\t"<<"$"<<d4;
	cout<<"\n**"<<pro5<<"\t\t\t"<<"$"<<pre5<<"\t\t"<<"$"<<d5;
	
	totpag=pre1+pre2+pre3+pre4+pre5;
	desc=d1+d2+d3+d4+d5;
	cout<<"\n\t\t\t"<<"______"<<"\t\t"<<"______";
	cout<<"\nTOTAL"<<"\t\t\t"<<"$"<<totpag<<"\t\t"<<"$"<<desc;
	totpag2=totpag-desc;
	cout<<"\nTOTAL A PAGAR:\t\t"<<"$"<<totpag2;
	cout<<"\n*****************************************";
	cout<<"\nEl super 'Programadores' agradece su compra";
	return 0;
}
