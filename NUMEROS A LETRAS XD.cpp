#include <iostream>
using namespace std;
int main(){
	int num=0, uni, dece, cente, uni_mil, dece_mil, cente_mil;
	char resp;
	cout<<"hecho por Samuel Mares Barragán y Juan Antonio García Morante"<<endl;
	do{
		system("Title ESCOJE UN NUMERO");
		system("color a0");
		cout<<"Ingrese un numero (rango de 0 a 999999): ";
		cin>>num;
		while(num<0 || num>999999){
			cout<<"\nIngrese un numero valido: ";
			cin>>num;
		}
		
		uni=num%10; num/=10;
		dece=num%10; num/=10;
		cente=num%10; num/=10;
		uni_mil=num%10; num/=10;
		dece_mil=num%10; num/=10;
		cente_mil=num%10; num/=10;
		
		switch (cente_mil){
			case 0: cout<<""; break;
			case 1:{
				if(dece_mil==0 && uni_mil==0){
					cout<<"cien ";
				}else if(dece_mil!=0 || uni_mil==0){
					cout<<"ciento ";
				}else if(dece_mil==0 || uni_mil!=0){
					cout<<"ciento ";
				}
				break;
			} 
			case 2: cout<<"doscientos "; break;
			case 3: cout<<"trescientos "; break;
			case 4: cout<<"cuatrocientos "; break;
			case 5: cout<<"quinientos "; break;
			case 6: cout<<"seiscientos "; break;
			case 7: cout<<"setecientos "; break;
			case 8: cout<<"ochocientos "; break;
			case 9: cout<<"novecientos "; break;
		}
		
		switch (dece_mil){
			case 0: cout<<""; break;
			case 1:{
				if(uni_mil==0){
					cout<<"diez ";
				}else if(uni_mil==1){
					cout<<"once ";
				}else if(uni_mil==2){
					cout<<"doce ";
				}else if(uni_mil==3){
					cout<<"trece ";
				}else if(uni_mil==4){
					cout<<"catorce ";
				}else if(uni_mil==5){
					cout<<"quince ";
				}else{
					cout<<"dieci";
				}
				break;
			}
			case 2:{
				if(uni_mil!=0){
					cout<<"veinti";
				}else if(uni_mil==0){
					cout<<"veinte mil ";
				}else{
					cout<<"veinte ";
				}
				break;
			}
			case 3:{
				if(uni_mil==0){
					cout<<"treinta mil ";
				}else{
					cout<<"treinta";
				}
				break;
			}
			case 4:{
				if(uni_mil==0){
					cout<<"cuarenta mil ";
				}else{
					cout<<"cuarenta ";
				}
				break;
			}
			case 5:{
				if(uni_mil==0){
					cout<"cincuenta mil ";
				}else{
					cout<<"cincuenta ";
				}
				break;
			}
			case 6:{
				if(uni_mil==0){
					cout<<"sesenta mil ";
				}else{
					cout<<"sesenta ";
				}
				break;
			}
			case 7:{
				if(uni_mil==0){
					cout<<"setenta mil ";
				}else{
					cout<<"setenta ";
				}
				break;
			}
			case 8:{
				if(uni_mil==0){
					cout<<"ochenta mil ";
				}else{
					cout<<"ochenta ";
				}
				break;
			}
			case 9:{
				if(uni_mil==0){
					cout<<"noventa mil ";
				}else{
					cout<<"noventa ";
				}
				break;
			}
		}
		
		switch (uni_mil){
			case 0: cout<<""; break;
			case 1:{
				if(cente==0 || dece==0 || uni==0){
					cout<<"mil ";
				}else if(dece_mil==1){
					cout<<"mil ";
				}else if(dece_mil==2){
					cout<<"un mil ";
				}else if(dece_mil==0){
					cout<<"un mil ";
				}else if(dece_mil!=0){
					cout<<"y un mil ";
				}
				break;
			} 
			case 2:{
				if(dece_mil==1){
					cout<<"mil ";
				}else if(dece_mil==2){
					cout<<"dos mil ";
				}else if(dece_mil==0){
					cout<<"dos mil ";
				}else if(dece_mil!=0){
					cout<<"y dos mil ";
				}
				break;
			}
			case 3:{
				if(dece_mil==1){
					cout<<"mil ";
				}else if(dece_mil==2){
					cout<<"tres mil ";
				}else if(dece_mil==0){
					cout<<"tres mil ";
				}else if(dece_mil!=0){
					cout<<"y tres mil ";
				}
				break;
			}
			case 4:{
				if(dece_mil==1){
					cout<<"mil ";
				}else if(dece_mil==2){
					cout<<"cuatro mil ";
				}else if(dece_mil==0){
					cout<<"cuatro mil ";
				}else if(dece_mil!=0){
					cout<<"y cuatro mil ";
				}
				break;
			}
			case 5:{
				if(dece_mil==1){
					cout<<"mil ";
				}else if(dece_mil==2){
					cout<<"cinco mil ";
				}else if(dece_mil==0){
					cout<<"cinco mil ";
				}else if(dece_mil!=0){
					cout<<"y cinco mil ";
				}
				break;
			}
			case 6:{
				if(dece_mil==1){
					cout<<"seis mil ";
				}else if(dece_mil==2){
					cout<<"seis mil ";
				}else if(dece_mil==0){
					cout<<"seis mil ";
				}else if(dece_mil!=0){
					cout<<"y seis mil ";
				}
				break;
			}
			case 7:{
				if(dece_mil==1){
					cout<<"siete mil ";
				}else if(dece_mil==2){
					cout<<"siete mil ";
				}else if(dece_mil==0){
					cout<<"siete mil ";
				}else if(dece_mil!=0){
					cout<<"y siete mil ";
				}
				break;
			}
			case 8:{
				if(dece_mil==1){
					cout<<"ocho mil ";
				}else if(dece_mil==2){
					cout<<"ocho mil ";
				}else if(dece_mil==0){
					cout<<"ocho mil ";
				}else if(dece_mil!=0){
					cout<<"y ocho mil ";
				}
				break;
			}
			case 9:{
				if(dece_mil==1){
					cout<<"nueve mil ";
				}else if(dece_mil==2){
					cout<<"nueve mil ";
				}else if(dece_mil==0){
					cout<<"nueve mil ";
				}else if(dece_mil!=0){
					cout<<"y nueve mil ";
				}
				break;
			}	
		}
		
		switch (cente){
			case 0: cout<<""; break;
			case 1:{
				if(dece==0 && uni==0){
					cout<<"cien ";
				}else if(dece!=0 || uni==0){
					cout<<"ciento ";
				}else if(dece==0 || uni!=0){
					cout<<"ciento ";
				}
				break;
			}
			case 2: cout<<"doscientos "; break;
			case 3: cout<<"trescientos "; break;
			case 4: cout<<"cuatrocientos "; break;
			case 5: cout<<"quinientos "; break;
			case 6: cout<<"seiscientos "; break;
			case 7: cout<<"setecientos "; break;
			case 8: cout<<"ochocientos "; break;
			case 9: cout<<"novecientos "; break;
		}
		
		switch (dece){
			case 0: cout<<""; break;
			case 1:{
				if(uni==0){
					cout<<"diez ";
				}else if(uni==1){
					cout<<"once ";
				}else if(uni==2){
					cout<<"doce ";
				}else if(uni==3){
					cout<<"trece ";
				}else if(uni==4){
					cout<<"catorce ";
				}else if(uni==5){
					cout<<"quince ";
				}else{
					cout<<"dieci";
				}
				break;
			}
			case 2:{
				if(uni!=0){
					cout<<"veinti";
				}else{
					cout<<"veinte ";
				}
				break;
			}
			case 3: cout<<"treinta "; break;
			case 4: cout<<"cuarenta "; break;
			case 5: cout<<"cincuenta "; break;
			case 6: cout<<"sesenta "; break; 
			case 7: cout<<"setenta "; break;
			case 8: cout<<"ochenta "; break;
			case 9: cout<<"noventa "; break;
		}
		
		switch (uni){
			case 0: cout<<""; break;
			case 1:{
				if(dece==1){
					cout<<"";
				}else if(dece==2){
					cout<<"uno";
				}else if(dece==0){
					cout<<"uno";
				}else if(dece!=0){
					cout<<"y uno";
				}
				break;
			} 
			case 2:{
				if(dece==1){
					cout<<"";
				}else if(dece==2){
					cout<<"dos";
				}else if(dece==0){
					cout<<"dos";
				}else if(dece!=0){
					cout<<"y dos";
				}
				break;
			}
			case 3:{
				if(dece==1){
					cout<<"";
				}else if(dece==2){
					cout<<"tres";
				}else if(dece==0){
					cout<<"tres";
				}else if(dece!=0){
					cout<<"y tres";
				}
				break;
			}
			case 4:{
				if(dece==1){
					cout<<"";
				}else if(dece==2){
					cout<<"cuatro";
				}else if(dece==0){
					cout<<"cuatro";
				}else if(dece!=0){
					cout<<"y cuatro";
				}
				break;
			}
			case 5:{
				if(dece==1){
					cout<<"";
				}else if(dece==2){
					cout<<"cinco";
				}else if(dece==0){
					cout<<"cinco";
				}else if(dece!=0){
					cout<<"y cinco";
				}
				break;
			}
			case 6:{
				if(dece==1){
					cout<<"seis";
				}else if(dece==2){
					cout<<"seis";
				}else if(dece==0){
					cout<<"seis";
				}else if(dece!=0){
					cout<<"y seis";
				}
				break;
			}
			case 7:{
				if(dece==1){
					cout<<"siete";
				}else if(dece==2){
					cout<<"siete";
				}else if(dece==0){
					cout<<"siete";
				}else if(dece!=0){
					cout<<"y siete";
				}
				break;
			}
			case 8:{
				if(dece==1){
					cout<<"ocho";
				}else if(dece==2){
					cout<<"ocho";
				}else if(dece==0){
					cout<<"ocho";
				}else if(dece!=0){
					cout<<"y ocho";
				}
				break;
			}
			case 9:{
				if(dece==1){
					cout<<"nueve";
				}else if(dece==2){
					cout<<"nueve";
				}else if(dece==0){
					cout<<"nueve";
				}else if(dece!=0){
					cout<<"y nueve";
				}
				break;
			}		
		}
	
		do{
			system("Title RESPONDE");
			system("color 3e");
			cout<<"\nDesea otro numero? (s/n): ";
			cin>>resp;
			if(resp!='S' && resp!='s' && resp!='N' && resp!='n'){
				system("color cf");
				cout<<"\nOpcion no valida"<<endl;
			}
		}while(resp!='S' && resp!='s' && resp!='N' && resp!='n');
	}while(resp=='s' || resp=='S');
}
