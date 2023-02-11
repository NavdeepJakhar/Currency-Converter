//CURRENCY CONVERTER
#include <iostream>
#include <cstdlib>
using namespace std;

class Currency
{
	public:
		int cur;
		float amount;
		
		void input()
		{
		    cout<<"\t\t\t\t***************************************************\n\t\t\t\t\t     ~  CURRENCY CONVERTER  ~\n\t\t\t\t\t\t------------------\n";
		    cout<<"\t\t\t\t___________________________________________________"<<endl;
			cout<<"\n\t\t\t\tCURRENCIES TO CONVERT RUPEES TO:\n\t\t\t\t(Press the corresponding number to choose currency) ";
			cout<<"\n\n\t\t\t\t1. United States Dollar (USD)\n\t\t\t\t2. Canadian Dollar (CAD)\n\t\t\t\t3. Japanese Yen (JPY)";
			cout<<"\n\t\t\t\t4. UAE Dirham (AED) \n\t\t\t\t5. Euro (EUR)\n\t\t\t\t6. Chinese Yuan (CNY)";
			cout<<"\n\t\t\t\t7. Pound Sterling (GBP) \n\t\t\t\t8. Sri Lankan Rupee (LKR)) \n\t\t\t\t9. Swiss Franc (CHF)";
			cout<<"\n\t\t\t\t10. Argentine Peso (ARS)) \n\t\t\t\t11. Bangladeshi Taka (BDT) \n\t\t\t\t12. Iranian Rial (IRR)"<<endl;
			cout<<"\t\t\t\t___________________________________________________"<<endl;
			cout<<"\n\t\t\t\tPress number: ";
			cin>>cur;
			if(cur<1 || cur>12)
			{
			    cout<<"\n\t\t\t\tInvalid choice. Choose again."<<endl;
			    exit(0);
			}
			
			cout<<"\n\t\t\t\tAmount to be converted (in rupees): ";
			cin>>amount;
			//upper boundary of final answer
			cout<<"\t\t\t\t___________________________________________________"<<endl;
			cout<<"\t\t\t\t---------------------------------------------------"<<endl;
			switch(cur)
			{
				case 1:
					usdollars (amount);
					break;
					
				case 2:
					candollars (amount);
					break;
						
				case 3:
					japyens (amount);
					break;
						
				case 4:
					uaedirham (amount);
					break;
						
				case 5:
					euro (amount);
					break;
						
				case 6:
					chyuan (amount);
					break;
					
				case 7:
					pster(amount);
					break;
					
				case 8:
					slrup (amount);
					break;
					
				case 9:
					swifranc (amount);
					break;
					
				case 10:
					argpeso (amount);
					break;
					
				case 11:
					bantaka (amount);
					break;
					
				case 12:
					iranrial (amount);
					break;
					
				default:
					cout<<"\t\t\t\tInvalid choice. Choose again."<<endl;
					break;
			}
		}
		
		void usdollars (float amt);
		void candollars (float amt);
		void japyens(float amt);
		void uaedirham(float amt);
		void euro(float amt);
		void chyuan(float amt);
		void pster(float amt);
		void slrup(float amt);
		void swifranc(float amt);
		void argpeso(float amt);
		void bantaka(float amt);
		void iranrial(float amt);
		
};

void Currency::usdollars (float amt)
{
	float usd; 
	float final;
	usd=0.012;
	final=amt*usd;
	cout<<endl<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in US Dollars: "<<final<<" USD"<<endl;
}
		
void Currency::candollars(float amt)
{
	float cand; 
	float final;
	cand=0.017;
	final=amt*cand;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Canadian Dollars: "<<final<<" CAD"<<endl;
}
		
void Currency::japyens(float amt)
{
	float japy; 
	float final;
	japy=1.65;
	final=amt*japy;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Yens: "<<final<<" JPY"<<endl;
}
		
void Currency::uaedirham(float amt)
{
	float uaedir; 
	float final;
	uaedir=0.044;
	final=amt*uaedir;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Dirhams: "<<final<<" AED"<<endl;
}
		
void Currency::euro(float amt)
{
	float eur; 
	float final;
	eur=0.011;
	final=amt*eur;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Euros: "<<final<<" EUR"<<endl;
}
		
void Currency::chyuan(float amt)
{
	float cyuan; 
	float final;
	cyuan=0.084;
	final=amt*cyuan;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Chinese Yuans: "<<final<<" CNY"<<endl;
}
		
void Currency::pster(float amt)
{
	float ster; 
	float final;
	ster=0.010;
	final=amt*ster;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Pound Sterlings: "<<final<<" GBP"<<endl;
}

void Currency::slrup(float amt)
{
	float srup; 
	float final;
	srup=4.41;
	final=amt*srup;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Sri Lankan Rupees: "<<final<<" LKR"<<endl;
}

void Currency::swifranc(float amt)
{
	float franc; 
	float final;
	franc=0.011;
	final=amt*franc;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Swiss Francs: "<<final<<" CHF"<<endl;
}

void Currency::argpeso(float amt)
{
	float peso; 
	float final;
	peso=2.12;
	final=amt*peso;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Argentine Pesos: "<<final<<" ARS"<<endl;
}

void Currency::bantaka(float amt)
{
	float taka; 
	float final;
	taka=1.28;
	final=amt*taka;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Bangladeshi Takas: "<<final<<" BDT"<<endl;
}

void Currency::iranrial(float amt)
{
	float rial; 
	float final;
	rial=504.33;
	final=amt*rial;
	cout<<"\n\t\t\t\tAmount ( "<<amt<<" INR ) in Iranian Rials: "<<final<<" IRR"<<endl;
}

int main()
{
	Currency c1;
	c1.input();
	cout<<"\n\t\t\t\t___________________________________________________"<<endl;
	cout<<"\t\t\t\t---------------------------------------------------"<<endl;
	return 0;
}
