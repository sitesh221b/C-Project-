//********************************************//
//               HEADER FILES                 //
//********************************************//
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int cart=0;
char log_name[50];

class shop
{
	int ch;
	char *menutype;

	public:

	void head()
	{
	 clrscr();
	 cout<<"         \t\t\tWELCOME "<<log_name<<"TO..... "<<endl<<endl;
	 cout<<" + = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = +"<<endl;
	 cout<<" |                                                                           |"<<endl;
	 cout<<" |   $$$$$$$$$$$$$  ###                           OOOOOOOOOO NNNN       NN   |"<<endl;
	 cout<<" |   $$$$$$$$$$$$$  ###                           OOOOOOOOOO NNNN       NN   |"<<endl;
	 cout<<" |   $$$$     $$$$  ###        	                  OO      OO NN NN      NN   |"<<endl;
	 cout<<" |   $$$$           ###       oooooooooo ppppppp  OO      OO NN  NN     NN   |"<<endl;
	 cout<<" |   $$$$$$$$$$$$$  ###       oooooooooo pp   pp  OO      OO NN   NN    NN   |"<<endl;
	 cout<<" |   $$$$$$$$$$$$$  ######### oo      oo pp   pp  OO      OO NN    NN   NN   |"<<endl;
	 cout<<" |            $$$$  ######### oo      oo ppppppp  OO      OO NN     NN  NN   |"<<endl;
	 cout<<" |   $$$$     $$$$  ###   ### oo      oo pp       OO      OO NN      NN NN   |"<<endl;
	 cout<<" |   $$$$$$$$$$$$$  ###   ### oooooooooo pp       OOOOOOOOOO NN       NNNN   |"<<endl;
	 cout<<" |   $$$$$$$$$$$$$  ###   ### oooooooooo pp       OOOOOOOOOO NN       NNNN   |"<<endl;
	 cout<<" |                                                                           |"<<endl;
	 cout<<" + = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = +"<<endl;
	 cout<<" \n\n\tKEEP YOUR SHOPPING ON... "<<endl;
	 gotoxy(25,25);
	 cout<<" Press Enter to continue...";
	 getch();
	 home();
	}

	void login()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"LOGIN MENU : ";
		gotoxy(30,7);
		cout<<"1) Sign in";
		gotoxy(30,9);
		cout<<"2) Create Account";
		menutype = "log";
		ch = input();
		if(ch<=2)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			login();
		}
	}

	void home()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1) Clothing";
		gotoxy(30,10);
		cout<<"2) Footwear";
		gotoxy(30,12);
		cout<<"3) Video Games";
		gotoxy(30,14);
		cout<<"4) Electronics";
		gotoxy(30,16);
		cout<<"5) Books";
		gotoxy(30,18);
		cout<<"6) View Cart";
		gotoxy(30,20);
		cout<<"7) EXIT";
		menutype = "main";
		ch = input();
		if(ch<=7)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			home();
		}
	}

	void clothing()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1) Menswear";
		gotoxy(30,10);
		cout<<"2) Womenswear";
		gotoxy(30,12);
		cout<<"3) Go to main menu";
		menutype = "cloth";
		ch = input();
		if(ch<=3)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			clothing();
		}
	}

	void menswear()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1) T-Shirts";
		gotoxy(30,10);
		cout<<"2) Shirts";
		gotoxy(30,12);
		cout<<"3) Jeans";
		gotoxy(30,14);
		cout<<"4) Go to back menu";
		menutype = "mens";
		ch = input();
		if(ch<=4)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			menswear();
		}
	}

	void tshirt()
	{
		int s,pc,p=pc*s*5;
		char br[20],cl[10],c;
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired T-Shirt :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size - ";
		cin>>s;
		gotoxy(10,10);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,12);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,14);
		cout<<"Your desired T-Shirt found !";
		delay(1500);
		gotoxy(30,16);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,16);
		cout<<"Total Price - "<<p;
		gotoxy(20,18);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("T-Shirt",br,s,cl,p);
			gotoxy(17,20);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			menswear();
		}
		else
		{
			menswear();
		}
	}

	void shirt()
	{
		int s,pc,p=pc*s*5;
		char br[20],cl[10],c;
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Shirt :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size - ";
		cin>>s;
		gotoxy(10,10);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,12);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,14);
		cout<<"Your desired Shirt found !";
		delay(1500);
		gotoxy(30,16);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,18);
		cout<<"Total Price - "<<p;
		gotoxy(20,20);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Shirt",br,s,cl,p);
			gotoxy(17,22);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			menswear();
		}
		else
		{
			menswear();
		}
	}
	void jeans()
	{
		int pc,s,p=pc*s*5;
		char br[20],cl[10],c;
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Jeans :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size - ";
		cin>>s;
		gotoxy(10,10);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,12);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,14);
		cout<<"Your desired T-Shirt found !";
		delay(1500);
		gotoxy(30,16);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,16);
		cout<<"Total Price - "<<p;
		gotoxy(20,18);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Jeans",br,s,cl,p);
			gotoxy(17,20);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			home();
		}
		else
		{
			home();
		}
	}

	void womenswear()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1) T-Shirts";
		gotoxy(30,10);
		cout<<"2) Jeans";
		gotoxy(30,12);
		cout<<"3) Saree";
		gotoxy(30,14);
		cout<<"4) Go to back menu";
		menutype = "womens";
		ch = input();
		if(ch<=4)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			womenswear();
		}
	}
	void saree()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"THE PRODUCT IS NOT AVAILABLE !!!";
		gotoxy(27,7);
		cout<<"We are truly Sorry for our inconvinence";
		getch();
		womenswear();
	}

	void footwear()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1) Shoes";
		gotoxy(30,10);
		cout<<"2) Sandals";
		gotoxy(30,12);
		cout<<"3) Go to main menu";
		menutype = "foot";
		ch =input();
		if(ch<=3)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			footwear();
		}
	}
	void shoe()
	{
		int s,pc,p=pc*s*5;
		char t[8],br[20],cl[10],c;
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Shoe :-";
		gotoxy(10,6);
		cout<<"Type(Formal/Classic/Sport) - ";
		gets(t);
		gotoxy(10,8);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,10);
		cout<<"Size - ";
		cin>>s;
		gotoxy(10,12);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,14);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,16);
		cout<<"Your desired Shoe found !";
		delay(1000);
		gotoxy(30,18);
		cout<<"Pieces : ";
		gotoxy(30,20);
		cout<<"Total Price - "<<p;
		gotoxy(20,22);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Shoe",br,s,cl,p);
			gotoxy(17,24);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			shoe();
		}
		else
		{
			footwear();
		}
	}
	void sandal()
	{
		int s,pc,p=pc*s*5;
		char br[20],cl[10],c;
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Sandal :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size - ";
		cin>>s;
		gotoxy(10,10);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,14);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,16);
		cout<<"Your desired Sandal found !";
		delay(1000);
		gotoxy(30,18);
		cout<<"Pieces : ";
		gotoxy(30,20);
		cout<<"Total Price - "<<p;
		gotoxy(20,22);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Sandal",br,s,cl,p);
			gotoxy(20,18);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			shoe();
		}
		else
		{
			footwear();
		}
	}

	void vgames()
	{
		clrscr();
		gotoxy(15,3);
		cout<<"-------VIDEO GAMES(PC/PS3/PS4/XBOX ONE)-------";
		gotoxy(10,6);
		cout<<"1) Assassin's Creed Rogue";
		gotoxy(10,7);
		cout<<"Genre - Adventure";
		gotoxy(10,8);
		cout<<"Price - 1599";
		gotoxy(10,10);
		cout<<"2) Batman Arkham Knight";
		gotoxy(10,11);
		cout<<"Genre - Action";
		gotoxy(10,12);
		cout<<"Price - 1499";
		gotoxy(10,14);
		cout<<"3) Call of Duty Black Ops III";
		gotoxy(10,15);
		cout<<"Genre - Shooter";
		gotoxy(10,16);
		cout<<"Price - 2099";
		gotoxy(10,18);
		cout<<"4) The Division";
		gotoxy(10,19);
		cout<<"Genre - Shooter";
		gotoxy(10,20);
		cout<<"Price - 1799";
		gotoxy(10,22);
		cout<<"5) Grand Theft Auto 5";
		gotoxy(10,23);
		cout<<"Genre - Action";
		gotoxy(10,24);
		cout<<"Price - 2399";
		gotoxy(10,34);
		cout<<"6) Go to back menu ";
		menutype = "game";
		ch = input();
		if(ch<=6)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			vgames();
		}
	}
	void acr()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"Your game has been added to cart";
		getch();
		addcart("Assassins Creed Rogue","Adventure",1,"Ubisoft",1599);
		vgames();
	}
	void bak()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"Your game has been added to cart";
		getch();
		addcart("Batman Arkham Knight","Action",1,"Rocksteady Studios",1499);
		vgames();
	}
	void cod12()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"Your game has been added to cart";
		getch();
		addcart("Call of Duty Black Ops III","Shooter",1,"Activision",2099);
		vgames();
	}
	void td()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"Your game has been added to cart";
		getch();
		addcart("The Division","Action",1,"Ubisoft",1799);
		vgames();
	}
	void gta5()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"Your game has been added to cart";
		getch();
		addcart("Grand Theft Auto 5","Action",1,"Rockstar Games",2399);
		vgames();
	}
	void electronics()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1) Laptops";
		gotoxy(30,10);
		cout<<"2) Pendrives";
		gotoxy(30,12);
		cout<<"3) External HDD";
		gotoxy(30,14);
		cout<<"4) Graphics Card";
		gotoxy(30,16);
		cout<<"5) Headphones";
		gotoxy(30,18);
		cout<<"6) Camera";
		gotoxy(30,20);
		cout<<"7) Go to main menu";
		menutype = "elec";
		ch = input();
		if(ch<=7)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			electronics();
		}
	}
	void laptops()
	{
		int s,r,pc,p=pc*r*s*100;
		char br[20],c,cl[10];
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Laptops :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"HDD Size(GB) - ";
		cin>>s;
		gotoxy(10,10);
		cout<<"RAM(GB) - ";
		cin>>r;
		gotoxy(10,12);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,16);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,18);
		cout<<"Your desired Laptop found !";
		delay(1000);
		gotoxy(30,20);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,22);
		cout<<"Total Price - "<<p;
		gotoxy(20,24);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Laptop",br,s,cl,pc);
			gotoxy(17,26);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			electronics();
		}
		else
		{
			electronics();
		}
	}
	void pendrive()
	{
		int s,pc,p=pc*s*50;
		char br[20],c,cl[10];
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired PenDrive :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size(GB) - ";
		cin>>s;
		gotoxy(10,10);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,16);
		cout<<"Your desired PenDrive found !";
		delay(1000);
		gotoxy(30,18);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,20);
		cout<<"Total Price - "<<p;
		gotoxy(20,22);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("T-Shirt",br,s,cl,p);
			gotoxy(17,24);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			electronics();
		}
		else
		{
			electronics();
		}
	}
	void hdd()
	{
		int s,pc,p=pc*s*100;
		char br[20],c,cl[10];
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired External HDD :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size - ";
		cin>>s;
		gotoxy(30,14);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,16);
		cout<<"Your desired External HDD found !";
		delay(1000);
		gotoxy(30,18);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,20);
		cout<<"Total Price - "<<p;
		gotoxy(20,22);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("External HDD",br,s,cl,p);
			gotoxy(17,24);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			electronics();
		}
		else
		{
			electronics();
		}
	}
	void graphic()
	{
		int s,pc,p=pc*s*100;
		char br[20],c,cl[10];
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Graphics Card :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Size(GB) - ";
		cin>>s;
		gotoxy(30,14);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,16);
		cout<<"Your desired Graphics Card found !";
		delay(1500);
		gotoxy(30,18);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,20);
		cout<<"Total Price - "<<p;
		gotoxy(20,22);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Graphics Card",br,s,cl,p);
			gotoxy(17,24);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			electronics();
		}
		else
		{
			electronics();
		}
	}
	void headphone()
	{
		clrscr();
		gotoxy(27,5);
		cout<<"The Product is not available !!!";
		gotoxy(27,7);
		cout<<"Sorry for our inconvinence";
		getch();
		electronics();
	}
	void camera()
	{
		int pc,s=0,p=pc*1000;
		char br[20],c,cl[10];
		clrscr();
		gotoxy(22,3);
		cout<<"Enter the details for your desired Camera :-";
		gotoxy(10,6);
		cout<<"Brand - ";
		gets(br);
		gotoxy(10,8);
		cout<<"Colour - ";
		gets(cl);
		gotoxy(30,14);
		cout<<"Searching....";
		delay(2000);
		gotoxy(20,16);
		cout<<"Your desired Camera found !";
		delay(1000);
		gotoxy(30,18);
		cout<<"Pieces : ";
		cin>>pc;
		gotoxy(30,20);
		cout<<"Total Price - "<<p;
		gotoxy(20,22);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Camera",br,s,cl,p);
			gotoxy(20,18);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			electronics();
		}
		else
		{
			electronics();
		}
	}

	void books()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1. Fiction";
		gotoxy(30,10);
		cout<<"2. Non Fiction";
		gotoxy(30,12);
		cout<<"3. Go to main menu";
		menutype = "book";
		ch = input();
		if(ch<=3)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			books();
		}
	}
	void fiction()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1. Digital Fortress";
		gotoxy(30,10);
		cout<<"2. Angels & Demons";
		gotoxy(30,12);
		cout<<"3. Deception Point";
		gotoxy(30,14);
		cout<<"4. The Da Vinci Code";
		gotoxy(30,16);
		cout<<"5. The Lost Symbol";
		gotoxy(30,18);
		cout<<"6. Inferno";
		gotoxy(30,20);
		cout<<"7. Harry Potter Collection";
		gotoxy(30,22);
		cout<<"8. Sherlock Holmes Complete";
		gotoxy(30,24);
		cout<<"9. Go to back Menu";
		menutype = "fbook";
		ch = input();
		if(ch<=9)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			fiction();
		}
	}
	void tdf()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Sci/Fi & Techno-thriller";
		gotoxy(25,11);
		cout<<"Pages - 544";
		gotoxy(25,13)	;
		cout<<"Price - 199";
		gotoxy(25,15);
 cout<<"About : \n\tWhen the United States National Security Agency's code-breaking ";
 cout<<"supercomputer (TRANSLTR) encounters a new and complex code Digital Fortress ";
 cout<<"that it cannot break, Commander Trevor Strathmore calls in Susan Fletcher, ";
 cout<<"their head cryptographer, to crack it.";
 cout<<"She discovers that it was written by Ensei Tankado, a former NSA employee ";
 cout<<"who became displeased with the NSA's intrusion into people's private ";
 cout<<"lives. Tankado intends to auction the code's algorithm on his website and ";
 cout<<"have his partner, NDAKOTA, release it for free if he dies, essentially ";
 cout<<"holding the NSA hostage. The agency is determined to stop Digital Fortress ";
 cout<<"from becoming a threat to national security.";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Digital Fortress","Dan Brown",544,"Sci/Fi & Techno-thriller",199);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void ad()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Sci/Fi";
		gotoxy(25,11);
		cout<<"Pages - 616";
		gotoxy(25,13);
		cout<<"Price - 209";
		gotoxy(25,15);
 cout<<"About : \n\tCERN director Maximilian Kohler discovers one of thefacility's physicists, Leonardo Vetra, murdered. ";
 cout<<"His chest is branded with an ambigram of the word Illuminati. Kohler contacts Robert Langdon, an expert on the Illuminati, ";
 cout<<"who determines that the ambigram is authentic. Kohler calls Vetra's adopted daughter Vittoria to the scene, and it ";
 cout<<"is ascertained that the Illuminati have stolen a canister containing antimatter — a substance with destructive potential ";
 cout<<"comparable to a nuclear weapon. When at CERN the canister is stored in a unique electrical charger which ensures the ";
 cout<<"antimatter's stability but when removed its back-up battery provides power for 24 hours after which the anti-matter will ";
 cout<<"self-destruct. The canister is somewhere in Vatican City, with a security camera in front of it, as its digital clock counts ";
 cout<<"down to the explosion.";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Angels & Demons","Dan Brown",616,"Sci/Fi",209);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void tdp()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Thriller";
		gotoxy(25,11);
		cout<<"Pages - 372";
		gotoxy(25,13);
		cout<<"Price - 249";
		gotoxy(25,15);
 cout<<"About : \n\n\tIn the eve of a U.S. presidential election, NASA discovers concrete proof of ";
 cout<<"extraterrestrial life within a meteorite in the Milne Ice Shelf. The discovery gains overwhelming political ";
 cout<<"importance because NASA's gross expenditure and low yield is the hottest topic of debate. ";
 cout<<"To verify the authenticity of the evidence, the incumbent president sends a team of five carefully ";
 cout<<"chosen individuals: four scientists Michael Tolland, Corky Marlinson, Norah Mangor and ";
 cout<<"Wailee Ming and a National Reconnaissance Office (NRO) employee, Rachel Sexton, daughter of ";
 cout<<"Senator Sexton the presidential candidate.";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Deception Point","Dan Brown",372,"Thriller",249);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void tdc()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Mystery, Detective Fiction, Conspiracy Fiction, Thriller";
		gotoxy(25,11);
		cout<<"Pages - 583";
		gotoxy(25,13);
		cout<<"Price - 299";
		gotoxy(25,15);
 cout<<"About : ";
 cout<<"\n\tLouvre Ronron and Priory of Sion Grand Mentor Jacques Saunière is fatally shot one night at the";
 cout<<"museum by an albino Catholic monk named Silas, who is working on behalf of someone he knows only";
 cout<<"as the Teacher, who wishes to discover the location of the 'keystone', an item crucial to the search";
 cout<<"for the Holy Grail. After Saunire's body is discovered in the pose of the Vitruvian Man, the police";
 cout<<"summon Harvard Professor Robert Langdon, who is in town on business. Police Captain Bezu Fache tells";
 cout<<"him that he was summoned to help the police decode the cryptic message Saunire left during the final";
 cout<<"minutes of his life. The message includes a Fibonacci sequence out of order. Langdon explains to Fache";
 cout<<"that Saunire was a leading authority on the subject of goddess artwork and that the pentacle Saunire";
 cout<<"drew in his own blood represents an allusion to the goddess and not 'devil worship', as Fache says.";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("The Da Vinci Code","Dan Brown",583,"Mystery",299);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void tls()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Crime, Mystery, Thriller";
		gotoxy(25,11);
		cout<<"Pages - 671";
		gotoxy(25,13);
		cout<<"Price - 399";
		gotoxy(25,15);
 cout<<"About : ";
 cout<<"\n\tHarvard symbologist Robert Langdon is invited to give a lecture at the United States";
 cout<<"Capitol, with the invitation apparently from his mentor, a 33rd degree Mason named Peter";
 cout<<"Solomon, who is the head of the Smithsonian Institution. Solomon has also asked him to";
 cout<<"bring a small, sealed package which he had entrusted to Langdon years earlier. When";
 cout<<"Langdon arrives at the Capitol, however, he learns that the invitation he received was";
 cout<<"not from Solomon, but from Solomon's kidnapper, Mal'akh, who has left Solomon's severed";
 cout<<"right hand in the middle of the Capitol Rotunda in a recreation of the Hand of Mysteries.";
 cout<<"Mal'akh then contacts Langdon, charging him with finding both the Mason's Pyramid, which";
 cout<<"Masons believe is hidden somewhere underground in Washington D.C., and the Lost Word,";
 cout<<"lest Solomon be executed.";
		gotoxy(25,27);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("The Lost Symbol","Dan Brown",671,"Crime",399);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void i()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Mystery, Fact Fiction, Conspiracy fiction, Thriller";
		gotoxy(25,11);
		cout<<"Pages - 609";
		gotoxy(25,13);
		cout<<"Price - 419";
		gotoxy(25,15);
 cout<<"About : ";
 cout<<"\n\tHarvard University professor Robert Langdon wakes up in a hospital";
 cout<<"with a head wound and no memory of the last few days. His last memory is";
 cout<<"walking on the Harvard campus, but he quickly realizes that he is now in";
 cout<<"Florence. Sienna Brooks, one of the doctors tending to him, tells him he";
 cout<<"suffered a concussion from being grazed by a bullet and had stumbled into";
 cout<<"the emergency ward. Suddenly, Vayentha, a female assassin who has been";
 cout<<"following Robert, breaks into the hospital, shoots the doctor in charge";
 cout<<"of Robert's care, and approaches Robert's room. Sienna grabs Robert and";
 cout<<"they flee to her apartment.";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Inferno","Dan Brown",609,"Mystery",419);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void hpc()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Dan Brown";
		gotoxy(25,9);
		cout<<"Genre - Fantasy, Young-Adult Fiction, Mystery, Thriller";
		gotoxy(25,11);
		cout<<"Pages - 6784";
		gotoxy(25,13);
		cout<<"Price - 4133";
		gotoxy(25,15);
 cout<<"About : ";
 cout<<"\n\tThe novels revolve around Harry Potter, an orphan who discovers at the age";
 cout<<"of 11 that he is a wizard, living within the ordinary world of non-magical";
 cout<<"people, known as Muggles. The wizarding world is secret from the Muggle";
 cout<<"world, presumably to avoid persecution of witches and wizards. His ability";
 cout<<"is inborn, and such children are invited to attend an exclusive magic school";
 cout<<"that teaches the necessary skills to succeed in the wizarding world.";
 cout<<"Harry becomes a student at Hogwarts School of Witchcraft and Wizardry, and";
 cout<<"it is here where most of the events in the series take place. As Harry develops";
 cout<<"through his adolescence, he learns to overcome the problems that face him:";
 cout<<"magical, social and emotional, including ordinary teenage challenges such as";
 cout<<"friendships, infatuation and exams, and the greater test of preparing himself";
 cout<<"for the confrontation in the real world that lies ahead.";
		gotoxy(25,35);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Harry Potter Collection","J.K. Rowling",6784,"Fantasy",4133);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void shc()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Sir Arthur Ignatius Conan Doyle";
		gotoxy(25,9);
		cout<<"Genre - Mystery";
		gotoxy(25,11);
		cout<<"Pages - 1099";
		gotoxy(25,13);
		cout<<"Price - 399";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Sherlock Holmes Complete","Conan Doyle",1099,"Mystery",399);
			gotoxy(20,30);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			fiction();
		}
		else
		{
			fiction();
		}
	}
	void nfiction()
	{
		clrscr();
		gotoxy(25,2);
		cout<<log_name;
		gotoxy(34,2);
		cout<<"Cart("<<cart<<")";
		gotoxy(20,5);
		cout<<"-------CHOOSE YOUR CATEGORY-------";
		gotoxy(30,8);
		cout<<"1. Wings of Fire";
		gotoxy(30,10);
		cout<<"2. A Brief History of Time";
		gotoxy(30,12);
		cout<<"3. The Right Stuff";
		gotoxy(30,14);
		cout<<"4. The Ghost Hunters";
		gotoxy(30,16);
		cout<<"5. Go to back Menu";
		menutype = "nfbook";
		ch = input();
		if(ch<=5)
		{
			acceptmenu(ch,menutype);
		}
		else
		{
			nfiction();
		}
	}
	void wof()
	{
		char c;
		clrscr();
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - APJ Abdul Kalam";
		gotoxy(25,9);
		cout<<"Genre - Autobigraphy";
		gotoxy(25,11);
		cout<<"Pages - 180";
		gotoxy(25,13);
		cout<<"Price - 229";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("Wings of Fire","APJ Abdul Kalam",180,"Autobiography",229);
			gotoxy(20,27);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			nfiction();
		}
		else
		{
			nfiction();
		}
	}
	void hot()
	{
		clrscr();
		char c;
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Stephen Hawking";
		gotoxy(25,9);
		cout<<"Genre - Popular Science";
		gotoxy(25,11);
		cout<<"Pages - 256";
		gotoxy(25,13);
		cout<<"Price - 299";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("A Brief History of Time","Stephen Hawking",256,"Science",299);
			gotoxy(20,27);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			nfiction();
		}
		else
		{
			nfiction();
		}
	}
	void trs()
	{
		char c;
		clrscr();
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Tom Wolfe";
		gotoxy(25,9);
		cout<<"Genre - Non Fiction";
		gotoxy(25,11);
		cout<<"Pages - 436";
		gotoxy(25,13);
		cout<<"Price - 199";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>c;
		if(c=='y' || c=='Y')
		{
			addcart("The Right Stuff","Tom Wolfe",436,"Non fiction",199);
			gotoxy(20,27);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			nfiction();
		}
		else
		{
			nfiction();
		}
	}
	void tgh()
	{
		char c;
		clrscr();
		gotoxy(20,3);
		cout<<"-------DESCRIPTIONS & DETAILS-------";
		gotoxy(25,5);
		cout<<"Author - Hans Holzer";
		gotoxy(25,9);
		cout<<"Genre - Non Fiction";
		gotoxy(25,11);
		cout<<"Pages - 436";
		gotoxy(25,13);
		cout<<"Price - 199";
		gotoxy(25,25);
		cout<<"Add to cart (Y/N) : ";
		cin>>ch;
		if(ch=='y' || ch=='Y')
		{
			addcart("The Ghost Hunters","Hans Holzer",436,"Non fiction",199);
			gotoxy(20,27);
			fflush(stdin);
			cout<<"Item Added to Cart. Press any key to continue....";
			getch();
			nfiction();
		}
		else
		{
			nfiction();
		}
	}
	int input();
	void acceptmenu(int,char*);
	void exit();
	void viewcart();
	void signin();
	void new_acc();
	void addcart(char*,char*,int,char*,int);
};

void shop::exit()
{
	int k=47;
	clrscr();
	gotoxy(30,10);
	cout<<"THANK YOU FOR SHOPPING ! ....";
	gotoxy(32,20);
	cout<<"Closing Program";
	for(int i=0;i<=5;i++)
	{
		gotoxy(k,20);
		cout<<".";
		delay(1000);
		k++;
	}
}
void shop::viewcart()
{
	clrscr();
	char *item,*br,*cl,ch,*item;
	int size,pc,p;
	ifstream r;
	r.open("cart.txt",ios::in);
	cout<<"\t\t\t----------------CART-----------------\n\n\n";
	while(!r.eof())
	{
		r>>item;
		r>>br;
		r>>cl;
		r>>size;
		r>>pc;
		cout<<"Product Name - "<<item<<endl;
		cout<<"Brand - "<<br<<endl;
		cout<<"Colour - "<<cl<<endl;

		cout<<type<<"\t\t"<<br<<"\t"<<cl<<"\t"<<size<<"\t"<<pc<<endl;
	}
	gotoxy(30,25);
	cout<<"Do you want to buy or continue your shopping....? Press Y to buy.(Y/N) : ";
	cin>>ch;
	if(ch=='Y' || ch=='y')
	{
		clrscr();
		ifstream f;
		f.open("bill.txt",ios::in);
		gotoxy(10,3);
		cout<<"******** SHOPON : Shopping Centre *******";
		gotoxy(9,10);
		while(f)
		{
			f>>item;
			f>>p;

			cout<<item<<"\t\t"<<p<<endl;
			gotoxy(9,12);
		}
		gotoxy(10,20);
		cout<<"Please pay your bill !";
		getch();
		home();
	}
	else
	{
		home();
	}
	r.close();
	getch();

}
void shop::addcart(char *item,char *br,int s, char *cl,int pc)
{
	ofstream of;
	of.open("cart.txt",ios::app);
	of<<item<<"\t"<<br<<"\t"<<cl<<"\t"<<s<<"\t"<<pc<<"\n";
	cart++;
	of.close();
	of.open("bill.txt",ios::app);
	of<<item<<"\t"<<pc<<"\n";
	of.close();
}
void shop::new_acc()
{
	clrscr();
	char *add,*id,*pass;
	int age,c=0;
	ofstream of;
	of.open("user.txt",ios::app);
	gotoxy(27,5);
	cout<<"Enter your following details : ";
	gotoxy(27,7);
	cout<<"NAME : ";
	gets(log_name);
	gotoxy(27,9);
	cout<<"AGE : ";
	cin>>age;
	gotoxy(27,11);
	cout<<"EMAIL ID : ";
	gets(id);
	check:
	for(int i=0;i<strlen(id);i++)
	{
		if(id[i]=='@' || id[i]=='.')
		c++;
	}
	if(c!=2)
	{
		gotoxy(24,9);
		clrscr();
		cout<<"INVALID EMAIL ID !!! ";
		delay(1000);
		c=0;
		gotoxy(27,11);
		cout<<"EMAIL ID : ";
		gets(id);
		goto check;
	}
	gotoxy(27,13);
	cout<<"PASSWORD : ";
	gets(pass);
	of<<"NAME\t"<<"AGE\t"<<"EMAIL\t"<<"PASSWORD\t"<<"\n\n";
	of<<log_name<<"\t"<<age<<"\t"<<id<<"\t"<<pass<<"\n";
	of.close();
	of.open("login.txt",ios::app);
	of<<id<<"\t"<<pass<<"\t"<<log_name<<"\n";
	of.close();
	of.open("bill.txt",ios::in);
	of<<log_name<<"\t\n";
	clrscr();
	gotoxy(27,5);
	cout<<"Congratulations !!! You have created your account.";
	delay(1500);
	gotoxy(30,7);
	cout<<"Now please Sign In with your account to start your shopping...";
	delay(1000);
	signin();
}
void shop::signin()
{
	clrscr();
	char *id,*pass,*cid,*cpass,*name;
	ifstream f;
	f.open("login.txt",ios::in);
	gotoxy(27,5);
	cout<<"Email ID : ";
	gets(id);
	gotoxy(27,7);
	cout<<"Password : ";
	gets(pass);
	while(!f.eof())
	{
		f>>cid;
		if(strcmp(cid,id)==0)
		{
			f>>cpass;
		}
	}
	if(strcmp(cpass,pass)==0)
	{
		f>>name;
		clrscr();
		gotoxy(30,7);
		cout<<"Access Granted !!!";
		delay(1000);
		gotoxy(34,9);
		cout<<"WELCOME "<<name<<"!";
		delay(1000);
		head();
	}
	else
	{
		clrscr();
		gotoxy(30,7);
		cout<<"Access Denied !!!";
		getch();
		signin();
	}
	f.close();

}

void shop::acceptmenu(int c,char *m)
{
	switch(c)
	{
		case 1:
		{
			if(strcmp(m,"log")==0)
			{
				signin();
			}
			else if(strcmp(m,"main")==0)
			{
				clothing();
			}
			else if(strcmp(m,"cloth")==0)
			{
				menswear();
			}
			else if(strcmp(m,"mens")==0)
			{
				tshirt();
			}
			else if(strcmp(m,"womens")==0)
			{
				tshirt();
			}
			else if(strcmp(m,"foot")==0)
			{
				shoe();
			}
			else if(strcmp(m,"game")==0)
			{
				acr();
			}
			else if(strcmp(m,"elec")==0)
			{
				laptops();
			}
			else if(strcmp(m,"book")==0)
			{
				fiction();
			}
			else if(strcmp(m,"fbook")==0)
			{
				tdf();
			}
			else if(strcmp(m,"nfbook")==0)
			{
				wof();
			}
			break;
		}
		case 2:
		{
			if(strcmp(m,"log")==0)
			{
				new_acc();
			}
			if(strcmp(m,"main")==0)
			{
				footwear();
			}
			else if(strcmp(m,"cloth")==0)
			{
				womenswear();
			}
			else if(strcmp(m,"mens")==0)
			{
				shirt();
			}
			else if(strcmp(m,"womens")==0)
			{
				shirt();
			}
			else if(strcmp(m,"foot")==0)
			{
				sandal();
			}
			else if(strcmp(m,"game")==0)
			{
				bak();
			}
			else if(strcmp(m,"elec")==0)
			{
				pendrive();
			}
			else if(strcmp(m,"book")==0)
			{
				nfiction();
			}
			else if(strcmp(m,"fbook")==0)
			{
				ad();
			}
			else if(strcmp(m,"nfbook")==0)
			{
				hot();
			}
			break;
		}
		case 3:
		{
			if(strcmp(m,"main")==0)
			{
				vgames();
			}
			else if(strcmp(m,"cloth")==0)
			{
				home();
			}
			else if(strcmp(m,"mens")==0)
			{
				jeans();
			}
			else if(strcmp(m,"womens")==0)
			{
				jeans();
			}
			else if(strcmp(m,"foot")==0)
			{
				home();
			}
			else if(strcmp(m,"game")==0)
			{
				cod12();
			}
			else if(strcmp(m,"elec")==0)
			{
				hdd();
			}
			else if(strcmp(m,"book")==0)
			{
				home();
			}
			else if(strcmp(m,"fbook")==0)
			{
				tdp();
			}
			else if(strcmp(m,"nfbook")==0)
			{
				trs();
			}
			break;
		}
		case 4:
		{
			if(strcmp(m,"main")==0)
			{
				electronics();
			}
			else if(strcmp(m,"mens")==0)
			{
				clothing();
			}
			else if(strcmp(m,"womens")==0)
			{
				clothing();
			}
			else if(strcmp(m,"game")==0)
			{
				td();
			}
			else if(strcmp(m,"elec")==0)
			{
				graphic();
			}
			else if(strcmp(m,"fbook")==0)
			{
				tdc();
			}
			else if(strcmp(m,"nfbook")==0)
			{
				tgh();
			}
			break;
		}
		case 5:
		{
			if(strcmp(m,"main")==0)
			{
				books();
			}
			else if(strcmp(m,"womens")==0)
			{
				saree();
			}
			else if(strcmp(m,"game")==0)
			{
				gta5();
			}
			else if(strcmp(m,"elec")==0)
			{
				headphone();
			}
			else if(strcmp(m,"fbook")==0)
			{
				tls();
			}
			else if(strcmp(m,"nfbook")==0)
			{
				nfiction();
			}
			break;
		}
		case 6:
		{
			if(strcmp(m,"main")==0)
			{
				viewcart();
			}
			else if(strcmp(m,"game")==0)
			{
				home();
			}
			else if(strcmp(m,"elec")==0)
			{
				camera();
			}
			else if(strcmp(m,"fbook")==0)
			{
				i();
			}
			break;
		}
		case 7:
		{
			if(strcmp(m,"main")==0)
			{
				exit();
			}
			else if(strcmp(m,"elec")==0)
			{
				home();
			}
			else if(strcmp(m,"fbook")==0)
			{
				hpc();
			}
			break;
		}
		case 8:
		{
			if(strcmp(m,"fbook")==0)
			{
				shc();
			}
			break;
		}
		case 9:
		{
			if(strcmp(m,"fbook")==0)
			{
				books();
			}
			break;
		}
	 }
}
int shop::input()
{
	int ch;
	gotoxy(30,20);
	cout<<"Enter your choice : ";
	gotoxy(50,20);
	cin>>ch;
	return ch;
}

void main()
{
	clrscr();
	shop s;
	s.login();
}
