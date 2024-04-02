#include<math.h>
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

const int item = 20;
char snack[item][100] = {"Pork Siomai", "Sharksfin Siomai", "Veggie Siomai", "Beef Siomai", "Japanese Siomai", "Empanada", "Lumpia Shanghai", "Hotdog Sandwich", "Siopao Asado<", "Palabok", "Longsilog", "Tapsilog", "Bacsilog", "Sisig", "BBQ", "Apple Juice", "Orange Juice", "Coke", "Sprite", "Nature's Spring"};
int sstotal[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int shack[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
char repeat;
//declaration for menu
char siom1[]="Pork Siomai", siom2[]="Sharksfin Siomai", siom3[]="Veggie Siomai", siom4[]="Beef Siomai", siom5[]="Japanese Siomai";
char mer1[]="Empanada", mer2[]="Lumpia Shanghai", mer3[]="Hotdog Sandwich", mer4[]="Siopao Asado", mer5[]="Palabok";
char rm1[]="Longsilog", rm2[]="Tapsilog", rm3[]="Bacsilog", rm4[]="Sisig", rm5[]="BBQ";
char drink1[]="Apple Juice", drink2[]="Orange Juice", drink3[]="Coke", drink4[]="Sprite", drink5[]="Nature's Spring";
int SS;
//declaration for additional orders
char add;
//declaration for price 
float total;
float grandtotal;
float quantity;
//void declarations 
int login();
int menu();
int amount();
int order();


int main ()
{ 	
	//username and password below the menu
    login();
    menu();

    return 0;
}

int menu()
{
	int ord;
    cout<<"\n\t\t\t\t-----What would you like to order?-----\n\n";

    cout<<"1) --- Siomai"<<"\n2) --- Merienda"<<"\n3) --- Rice Meals"<<"\n4) --- Drinks\n";
    cin>>ord;

    if ( ord == 1)
        {
            cout<<"\n\n\t\t\t 4-in-1 set of Siomai:";
            cout<<"\n\n\t\t\t1) ----- "<<siom1<<" ----- P50.00";
            cout<<"\n\n\t\t\t2) ----- "<<siom2<<" ----- P50.00";
            cout<<"\n\n\t\t\t3) ----- "<<siom3<<" ----- P50.00";
            cout<<"\n\n\t\t\t4) ----- "<<siom4<<" ----- P55.00";
            cout<<"\n\n\t\t\t5) ----- "<<siom5<<" ----- P55.00";
            cout<<"\n\t\t\t___________________________________\n";
            cin>>SS;
        }

    else if ( ord ==2)
        {
            cout<<"\n\t\t\tMerienda Packs:";
            cout<<"\n\n\t\t\t6) ----- "<<mer1<<" ----- P75.00";
            cout<<"\n\n\t\t\t7) ----- "<<mer2<<" ----- P75.00";
            cout<<"\n\n\t\t\t8) ----- "<<mer3<<" ----- P80.00";
            cout<<"\n\n\t\t\t9) ----- "<<mer4<<" ----- P80.00";
            cout<<"\n\n\t\t\t10) ----- "<<mer5<<" ----- P90.00";
            cout<<"\n\t\t\t___________________________________\n";
            cin>>SS;
        }

    else if ( ord ==3)
        {
            cout<<"\n\t\t\tRice Meal:";
            cout<<"\n\n\t\t\t11) ----- "<<rm1<<" ----- P95.00";
            cout<<"\n\n\t\t\t12) ----- "<<rm2<<" ----- P95.00";
            cout<<"\n\n\t\t\t13) ----- "<<rm3<<" ----- P100.00";
            cout<<"\n\n\t\t\t14) ----- "<<rm4<<" ----- P105.00";
            cout<<"\n\n\t\t\t15) ----- "<<rm5<<" ----- P105.00";
            cout<<"\n\t\t\t___________________________________\n";
            cin>>SS;
        }

    else if ( ord ==4)
        {
            cout<<"\n\t\t\tDrinks:";
            cout<<"\n\n\t\t\t16) ----- "<<drink1<<" ----- P30.00";
            cout<<"\n\n\t\t\t17)----- "<<drink2<<" ----- P30.00";
            cout<<"\n\n\t\t\t18) ----- "<<drink3<<" ----- P45.00";
            cout<<"\n\n\t\t\t19)----- "<<drink4<<" ----- P45.00";
            cout<<"\n\n\t\t\t20) ----- "<<drink5<<" ----- P45.00";
            cout<<"\n\t\t\t___________________________________\n";
            cin>>SS;
        }
    amount();
} 
            
int amount()
{
    cout<<"\n\n\t\t\tHow much would you like to order?\n ";
    cin>>quantity;
        
    if(quantity >= 1)
        {
            cout<<"\t\t\tYou are ordering "<<quantity<<"\n";
            switch (SS)
            {
                {
                    case 1: total = 50*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 2: total = 50*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 3: total = 50*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 4: total = 55*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 5: total = 55*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 6: total = 75*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 7: total = 75*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 8: total = 80*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 9: total = 80*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 10: total = 90*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 11: total = 95*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 12: total = 95*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 13: total = 100*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 14: total = 105*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 15: total = 105*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 16: total = 30*quantity;
                    sstotal[SS- 1] += total;
                    break;

                    case 17: total = 30*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 18: total = 45*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 19: total = 45*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    case 20: total = 45*quantity;
                    sstotal[SS- 1] += total;
                    break;
            
                    default : cout<<"\t\t\tInvalid Entry";
                    cout<<"\n\t\t\tOrder again? Y/N\n";
                    cin>>repeat;
                    if (repeat == 'Y') {
                    main();
                    }
                    else if (repeat == 'N', 'n'){
                    exit (0);
                    }
                }
            }
        }
    grandtotal += total;
    order();
}

int order()
{
    cout<<"\n\t\t\t----- Your Order -----"; 
    switch (SS)
        {
            case 1: cout<<"\n\n\t\t\t"<<quantity<<" of "<<siom1<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom1<<"";
            break;
            
            case 2 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<siom2<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom2<<"";
            break;
        
            case 3 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<siom3<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom3<<"";
            break;

            case 4 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<siom4<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom4<<"";
            break;
            
            case 5 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<siom5<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom5<<"";
            break;

            case 6 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<mer1<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom1<<"";
            break;
            
            case 7 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<mer2<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom2<<"";
            break;
        
            case 8 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<mer3<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom3<<"";
            break;

            case 9 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<mer4<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom4<<"";
            break;
            
            case 10 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<mer5<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom5<<"";
            break;

            case 11 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<rm1<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom1<<"";
            break;
            
            case 12 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<rm2<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom2<<"";
            break;
        
            case 13 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<rm3<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom3<<"";
            break;

            case 14 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<rm4<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom4<<"";
            break;
            
            case 15 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<rm5<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom5<<"";
            break;

            case 16 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<drink1<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom1<<"";
            break;
            
            case 17 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<drink2<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom2<<"";
            break;
        
            case 18 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<drink3<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom3<<"";
            break;

            case 19 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<drink4<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom4<<"";
            break;
            
            case 20 : cout<<"\n\n\t\t\t"<<quantity<<" of "<<drink5<<"\n";
            cout<<"\n\t\t\t\t\t Your total bill is Php "<<grandtotal<<" for "<<siom5<<"";
            break;
            
            default : cout<<"\t\t\tInvalid Entry";
            cout<<"\n\t\t\tOrder again? y/n\n";
            cin>>repeat;
            if (repeat == 'Y', 'y') {
		    main();
            }
            else if (repeat == 'N', 'n'){
            exit (0);
            }
        }
    cout<<"\n\t\t\t\t\tIs there anything you wish to add to your order? y/n ";
    cin>>repeat;
    shack[SS-1] += quantity;
    if (repeat == 'y') {
		menu();
    }else{
    	return 0;
	}
}

int login()
{
	
	char username[20], password[20], ch;
	int characters=0;

	retry: //for goto 
	
	cout<<"\nEnter your username: ";
	cin>>username;
	
	cout<<"\nEnter your password: ";
	characters=0;
	while (1){
	
		ch = getch();
		
		if (ch == 13){
			password[characters]='\0';
			break;
		}
		
		else if (ch == 8){
			if (characters>0){
				characters--;
				cout<<("\b \b");
			}
		}else{
			password[characters++]=ch;
			cout<<("* \b");
		}
	}
			
	
    if(strcmp(username,"animo") == 0 && strcmp(password,"lasalle") == 0)
	{
    	cout<<"\n\n\t\t\t\t----- Welcome to The Snack Shack! -----";
	}
	
	else if(strcmp(username,"admin") == 0 && strcmp(password,"pass") == 0)
	{
    	cout<<"\n\n\t\t\t\t----- Welcome to The Snack Shack! -----";
	}
	
	else if(strcmp(username,"snack") == 0 && strcmp(password,"shack") == 0)
	{
    	cout<<"\n\n\t\t\t----- Welcome to The Snack Shack! -----";
	}
	else
	{
		cout<<"\n\nThe username or password you entered is wrong.\n";
		
			goto retry;
	}
	
}
