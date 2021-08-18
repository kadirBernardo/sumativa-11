//Codificado por: sAfOrAs
//Codigo fuente: Signos del zodiaco
#include <iostream>
using namespace std;
int main()
{
	int mes, dia;
		cout<<"\t\t\tSIGNO ZODIACAL"<<endl;
		cout<<"(1)Enero	\t(2) Febrero	\t(3)Marzo	\t(4)Abril"<<endl;
		cout<<"(5)Mayo	\t(6)Junio		\t(7)Julio	\t(8)Agosto"<<endl;
		cout<<"(9)Septiembre	\t(10)Octubre	\t(11)Noviembre	\t(12)Diciembre"<<endl<<endl;
		cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"o" (dia y mes) "<<endl;
		cin>>dia>>mes;
		switch(mes)
		{
/*Enero*/			case 1:if(dia<21) cout<<"Capricornio"<<endl;
    											else	cout<<"Acuario"<<endl;break;
/*Febrero*/			case 2:if(dia<21) cout<<"Acuario"<<endl;
												else	cout<<"Piscis"<<endl;break;
/*Marzo*/			case 3:if(dia<21) cout<<"Piscis"<<endl;
												else	cout<<"Aries"<<endl;break;
/*Abril*/			case 4:if(dia<21) cout<<"Aries"<<endl;
												else	cout<<"Tauro"<<endl;break;
/*Mayo*/			case 5:if(dia<22) cout<<"Tauro"<<endl;
												else	cout<<"Geminis"<<endl;break;
/*Junio*/			case 6:if(dia<22) cout<<"Geminis"<<endl;
												else	cout<<"Cancer"<<endl;break;
/*julio*/			case 7:if(dia<23) cout<<"Cancer"<<endl;
												else	cout<<"Leo"<<endl;break;
/*Agosto*/			case 8: if(dia<23) cout<<"Leo"<<endl;
												else	cout<<"Virgo"<<endl;break;
/*Septiembre*/		case 9: if(dia<24) cout<<"Virgo"<<endl;
												else	cout<<"Libra"<<endl;break;
/*Octubre*/			case 10:if(dia<25) cout<<"Libra"<<endl;
												else	cout<<"Escorpio"<<endl;break;
/*Noviembre*/		case 11:if(dia<23)cout<<"Escorpio"<<endl;
												else	cout<<"Sagitario"<<endl;break;
/*Diciembre*/		case 12:if(dia<22)cout<<"Sagitario"<<endl;
												else	cout<<"Capricornio"<<endl;break;
									default:cout<<"INGRESE UNA FECHA VALIDA"<<endl;
		}
cin.ignore();return 0;
}
					case 1:
							switch(dia)
							{
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Acuario"<<endl;break;
							default:cout<<"Capricornio"<<endl;}break;
					case 2:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Piscis"<<endl;break;
							default:cout<<"Acuario"<<endl;break;}break;
					case 3:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Aries"<<endl;break;
							default:cout<<"Piscis"<<endl;break;}break;
					case 4:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
						cout<<"Tauro"<<endl;break;
							default:cout<<"Aries"<<endl;break;}break;
					case 5:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Gemimis"<<endl;break;
							default:cout<<"Tauro"<<endl;break;}break;
					case 6:
							swictch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Cancer"<<endl;break;
							default:cout<<"Geminis"<<endl;break;}break;
					case 7:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Leo"<<endl;break;
							default:cout<<"Cancer"<<endl;break;}break;
					case 8:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Virgo"<<endl;break;
							default:cout<<"Leo"<<endl;break}break;
					case 9:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Libra"<<endl;break;
							default:cout<<"Virgo"<<endl;break;}break;
					case 10:
							switch(dia){
							case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
							cout<<"Escorpio"<<endl;break;
							default:cout<<"Libra"<<endl;break}break;
					case 11:
						switch(dia){
						case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
						cout<<"Sagitario"<<endl;break;
						default:cout<<"Escorpio"<<endl;break;}break;
					case 12:
						switch (dia){
						case 21:case 22:case 23:case 24:case 25:case 26:case 27:case
						cout<<"Capricornio"<<endl;break;
						default:cout<<"Sagitario"<<endl;break;}break;
						
						
			}
cin.ignore(),return 0;
}					
