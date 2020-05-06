#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
#include<dos.h>
#include<process.h>

void COUT(char *Print,int x=10)
{for(int i=0;Print[i]!='\0';i++)
{cout<<Print[i];
delay(x);
}
}
void output(int m,int n,int x,int y)
{ for(int i=0;i<=m+1;i++)
	{ gotoxy(x,y+i);
		if((i==0||i==m+1))
		cout<<'_';
		else
		cout<<'<';
		for(int j=0;j<n;j++)
		{ gotoxy(x+j+1,y+i);
			if((i==0||i==m+1))
			cout<<'_';
			else
			cout<<' ';
		}
		if(i==0||i==m+1)
		cout<<'_';
		else
		cout<<'>';
	}
}
void BORDER(int x=10,int y=0)
{cout<<"\n";
for(int d=1;d<9;d++)
{cout<<"+ - % * = ";
delay(x);
}
if(!y)
{cout<<"*\t\t\t\t\t\t\t\t\t      -";delay(x);
cout<<"\n%\t\t\t\t\t\t\t\t\t      +";delay(x);
cout<<"\n=\t\t\t                          ";delay(x);
cout<<"\t\t\t      *\n+\t\t\t\t\t\t\t\t\t      %";delay(x);
cout<<"\n-\t\t\t\t\t\t\t\t\t      =";delay(x);
cout<<"\n*\t\t\t\t\t\t\t\t\t      -";delay(x);
cout<<"\n%\t\t\t\t       \t\t\t\t\t      +";delay(x);
cout<<"\n=\t\t\t\t\t\t\t\t\t      *";delay(x);
cout<<"\n+\t\t\t\t      \t\t\t\t\t      %";delay(x);
cout<<"\n-\t\t\t\t\t\t\t\t\t      =";delay(x);
cout<<"\n+\t\t\t\t           \t\t\t\t      -";delay(x);
cout<<"\n*\t\t\t\t\t\t\t\t\t      +";delay(x);
cout<<"\n%\t\t\t\t\t\t\t\t\t      *";delay(x);
cout<<"\n=\t\t\t\t\t\t\t\t\t      %";delay(x);
cout<<"\n+\t\t\t\t\t\t\t\t\t      =";delay(x);
cout<<"\n-\t\t\t\t\t\t\t\t\t      -";delay(x);
cout<<"\n*\t                                         \t\t\t      +";delay(x);
cout<<"\n%\t\t\t\t\t\t\t\t\t      *";delay(x);
cout<<"\n=\t\t\t\t\t\t\t\t\t      =\n";delay(x);
for(d=1;d<9;d++)
{cout<<"* = + - % ";
delay(x);
}
cout<<"Press '~' to exit from anywhere(read terms n condition)\n\t\t\t\tdeveloped by TKS TECHNOLOGY";
}
output(1,27,25,4);
gotoxy(26,5);
char Print[200]={"WELCOME TO TKS ACADAMY"};
for(int i=0;Print[i]!='\0';i++)
{	if(i==0)
	{cout<<char(2)<<' ';
	delay(x);
	}
cout<<Print[i];
delay(x);
	if(i==strlen(Print)-1)
	{cout<<' '<<char(2);
	delay(x);
	}
}
}
void Gets(char *p)
{strcpy(p,"not yet assigned:(///////////");
	for(int i=0;p[i]!='\0';i++)
		{		p[i]=getch();
			if(p[i]=='\n'||p[i]=='\r'||p[i]==13)
			{       if(i!=0)
				p[i]=p[i+1]='\0';
				else
				i--;
			}
			else if(p[i]=='\b'&&i>0)
			{ cout<<"\b \b";
				i-=2;
			}
			else if(p[i]=='~')
			{ delay(1500);
				exit(0);
			}
			else cout<<p[i];
		 }
	}
void change_my_password(char *p_1)
{ifstream fin_2("ADMIN.txt");
 ofstream fout_2("Admin1.txt");
	while(!fin_2.eof())
	{char chng[1000];
		fin_2>>chng;
		 if(strcmp(chng,"PassworD:")==0)
		 {fout_2<<"PassworD: "<<p_1<<'\n';
		 fin_2>>chng;
		 }
		 else
		 {fout_2<<chng;
		 fin_2.getline(chng,1000);
		 fout_2<<chng<<'\n';
		 }
	}
	remove("ADMIN.txt");
	fin_2.close();
	fout_2.close();
	fin_2.open("Admin1.txt");
	fout_2.open("ADMIN.txt",ios::trunc);
		while(!fin_2.eof())
		{char chng[1000];
		fin_2.getline(chng,1000);
		fout_2<<chng<<'\n';
		}
	remove("Admin1.txt");
	fin_2.close();
	fout_2.close();
}
char *Password()
{ char password[20]={"Not yet assigned:("};
		for(int i=0;password[i]!='\0';i++)
		{
		password[i]=getch();
			if((password[i]=='\n'||password[i]=='\r'||password[i]==13))
			{ if(i>0)
				 password[i]=password[i+1]='\0';
				else
				 i--;
			}
			else if(password[i]=='\b'&&i>0)
			{if(i>0)
			{ cout<<"\b \b";
				i-=2;}
			 else
				i--;
			}
			else if(password[i]=='~')
			{	delay(1500);
			exit(0);
			}
			else if(password[i]!='\b'&&password[i]!=13)
			cout<<"*";
		 }
 return(password);
}
void default_ini()
{ofstream ofteya("temp1.txt",ios::app|ios::noreplace);
 ofteya<<"`";
 ofteya.close();
 ofstream ofss("Shreyas.txt",ios::app|ios::noreplace);
 ofss<<"1 Algebra 00/00/0000\n2 Surfacearea 00/00/0000\n3 Volume 00/00/0000\n";
 ofss.close();
 ofstream f("tejapala.txt",ios::app|ios::noreplace);
 f<<"@1";
 f<<"\nAlgebra\n\tWhat dou mean by Algebra?\n\tAlgebra is a part of mathematics. It uses variables to represent a value that is not yet known. When an equals sign (=) is used, this is called an equation. A very simple equation using a variable is: 2 + 3 = x In this example, x = 5, or it could also be said,\"x is five\". This is called solving for x.|\n Here is a simple example of an algebra problem:\nSue has 12 candies, Ann has 24 candies. They decide to share so that they have the same number of candies.\nThese are the steps you can use to solve the problem:\n1.To have the same number of candies, Ann has to give some to Sue. Let x represent the number of candies Ann gives to Sue.\n";
 f<<"2.Sue's candies, plus x, must be the same as Ann's candies minus x. This is written as: 12 + x = 24 - x.\n3.Subtract 12 from both sides of the equation. This gives: x = 12 - x. (What happens on one side of the equals sign must happen on the other side too, for the equation to still be true. So in this case when 12 was subtracted from both sides, there was a middle step of 12 + x - 12 = 24 - x - 12. After a person is comfortable with this, the middle step is not written down.)\n|\n 4.Add x to both sides of the equation. This gives: 2x = 12.\n5.Divide both sides of the equation by 2. This gives x = 6. The answer is six. If Ann gives Sue 6 candies, they will have the same number of candies.\n6.To check this, put 6 back into the original equation wherever x was: 12 + 6 = 24 - 6.\n";
 f<<"7.This gives 18=18, which is true. They both now have 18 candies.\nWith practice, algebra can be used when faced with a problem that is too hard to solve any other way. Problems such as building a freeway, designing a cell phone, or finding the cure for a disease all require algebra.|\n";
 f<<"@2\nSurface area\nThe surface area of a solid object is a measure of the total area that the surface of the object cupies. The mathematical\n definition of surface area in the presence of curved surfaces is considerably more involved than the definition of arc\nlength of one-dimensional curves, or of the surface area for polyhedra (i.e., objects with flat polygonal faces), for which\n";
 f<<"the surface area is the sum of the areas of its faces. Smooth surfaces, such as a sphere, are assigned surface areausing\n their representation as parametric surfaces. This definition of surface area is based on methods of infinitesimal calculus\n and involves partial derivatives and double integration.|\n";
 f<<"Formulas\nSurface areas of common solids\n";
 f<<" Cube	       6s^2                    s = side length\n";
 f<<" Cuboid	       2(lw + lh + wh)         l = length, w = width, h = height\n ";
 f<<"Cylinder      2*pi*r(r+h)             h=height r=radius\n ";
 f<<"Sphere        4*pi*r^2                r=radius of sphere\n ";
 f<<"Hemisphere    2*pi*r^2                r=radius of hemisphere|\n For example : A classroom has a length of 20 feet and a width of 30 feet. The headmaster decided that tiles will look good in that class. If each tile has a length of 24 inches and a width of 36 inches, how many tiles are needed to fill the classroom?\n";
 f<<"Find area occupied by entire classroom\nFind area for one tile\nDecide which unit to use. In this case, we could use feet\nArea of classroom = length * width = 20 * 30 = 600 ft^2\nBefore we get the area of each tile, convert the dimensions to feet as already stated\nSince 1 foot = 12 inches, 36 inches = 3 feet and 24 inches = 2 feet\n";
 f<<"Area of each tile = length * width = 2 * 3 = 6 ft2 If one tile takes 6 ft2, it takes 100 tiles to cover 600 ft2 (6 *100 = 600)|\n";
 f<<"@3\nVolume is the quantity of three-dimensional space enclosed by some closed boundary, for example, the space that a substance (solid,liquid, gas, or plasma) or shape occupies or contains. Volume is often quantified numerically using the SI derived unit, the cubic metre. The volume of a container is generally understood to be the capacity of the container, i. e. the amount of fluid (gas or liquid) that the container could hold, rather than the amount of space the container itself displaces.|\n";
 f<<"Formulas\n";
 f<<"Cube          a^3            a=side of cube\n";
 f<<"Cuboid        l*b*h          l=length b=breadth h=height\n";
 f<<"Cylinder      pi*r^2*h       r=radius  h=height\n";
 f<<"Sphere        4/3*pi*r^3     r=radius\n";
 f<<"Hemisphere    2/3*pi*r^3     r=radius\n|\n For example: Water is pouring into a cuboidal reservoir at the rate of 60 litres per minute. If the volume of reservoir is 108 m^3 ,find the no. of hours it will take to fill the reservoir.\n";
 f<<"Solution:\n Volume of cuboidal reservoir = 108 m^3 = (108 x 1000 ) L = 108000 L\n It is given that water is being poured at the rate of 60L per minute.\n That is,(60x60)L = 3600L per hour\n Required no. of hours = 108000/3600 = 30 hours |\n";
 f.close();
 f.open("maths1.txt",ios::app|ios::noreplace);
 f<<"@1\n1.Kiran is 24 years older than Rakesh.10 years back Kiran's age was 5 times the age of Rakesh.\nFind their ages.\na.30,23\nb.42,16\nc.40,16\nd.40,13#c\nLet Kiran's present age be x\nThen Rakesh's present age= (x-24)\n10 yrs ago...\nKiran's age = (present age-10)yrs = (x-10)\nRakesh's age = ((x-24)-10) = (x-34)\nGiven 10 yrs ago, Kiran's age = 5 times Rakesh's age\nx-10 = 5(x-34)\nx-5x = -170=10\n-4x = -160\nx = 40\nKiran's age: 40 yrs\nRakesh's age: (40-24) = 16 yrs$\n";
 f<<"2.One number is 3 times another number. If 15 is added to both the numbers, then one of the new number becomes twice that of the other new number. Find the numbers.\na.15,45\nb.45,15\nc.30,15\nd.15,30\n#a\nLet one number be x\nThen the other number= 3x\nThe new numbers are (x+15) and (3x+15)\nBy the given condition, one new number+ 15=2(other new number+15)\nTherefore 3x+15= 2(x+15)\n3x+15= 2x+30\n         3x-2x= 30-15=15\n          x= 15\nThe first number: 15\nOther number    : 45$\n";
 f<<"3.Find 3 consecutive odd numbers whose sum is 45.\na.13,15,12\nb.13,12,17\nc.13,15,17\nd.13,15,19\n#c\nLet the 3 consecutive odd numers= 2x+1, 2x+3, 2x+5\n(2x+1)+(2x+3)+(2x+5)=45\n6x+9=45\n6x= 36\nx=6\nTherefore the numbers are 13,15,17$\n";
 f<<"4.Find the value of 't' in the following equation\n3(t-3)= 5(2t+1)\na.-6\nb.-4\nc.-3\nd.-2\n#d\n3(t-3)= 5(2t+1)\n3t-9 = 10t+5\n-7t = 14\nt=-2$\n";
 f<<"5.Find the value of 's' in the following equation\n(8s-3)/3s= 2\na.2\nb.3/2\nc.4/5\nd.9/2\n#b\nCross multiplying...\n8s-3= 6s\n2s= 3\ns= 3/2$\n";
 f<<"@2\n1.The ratio between the length and the breadth of a rectangular park is 3 : 2. If a man cycling along the boundary of the park at the speed of 12 km/hr completes one round in 8 minutes, then the area of the park (in sq. m) is:\na.15360\nb.153600\nc.30720\nd.307200\n#b Perimeter = Distance covered in 8 min. =(12000 x 8)/60	 m = 1600 m.\nLet length = 3x metres and breadth = 2x metres.\nThen, 2(3x + 2x) = 1600 or x = 160.\nLength = 480 m and Breadth = 320 m.\nArea = (480 x 320) m2 = 153600 m^2.$\n";
 f<<"2.A rectangular park 60 m long and 40 m wide has two concrete crossroads running in the middle of the park and rest of the park has been used as a lawn. If the area of the lawn is 2109 sq. m, then what is the width of the road?\na.2.91 m\nb.3 m\nc.5.82 m\nd.None of these\n#b Area of the park = (60 x 40) m^2 = 2400 m^2.\nArea of the lawn = 2109 m^2.\nArea of the crossroads = (2400 - 2109) m^2 = 291 m^2.\nLet the width of the road be x metres. Then,\n60x + 40x - x^2 = 291\nx^2 - 100x + 291 = 0\n(x - 97)(x - 3) = 0\nx = 3.$\n";
 f<<"3.What is the least number of squares tiles required to pave the floor of a room 15 m 17 cm long and 9 m 2 cm broad?\na.814\nb.820\nc.840\nd.844\n#a Length of largest tile = H.C.F. of 1517 cm and 902 cm = 41 cm.\nArea of each tile = (41 x 41) cm^2.\nRequired number of tiles =(1517 x 90)/(41 x 41) = 814.$\n";
 f<<"4.The difference between the length and breadth of a rectangle is 23 m. If its perimeter is 206 m, then its area is:\na.1520 m^2\nb.2420 m^2\nc.2480 m^2\nd.2520 m^2\n#d We have: (l - b) = 23 and 2(l + b) = 206 or (l + b) = 103.\nSolving the two equations, we get: l = 63 and b = 40.\nArea = (l x b) = (63 x 40) m^2 = 2520 m^2.$\n";
 f<<"5.The length of a rectangular plot is 20 metres more than its breadth. If the cost of fencing the plot @ 26.50 per metre is Rs. 5300, what is the length of the plot in metres?\na.40\nb.50\nc.120\nd.60\n#d Let breadth = x metres.\nThen, length = (x + 20) metres.\nPerimeter =((5300)/ 26.50)m = 200 m.\n2[(x + 20) + x] = 200\n2x + 20 = 100\n2x = 80\nx = 40.\nHence, length = x + 20 = 60 m.$\n";
 f<<"\n@3\n1.A hall is 15 m long and 12 m broad. If the sum of the areas of the floor and the ceiling is equal to the sum of the areas of four walls, the volume of the hall is:\na.720\nb.900\nc.1200\nd.1800\n#c 2(15 + 12) x h = 2(15 x 12)\nh =(180)/27 m =(20)/3 m.\nVolume =15x12x(20)/3 m^3 = 1200 m^3.$\n";
 f<<"2.A hollow iron pipe is 21 cm long and its external diameter is 8 cm. If the thickness of the pipe is 1 cm and iron weighs 8 g/cm3, then the weight of the pipe is:\na.3.6 kg\nb.3.696 kg\nc.36 kg\nd.36.9 kg\n#b External radius = 4 cm,\nInternal radius = 3 cm.\nVolume of iron	=22/7x [(4)2 - (3)2] x 21 cm^3\n=22/7x 7 x 1 x 21 cm^3\n= 462 cm^3.\nWeight of iron = (462 x 8) gm = 3696 gm = 3.696 kg.$\n";
 f<<"3.A boat having a length 3 m and breadth 2 m is floating on a lake. The boat sinks by 1 cm when a man gets on it. The mass of the man is:\na.12 kg\nb.60 kg\nc.72 kg\nd.96 kg\n#b Volume of water displaced= (3 x 2 x 0.01) m3\n= 0.06 m3.\nMass of man= Volume of water displaced x Density of water\n= (0.06 x 1000) kg\n= 60 kg.$\n";
 f<<"4.A cuboid is of dimensions 60 x 54 x 30 cm .How many small cubes with side 6 cm can be placed in the given cuboid.\na.300\nb.400\nc.450\nd.500\n#c Volume of cuboid= 60 x 54 x 30 = 97200 cm^3\nSide of cube= 6 cm\nVolume of the cube = 6 x 6 x 6 = 216 cm^3\nRequired no. of cubes = (volume of the cuboid)/ (volume of the cube)\n				  = 97200/216\n		  = 450 cubes$\n";
 f<<"5.A milk tank is in the form of a cylinder whose radius is 1.5 m and the length is 7m.Find the quantity of milk in litres that can be stored in the tank.\na.45000 L\nb.49500 L\nc.50000 L\nd.61200 L\n#b Radius of the cylinder = 1.5m\nLength of the cylinder = 7m\nVolume of the cylinder = pi * r * r * h\n		  = (22/7) * 1.5 * 1.5 * 7\n				  = 49.5 m^3\n1 m^3=1000 L\nTherefore required quantity = 49.5 * 1000\n				     = 49500 L$\n";
 f.close();
}

class ADMIN
{ char ini_password[20],ini_username[25];
 public:
	ADMIN()
	{ char x[25]; int x1=0,x2=0;
	ifstream fin_1("ADMIN.txt");
		while(!fin_1.eof())
		{fin_1>>x;
			if(x1)
			{strcpy(ini_password,x);	x1--;
			}
			if(x2)
			{strcpy(ini_username,x);	x2--;
			}
			if(strcmp(x,"PassworD:")==0) x1++;
			if(strcmp(x,"UsernamE:")==0) x2++;
		}
	}
	void CHNG_pass()
	{char chn_password[25],chn_cnf_password[25];
		 Password_chn:
		{gotoxy(53,10);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(53,11);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(18,10);cout<<"New password:";
		gotoxy(18,11);cout<<"Confirm password:";
		gotoxy(32,10);strcpy(chn_password,Password());
		gotoxy(36,11);strcpy(chn_cnf_password,Password());
		}
		if(strcmp(chn_password,chn_cnf_password)==0)
		{gotoxy(53,12);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(18,12);cout<<"Successfully changed.Loading...";
		delay(2000);
		change_my_password(chn_password);
		}
		else
		{gotoxy(53,12);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(18,12);cout<<"Password mismatch";
		goto Password_chn;
		 } }
int Login()
	{int chk=1;
	char password[20],username[25];
	gotoxy(53,10);
	cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	gotoxy(53,11);
	cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	gotoxy(18,10);COUT("Username:");
	gotoxy(18,11);COUT("Password:");
	gotoxy(28,10);Gets(username);
	gotoxy(28,11);strcpy(password,Password());
	if(strcmp(username,ini_username)==0)
		{if(strcmp(password,ini_password)==0)
		{gotoxy(53,12);
		 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(18,12);cout<<"Logging in...";
		delay(2000);
		chk=0;
		}}
	else chk=1;
	return(chk);
	}
int Forgot_password()
	{int Try;
	char ch_1='y';
	gotoxy(53,12);
	cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	gotoxy(18,12);
	cout<<"wrong password.Forgot<y/n>";
	ch_1=getch();
	cout<<ch_1;
		if(ch_1=='n'||ch_1=='N') Try=Login();
		else if(ch_1=='y'||ch_1=='Y')
		{gotoxy(53,12);
		 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(18,12); cout<<"All datas will be cleared.OK??<y/n>";
		ch_1=getch();
		cout<<ch_1;
			if(ch_1=='n'||ch_1=='N') Try=Login();
			if(ch_1=='y'||ch_1=='Y')
			{gotoxy(53,12);
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			gotoxy(18,12);
			cout<<"Are you sure??<y/n>";
			 ch_1=getch();
			 cout<<ch_1;
				if(ch_1=='n'||ch_1=='N') Try=Login();
				if(ch_1=='y'||ch_1=='Y')
				{remove("shreyas.txt");
				remove("temp1.txt");
				remove("tejapala.txt");
				remove("maths1.txt");
				default_ini();
				CHNG_pass();
				}
			}
			else if(ch_1=='~')
			{cout<<"\nExiting...";
			 delay(1500);
			 exit(0);
			} }return(Try);
	}};
char *Validate(char *p,char *p2,int x=11,int y=17)
{char a[30],b[30];
ifstream f1("mathsfun.txt");
while(!f1.eof())
{f1>>a;
	if(strcmp(a,p2)==0)
	{f1>>a;
		if(strcmp(a,p)==0)
		{for(int i=0;i<5;i++)
		{gotoxy(18,y);
		cout<<"Already exists!!!  ";delay(400);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		delay(100);
		}
		gotoxy(60,x);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		Gets(b);
		f1.close();
		Validate(b,p2,x);
		}
		else
		strcpy(b,p);
	}}
f1.close();
return(b);
}
class subscribe
{	char fname[30],lname[30];
	char email[30],user[30];
	char number[30];
	long sub_num;
	char password[20];
	public:                          date ls;
					long Sub_num()
					{return(sub_num);}
					char *FNAME()
					{return(fname);}
					char *LNAME()
					{return(lname);}
					char *Email()
					{return(email);}
					char *Number()
					{return(number);}
					char *User()
					{return(user);}
				 subscribe()
				 { ifstream fs("mathsfun.txt");
				 char tmp[30];long tmp1;
				 while(!fs.eof())
				 {fs>>tmp;
					if(strcmp(tmp,"SubscribernumbeR:")==0)
					{fs>>tmp1;
					tmp1++;
					 sub_num=tmp1;
					} } }
				void NAMECHK(char *fname,int x=10)
					 {for(int l=0;fname[l]!='\0';l++)
						{	if(!isalpha(fname[l]))
							{	for(int i=0;i<5;i++)
								{gotoxy(18,17); cout<<"Invalid name!!!    ";
								delay(400);
								cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
								delay(100);
								}
							gotoxy(60,x);
							cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							Gets(fname);
							NAMECHK(fname);
							} } }
					 void getdata()
					{ output(1,7,32,7);
						gotoxy(33,8);
						 COUT("SIGN UP");
							output(9,42,17,9);
						int chk_2=0,chk_3=0,chk_4=0;
						char cnf_pass[20];
						gotoxy(18,10);
						COUT("First Name      :");
						gotoxy(18,11);
						COUT("Last name       :");
						gotoxy(18,12);
						COUT("Email ID        :");
						gotoxy(18,13);
						COUT("Phone(mobile)   :");
						gotoxy(18,14);
						COUT("Username        :");
						gotoxy(18,15);
						COUT("Password(min. 6):");
						gotoxy(18,16);
						COUT("Confirm password:");
						gotoxy(36,10);
						Gets(fname);
						NAMECHK(fname);
						gotoxy(36,11);
						Gets(lname);
						NAMECHK(lname,11);
						date ls;
						getdate(&ls);
						do
						{gotoxy(60,12);
						 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						Gets(email);
						for(int j=0;email[j]!='\0';j++)
							{	if(email[j]=='@')	chk_3++;
								else if(email[j]=='.') chk_4++;
							}
							if(!(chk_3&&chk_4))
							for(int i=0;i<5;i++)
							{gotoxy(18,17); 	cout<<"Invalid email id!!!";
							delay(400);
							cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							delay(100);
							}
						}while(!(chk_3&&chk_4));
						strcpy(email,Validate(email,"EmailiD:",12));
						do
						{chk_2=0;
						gotoxy(60,13);
						 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						Gets(number);
						for(int i=0;number[i]!='\0';i++)
							{if((i==0)&&!(number[i]>='7')) chk_2++;
							if(!isdigit(number[i])) chk_2++;
							}
						if(strlen(number)!=10)	chk_2++;
						if(chk_2)
						for(int i=0;i<5;i++)
						{gotoxy(18,17);
						cout<<"Invalid number!!!  " ;	delay(400);
						cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						delay(100);
						}	}
						while(chk_2);
						strcpy(number,Validate(number,"PhonE:",13));
						gotoxy(36,14);
						Gets(user);
						strcpy(user,Validate(user,"UsernamE:",14));
						do
						{	do
							{gotoxy(60,16);
							 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							gotoxy(60,15);
							 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							 strcpy(password,Password());
							}while(strlen(password)<6);
							 gotoxy(36,16);
							strcpy(cnf_pass,Password());
							if(!(strcmp(password,cnf_pass)==0))
							for(int i=0;i<5;i++)
							{gotoxy(18,17);
							cout<<"Password mismatch!!";delay(400);
							cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							delay(100);
							}
						}while(!(strcmp(password,cnf_pass)==0));
						}
					 char *PASSWORD()
					 {return(password);}
};
void read()
{
subscribe s;fstream fout;
	fout.open("mathsfun.txt",ios::out|ios::app);
	s.getdata();
	date rd;
	getdate(&rd);
	fout<<"\nSubscribernumbeR: "<<s.Sub_num()<<"\nFirstnamE: "<<s.FNAME()<<"\nLastnamE: "<<s.LNAME()<<"\nPhonE: "<<s.Number()<<"\nNewsletterstatuS: s"<<"\nEmailiD: "<<s.Email()<<"\nUsernamE: "<<s.User()<<"\nPassworD: "<<s.PASSWORD()<<"\nLastseeN: "<<int(rd.da_day)<<'/'<<int(rd.da_mon)<<'/'<<int(rd.da_year)<<"\nRegistrationdatE: "<<int(rd.da_day)<<'/'<<int(rd.da_mon)<<'/'<<int(rd.da_year)<<"\nSubscriberstatuS: y"<<"\n";
	fout.close();
}
long KRIS(char *user_name,char *pass_word)
{ifstream fin_3("mathsfun.txt");
int asd=0,bsa=0;
char u1[30],subno[30];
	while(!fin_3.eof())
	{char pop[30];
	fin_3>>pop;
		if(strcmp(pop,"SubscribernumbeR:")==0)
		fin_3>>subno>>pop>>pop>>pop>>pop>>pop>>pop>>pop>>pop>>pop>>pop>>pop;
		if(strcmp(pop,"UsernamE:")==0)
		{fin_3>>pop;
			if(strcmp(pop,user_name)==0)
			{fin_3>>pop;
			fin_3>>pop;
			asd++;
			chkk:
				{	if(strcmp(pop,pass_word)==0)
					{gotoxy(18,12);
					gotoxy(53,12);
					cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout<<"Logging in...";
					delay(1500);
					fin_3>>pop;
					bsa=fin_3.tellg();
					fin_3.close();
					return(bsa);
					}
					else
					{char opt;
					gotoxy(53,12);
					cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					for(int h=0;h<5;h++)
					{cout<<"Wrong password!!!";	delay(400);
					cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                 \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					delay(100);
					}
						gotoxy(53,11);
						cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						strcpy(pass_word,Password());
						goto chkk;
					}	}	} }
		else  fin_3>>pop;
	}
	if(!asd)
	{gotoxy(53,12);
	 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout<<"Invalid username.Sign up??<y/n>";
	char v,v1[25],v2[25];
	do
	{v=getch();
	}while(!(v=='n'||v=='y'||v=='~'));
	cout<<v;
	if(v=='~')
	{gotoxy(53,12);
	cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout<<"Loading...";
	}
		if(v=='n'||v=='N') return(-3);
		else if(v=='~') exit(0);
		else return(-2);
	} }
void user_pass(char *x)
{
char pass[30],cnf_pass[30];
check:
{
	do
	{	do
		{gotoxy(53,11);
		 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(53,10);
		 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		gotoxy(18,10);
		cout<<"New password(min.6):";
		gotoxy(18,11);
		cout<<"Confirm password   :";
		gotoxy(39,10);
		strcpy(pass,Password());
		}while(strlen(pass)<6);
		gotoxy(39,11);
		strcpy(cnf_pass,Password());
		gotoxy(53,12);
		 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		if(!(strcmp(pass,cnf_pass)==0))
		{for(int i=0;i<5;i++)
		{gotoxy(18,12);
		cout<<"Password mismatch!!";
		delay(400);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		delay(100);
		}
		}
		else
				 {gotoxy(18,12);
				 cout<<"Successfully changed.Loading...";
				 delay(1500);
				 }
	}while(!(strcmp(pass,cnf_pass)==0));
ifstream f1("mathsfun.txt");
ofstream f2("temp.txt");
char line[1000];
	while(!f1.eof())
	{f1>>line;
		if(strcmp(line,"SubscriberstatuS:")==0)
		{f2<<line<<' ';
		f1>>line;
		f2<<line<<'\n'<<'\n';
		f1>>line;
		}
		if(strcmp(line,"SubscribernumbeR:")==0)
		{f2<<line<<' ';
		f1>>line;
			if(strcmp(x,line)==0)
			{f2<<line<<'\n';
			for(int i=0;i<6;i++)
			{f1>>line;
			f2<<line<<' ';
			f1>>line;
			f2<<line<<'\n';
			}
			f1>>line;
			f2<<line<<' '<<pass<<'\n';
			f1>>line;
			}
			else f2<<line<<'\n';
			}
		else
		{f2<<line<<' ';
		f1>>line;
		f2<<line<<'\n';
		f1.getline(line,1000);
		f2<<line;
		}
	}
	f1.close();
	f2.close();
	remove("mathsfun.txt");
	f1.open("temp.txt");
	f2.open("mathsfun.txt",ios::trunc);
		while(!f1.eof())
		{char chng[1000];
		f1.getline(chng,1000);
		f2<<chng<<'\n';
		}
	remove("temp.txt");
	f1.close();
	f2.close();
}
}
void user_edit(char *p,char *p2,char *p3)
{ifstream f1("mathsfun.txt");
ofstream f2("temp.txt");
char line[1000];
while(!f1.eof())
{f1>>line;
		if(strcmp(line,"SubscriberstatuS:")==0)
		{f2<<line<<' ';
		f1>>line;
		f2<<line<<'\n'<<'\n';
		f1>>line;
		}
		if(strcmp(line,p)==0)
		{f2<<line<<' ';
		f1>>line;
			if(strcmp(p2,line)==0) f2<<p3<<'\n';
			else f2<<' '<<line<<'\n';
		}
		else
		{f2<<line<<' ';
		f1>>line;
		f2<<line<<'\n';
		f1.getline(line,1000);
		f2<<line;
		}
}
f1.close();
f2.close();
remove("mathsfun.txt");
rename("temp.txt","mathsfun.txt");
}
void delete_record(char *subno)
{
int x=0;
if(strcmp(subno,"0"))
{
						ifstream f1("mathsfun.txt");
						ofstream f2("temp.txt");
						char line[1000];
						while(!f1.eof())
						{f1>>line;
							if(strcmp(line,"SubscriberstatuS:")==0)
							{f2<<line<<' ';
							f1>>line;
							f2<<line<<'\n'<<'\n';
							f1>>line;
							}
							if(strcmp(line,"SubscribernumbeR:")==0)
							{f1>>line;
								if(strcmp(subno,line)==0)
								{for(int i=0;i<11;i++)
								f1.getline(line,1000);
								gotoxy(18,12);
								cout<<"Deleted successfully";
								delay(1500);
								x++;
								}
								else f2<<"SubscribernumbeR: "<<line<<'\n';
								}
							else
							{f2<<line<<' ';
							f1>>line;
							f2<<line<<'\n';
							}
						}
						f1.close();
						f2.close();
						remove("mathsfun.txt");
						rename("temp.txt","mathsfun.txt");
}
						if(!x)
						{gotoxy(18,12);
						for(int l=0;l<8;l++)
						{cout<<"Error while deleting!!!";
						delay(400);
						cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						 delay(100);
						 } } }
void delete_sub()
{char opt,subno[30],uname[30],chk[30];
clrscr();
BORDER();
output(1,14,30,7);
gotoxy(31,8);
 COUT("DELETE ACCOUNT");
 output(4,38,17,9);
gotoxy(18,10);
 cout<<"1.Subscriber number";
 gotoxy(18,11);
 cout<<"2.Username";
 gotoxy(18,12);
 cout<<"Delete using??";
 do
 {opt=getch();
	}while(!(opt=='1'||opt=='2'||opt=='~'));
 cout<<opt;
 gotoxy(18,13); cout<<"Loading...";
 delay(1500);
 clrscr();
					 switch(opt)
					 {case '1': BORDER();
								output(3,38,17,9);
								gotoxy(18,10);
								cout<<"Enter the subscriber no. to be deleted";
								gotoxy(18,11);
								cout<<"Subscriber number:"; f:
								Gets(subno);
								gotoxy(18,12); cout<<"Loading...";
								delay(1500);
								delete_record(subno);
								break;
					 case '2':  BORDER();
								output(3,38,17,9);
								gotoxy(18,10);
							cout<<"Enter the username to be deleted\n";
							 gotoxy(18,11);
							 cout<<"Username:"; Gets(uname);
							gotoxy(18,12);	cout<<"Loading...";
							delay(1500);
							int count=0;
							ifstream inf("mathsfun.txt");
							while(!inf.eof())
							{inf>>chk;
							if(strcmp(chk,"SubscribernumbeR:")==0) inf>>subno;
							if(strcmp(chk,"UsernamE:")==0)
							 {inf>>chk;
							if(strcmp(chk,uname)==0)
							{delete_record(subno);
							gotoxy(18,12);
							cout<<"Successfully deleted";
							 count++;
							} } }
							inf.close();
							if(!count)
							{gotoxy(18,12);
								for(int l=0;l<8;l++)
								{cout<<"Error while deleting!!!";
								delay(400);
								cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
								delay(100);
								 }
							}
							break;
						case '~': exit(0);
						} }
void doubt(char *subno)
{ clrscr();
char str[2000],x1;
int x2=0;
	ifstream ifpaya("temp1.txt");
	while(!ifpaya.eof())
	{ifpaya>>x1;
	 if(x1=='`')
	 {	x2++; break; }
	} ifpaya.close();
	BORDER(10,1);
	cout<<"\n\n\n\n\n\nEnter your doubt here\n";
	ofstream fr;
	if(!x2)	fr.open("temp1.txt",ios::out|ios::app);
	else	fr.open("temp1.txt",ios::trunc);
	Gets(str);
	fr<<"SubnO: "<<subno<<'\n';
	fr<<str<<'$';
	fr.close();
	cout<<"\nYour doubt has been added.You will soon recieve the clarification through mail";
	delay(2000);
}
 void display_sub()
 { ifstream fin_1("mathsfun.txt");
	 char e;
	 clrscr();
	 BORDER();
	 output(1,12,31,8);
	 gotoxy(31,9);
	 cout<<"<VIEW DETAILS>" ;
	 char subno[2],line[1000];
	 output(6,25,25,11);
	 gotoxy(25,12);
	 cout<<"<1.View all details       >";
	 gotoxy(25,13);
	 cout<<"<2.By subscriber number   >";
	 gotoxy(25,14);
	 cout<<"<3.By username            >";
	 gotoxy(25,15);
	 cout<<"<4.By subscriber status   >";
	 gotoxy(25,16);
	 cout<<"<Enter your choice:       >";
	 gotoxy(44,16);
	 do
	 {e=getch();
	 }while(!(e=='1'||e=='2'||e=='3'||e=='4'||e=='~'));
	 gotoxy(26,17);
	 cout<<"Loading...";
	 delay(1500);
				 clrscr();
				 BORDER();
				 output(11,41,17,8);
	 switch(e)
	 { case '1':
			ASDF:
			{while(!fin_1.eof())
			{ int ad=0;
				 for(int i=0;i<11;i++)
				{char chk[30];
				if(fin_1.eof())	ad++;
				fin_1>>chk;
				if(strcmp(chk,"PassworD:")==0)
				{gotoxy(59,i+9);
				cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				gotoxy(19,i+9);
				cout<<chk<<' ';
				fin_1>>chk;
				for(int i=0;i<strlen(chk);i++)
				cout<<"*";
				}
				else
				{gotoxy(59,i+9);
				cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				gotoxy(19,i+9);
				cout<<chk;
				fin_1.getline(line,1000);
				 cout<<line;
				 } }
				if(!ad)	e=getch();
				if(e=='~') exit(0);
			}	}
			fin_1.close();
		break;
	 case '2': char chk[30];
			 int asdf=0;
			 gotoxy(17,7);
			 cout<<"<Enter the Subscriber no.to view:            >";
			 gotoxy(49,7);
			 Gets(chk);
				view:
				ifstream f1("mathsfun.txt");
				while(!f1.eof())
				{f1>>line;
				 if(strcmp(line,"SubscribernumbeR:")==0)
					{f1>>subno;
						 if(strcmp(chk,subno)==0)
							 {gotoxy(19,9);
							 asdf++;
							 cout<<"SubscribernumbeR: "<<subno<<'\n';
							 for(int i=1;i<11;i++)
								{char chk[30];
								 f1>>chk;
								if(strcmp(chk,"PassworD:")==0)
								{gotoxy(19,i+9);
								cout<<chk<<' ';
								f1>>chk;
								for(int i=0;i<strlen(chk);i++)
								cout<<"*";
								cout<<'\n';
								}
								else
								{gotoxy(19,i+9);
								cout<<chk;
								f1.getline(line,1000);
								cout<<line<<endl;
								}}
								getch();
								break;
							 } }
				}
		f1.close();
		if(!asdf)
		{gotoxy(18,7);
		cout<<"SORRY THESE ARE THE AVAILABLE SUBSCRIBER";
		goto ASDF;
		}
		break;
			 case '3':asdf=0;
		char chk1[30];
		gotoxy(17,7);
		cout<<"<Enter the username to view:              >";
		gotoxy(46,7);
		Gets(chk1);
		ifstream f2("mathsfun.txt");
			while(!f2.eof())
			{f2>>line;
				 if(strcmp(line,"SubscribernumbeR:")==0) f2>>chk;
					f2>>line;
					if(strcmp(line,"UsernamE:")==0)
					f2>>line;
					if(strcmp(chk1,line)==0)
					{f2.close();
					asdf++;
					goto view;
					}
			}
			if(!asdf)
			{gotoxy(18,7);
			 cout<<"SORRY THESE ARE THE AVAILABLE SUBSCRIBER";
			 goto ASDF;
			}
			break;
	case '4': int  sub_stas(char a);
						gotoxy(17,7);
						cout<<"Subscriber status<y/n>";
						char b;
						do
						{b=getch();
						}while(!(b=='y'||b=='n'||b=='~'));
						if(b=='~')
						exit(0);
						sub_stas(b);
			break;
	case '~':
				cout<<"Exiting...."<<char(2);
				delay(1000);
				exit(0);
		 break;
	 }
 }
int MCQ(char *a)
 {
 char one[2000],option;
 int mark=0,tim=0;
 ifstream fin("maths1.txt");
	while(!fin.eof())
	{fin>>one;
		if( strcmp(one,a)==0)
		{char opt[2];
			 for(int i=0;i<5;i++)
			 {int x=0;
			 clrscr();
			 BORDER(10,1);
				gotoxy(31,7);
				cout<<"___";
				gotoxy(31,9);
				cout<<"___\n";
				gotoxy(30,8);
				cout<<"<MCQ>";
				fin.getline(one,1000,'#');
				cout<<one;
					cout<<"<Time left:  ";
					for(int i=60;i>=0;i--)
					{	if(i>=9)
						cout<<"\b\b\b   \b\b\b"<<i<<'>';
						else
						cout<<"\b\b  \b\b"<<i<<'>';
						delay(1000);
						if(kbhit())
						{option=getch();
							if(option=='a'||option=='b'||option=='c'||option=='d')
							{cout<<option;
							break;
							}
						}
					if(i==0)
					{cout<<"\n";
					for(int j=0;j<5;j++)
						{cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                     \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						delay(100);
						cout<<"!!!TIME UP!!!";
						x++;
						tim++;
						delay(400);
						}	}
					}
			opt[0]=option;
			opt[1]='\0';
			fin>>one;
			cout<<'\n';
						if(strcmp(one,opt)==0&&tim==0)
						{
						cout<<"\nCORRECT!!\n";
						}
						else
						{ tim=0;
						 cout<<"\nWRONG!!\n";
						 cout<<"\ncorrect option:"<<one<<endl; x++;
						}
			fin.getline(one,1000,'$');
				if(x)	cout<<one; mark++;
			getch();
			}
			clrscr();
			BORDER();
			cout<<"\n\n\n\n\t\t\tTotal mark obtained"<<5-mark;
			delay(2000);
		}  }
			fin.close();
			return(mark);
	}
TEJAPALA()
{ clrscr();
char a[5]; char one[5000],b,x=0;
Home_txt:
{clrscr();
BORDER();
output(1,12,31,7);
 gotoxy(30,8); cout<<"<MATHS MODULE>";
ifstream iff("Shreyas.txt");
output(7,25,28,10);
gotoxy(29,14); cout<<">.Next";
gotoxy(29,15); cout<<"<.Back";
gotoxy(29,16);
cout<<"Enter your option:";
int i=0;
while(!iff.eof())
{char xx[1000];
if(i%3==0)
{gotoxy(51,11);
cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                      \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
gotoxy(51,12);
cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                      \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
gotoxy(51,13);
cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                      \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
}
gotoxy(29,11+i%3);
iff>>xx;
cout<<xx<<'.';
iff>>xx;
for(int l=0;xx[l]!='\0';l++)
if(xx[l]=='`') xx[l]=' ';
cout<<xx<<'\n';
iff>>xx;
i++;
if(i%3==0)
{gotoxy(47,16); gets(a);
if(strcmp(a,">")==0) continue;
else if(strcmp(a,"<")==0) return(0);
else break;
}
}
iff.close();
if(i%3!=0)
{gotoxy(47,16);
gets(a);
if(strcmp(a,"<")==0)
return(0);
}
char tejap[6];
tejap[0]='@';
tejap[1]=a[0];tejap[2]=a[1];tejap[3]=a[2];tejap[4]=a[3];
tejap[5]='\0';
if(strcmp(a,"<")==0) return(0);
	clrscr();
ifstream fin("tejapala.txt");
			B:
				 {	x=0;
		 while(!fin.eof())
		{ char as;
			 fin.getline(one,2000);
			if((strcmp(one,tejap)==0))
				for(;x<3;x++)
				{clrscr();
				BORDER(10,1);
				output(1,12,31,7);
				gotoxy(30,8);
				cout<<"<MATHS MODULE>";
				fin.getline(one,2000,'|');
				cout<<one;
				as=getch();
					if(as=='~')
					{cout<<"\nExiting...";
			delay(1500);
			exit(0);
			}
				}
				 if(x==3)	break;
		}
		fin.close(); clrscr();
		int marks=10;
		marks=MCQ(tejap);
		if(marks>1)
		{cout<<"\nScore more than 4 marks to finish this topic\n";
		delay(3000);
		goto B;
		}
		else cout<<"\nSuccessfully completed";
				}
		fin.close();
		}
}
 Shreyas()
{
ifstream ifss("Shreyas.txt");
long x=0; date teyapaya;
getdate(&teyapaya);
char topicno[30];
while(!ifss.eof()) ifss>>x>>topicno>>topicno;
ifss.close();
ofstream ofss("Shreyas.txt",ios::app);
char chk[5],line[2000],op='a';
ofstream fout("tejapala.txt",ios::app);
clrscr();
BORDER();
gotoxy(30,9); cout<<"<ADD TOPIC>";
output(4,58,16,12);
gotoxy(16,13);
cout<<"<Rules for adding a topic:                               >";
gotoxy(16,14);
cout<<"<1.Must add 3 pages of theory                            >";
gotoxy(16,15);
cout<<"<2.Must add 5 MCQ questions with answers and explanation >";
gotoxy(16,16);
cout<<"<Press (<) to go back/press any key to continue:         >";
gotoxy(65,16);
char che=getch();
if(che=='<') return(0);
else if(che=='~') exit(0);
		clrscr();
BORDER(10,1);
output(1,9,31,8);
gotoxy(30,9);
cout<<"<ADD TOPIC>";
cout<<"\n ___________________";
cout<<"\n<Enter the topic name>\n";
cout<<" ___________________\n";
		Gets(line);
		x++;
		fout<<"@"<<x<<"\n"<<line<<"\n";
		for(int j=0;line[j]!='\0';j++)
		{if(line[j]==' ')
		line[j]='`';
		}
		ofss<<x<<' '<<line<<' '<<int(teyapaya.da_day)<<'/'<<int(teyapaya.da_mon)<<'/'<<int(teyapaya.da_year)<<'\n';
		ofss.close();
		cout<<"\n _________________________________________________________";
		cout<<"\n<Enter the introduction page(end the para with '|' symbol)>";
		cout<<"\n<And before typing next line type enter                   >\n";
		cout<<" _________________________________________________________\n";
		cin.getline(line,1000,'|');
		fout<<line<<"|\n";
		cout<<"\n ___________________________________________________";
		cout<<"\n<Enter the second page(end the para with '|' symbol)>";
		cout<<"\n<And before typing next line type enter             >";
		cout<<"\n ___________________________________________________\n";
		cin.getline(line,1000,'|');
		fout<<line<<"|\n";
		cout<<"\n ______________________________________";
		cout<<"\n<Enter a Example for ur topic          >";
		cout<<"\n<And before typing next line type enter>";
		cout<<"\n ______________________________________\n";
		cin.getline(line,1000,'|');
		fout<<line<<"|\n";
		fout.close();
		ofstream out("maths1.txt",ios::app);
		out<<"@"<<x<<"\n";
		 for(int i=1;i<6;i++)
		 {            op='a';
			cout<<"\nenter the "<<i<<" MCQ question \n"<<i<<".";
			Gets(line);
			out<<i<<"."<<line<<" \n";
			for(int j=1;j<5;j++)
			 {
	cout<<"\nEnter the "<<j<<" options\n"<<op<<".";
	Gets(line);
	out<<op<<"."<<line<<"\n";
	op++;
			 }
			cout<<"\nEnter the correct option\n";
			cin>>line;
			out<<"#"<<line<<" \n";
			cout<<"Enter the explanation for the question\n";
			Gets(line);
			out<<line<<"$ \n";
			} out.close();
return(0);
}
int  srch_date(int a){
 char line[1000],dat1; int mon,pmon,x=0;
	char teja[3],tej[3];
	date kris;
	getdate(&kris);
	 mon=int(kris.da_mon);   pmon=mon-1;
	 if(mon>9)
		{
		 teja[1]=48+(mon%10);
		 teja[0]=48+(mon/10);
		 teja[2]='\0';
		}
	 else
		{
			teja[0]=48+mon;
			teja[1]='\0';
		}
		 if(pmon>9)
		{
		 tej[1]=48+(pmon%10);
		 tej[0]=48+(pmon/10);
		 tej[2]='\0';
		}
	 else
		{
			tej[0]=48+pmon;
			tej[1]='\0';
		}
		 if(a==1)
			{  ifstream fin("mathsfun.txt");
	 while(!fin.eof())
		{
			fin>>line;
				if(strcmp(line,"RegistrationdatE:")==0)
		{ fin.getline(line,30,'/');
			fin.getline(line,30,'/');
			 if( strcmp(line,teja)==0)
				 x++;
		}
		}  fin.close();
			}
		 else if(a==2)
			{  ifstream fin("shreyas.txt");
	 while(!fin.eof())
		{       fin.getline(line,30,'/');
			fin.getline(line,30,'/');
			 if( strcmp(line,teja)==0) x++;
		}     fin.close();
			}
			else if(a==3)
			{  ifstream fin("shreyas.txt");
	 while(!fin.eof())
		{       fin.getline(line,30,'/');
			fin.getline(line,30,'/');
			 if( strcmp(line,tej)==0)	 x++;
		}     fin.close();
			}
	 return(x);
}
void status()
 {    clrscr();
	char line[1000],dat1; int mon;
	char teja[2];
	 ifstream fin("mathsfun.txt");
	 ofstream fout("temp.txt");
	date kris;
	getdate(&kris);
	 mon=int(kris.da_mon);
	 teja[1]=48+(mon%10);
	 teja[0]=48+(mon/10);
			 if(mon>9)
		{
		 teja[1]=48+(mon%10);
		 teja[0]=48+(mon/10);
		 teja[2]='\0';
		}
	 else
		{
			teja[0]=48+mon;
			teja[1]='\0';
		}
	while (!fin.eof())
	 {
			fin>>line;
			fout<<line<<' ';
			if(strcmp(line,"LastseeN:")==0)
	{fin.getline(line,30,'/');
	fout<<line<<'/';
	fin.getline(line,30,'/');
	fout<<line<<'/';
	if(teja[0]-line[0]>0)
	{fin>>line;
	fout<<line<<'\n';
	delay(1000);
	fin>>line;
	fout<<line<<' ';
	fin>>line;
	fout<<line<<'\n';
	fin>>line;
	fout<<line;
	fin>>line;
	fout<<' '<<'n'<<'\n'<<'\n';
	}
	else
	{fin>>line;
	fout<<line<<'\n';
	fin>>line;
	fout<<line<<' ';
	fin>>line;
	fout<<line<<'\n';
	fin>>line;
	fout<<line;
	fin>>line;
	fout<<' '<<'y'<<'\n'<<'\n';
	}	}
		 else
		 {fin>>line;
		 fout<<line<<'\n';
		 }
	 }
	 remove("mathsfun.txt");
	 fin.close();
	 fout.close();
	 fin.open("temp.txt");
	 fout.open("mathsfun.txt");
	 while(!fin.eof())
	 { char rr[1000];
		fin.getline(rr,1000);
		fout<<rr<<'\n';
	 } fin.close();
	 fout.close();
	 remove("temp.txt");
 }
 int  sub_stas(char a)
{char mass[22][30],line[1000];
ifstream fin("mathsfun.txt");
	while(!fin.eof())
	{int i=0;
	for(;i<20;i++)
	fin>>mass[i];
	fin>>mass[i];
		if(strcmp(mass[i++],"SubscriberstatuS:")==0)
		{fin>>mass[i];
			if(mass[i][0]==a)
			{for(int j=0;j<22;j+=2)
			{
			gotoxy(19,(j/2)+9);
			cout<<mass[j]<<' '<<mass[j+1]<<'\n';
			}
			cout<<'\n';
			i=0;
			}
			getch();
		}
	}fin.close();
 }
void main()
{
for(int i=8;i<30;i+=2)
{
clrscr();
gotoxy(i,2);
cout<<"      _                                       \n  ";
gotoxy(i,3);
cout<<"      \\`\\                                   \n ";
gotoxy(i,4);
cout<<"  |\\ ____\\_\\__                                \n ";
gotoxy(i,5);
cout<<"  \\*`\""<<char(1)<<" TKS "<<char(1)<<" \"`)                              \n ";
gotoxy(i,6);
cout<<"   `~~~~~/ /~~~`                               \n ";
gotoxy(i,7);
cout<<"       / /                                   \n ";
gotoxy(i,8);
cout<<"      '-'                                    \n ";
gotoxy(i-6,9);
cout<<" ________________________________________";
gotoxy(i-6,10);
cout<<"<           RAMANUJAM MATHS FUN          >";
gotoxy(i-6,11);
cout<<"<                                        >";
gotoxy(i-6,12);
cout<<"<   DONE BY:                             >";
gotoxy(i-6,13);
cout<<"<                                        >";
gotoxy(i-6,14);
cout<<"<            "<<char(15)<<"  Teja                     >";
gotoxy(i-6,15);
cout<<"<                                        >";
gotoxy(i-6,16);
cout<<"<            "<<char(15)<<"  Krishna                  >";
gotoxy(i-6,17);
cout<<"<                                        >";
gotoxy(i-6,18);
cout<<"<            "<<char(15)<<"  Shreyas                  >";
gotoxy(i-6,19);
cout<<"<________________________________________>";
delay(100);
}
getch();
default_ini();
Back_home:
{
char shreyas,Back[10]; clrscr();
BORDER(50);
output(5,17,28,11);
gotoxy(29,12);
COUT("1.Admin",50);
gotoxy(29,13);
COUT("2.User",50);
gotoxy(29,14);
COUT("3.Signup",50);
gotoxy(29,15);
COUT("Your choice:",50);
do
{shreyas=getch();
}while(!(shreyas=='1'||shreyas=='2'||shreyas=='3'||shreyas=='~'));
switch(shreyas)
{case '1':
case '2':
case '3':cout<<shreyas;
	 gotoxy(29,16);
	 cout<<"Loading...";
	 delay(1500);
	 clrscr();
	 BORDER();
break;
case '~':cout<<shreyas;
	 gotoxy(29,16);
	 cout<<"Loading...";
	 delay(1500);
break;
}
ofstream fout_2("mathsfun.txt",ios::noreplace);
			fout_2<<"SubscribernumbeR: "<<0<<"\nFirstnamE: user"<<"\nLastnamE: user"<<"\nPhonE: 9999999999"<<"\nNewsletterstatuS: s"<<"\nEmailiD: user@user.user"<<"\nUsernamE: user"<<"\nPassworD: password\nLastseeN: 00/00/0000\nRegistrationdatE: 00/00/0000"<<"\nSubscriberstatuS: y"<<"\n";
			fout_2.close();
switch(shreyas)
{case '1':ofstream fout_1("ADMIN.txt",ios::noreplace);
output(1,11,30,7);
gotoxy(31,8);
COUT("ADMIN LOGIN");
fout_1<<"PassworD: admin\nUsernamE: admin";
fout_1.close();
ADMIN a1;
output(3,38,17,9);
int Try=a1.Login();
	while(Try){	Try=a1.Forgot_password();}
	clrscr();
	fout_1.close();
	Back_admin:
	{
	clrscr();
	BORDER();
	output(8,24,28,8);
	gotoxy(29,9);
	COUT("1.password/Factory reset");
	gotoxy(29,10);
	COUT("2.Subscribers");
	gotoxy(29,11);
	COUT("3.Add topic");
	gotoxy(29,12);
	COUT("4.Inbox");
	gotoxy(29,13);
	COUT("5.subscriber/topic added");
	gotoxy(29,14);
	COUT("6.Logout");
	gotoxy(29,15);
	COUT("Your choice:");
	char swi;
	do
	{swi=getch();
	}while(!(swi=='1'||swi=='2'||swi=='3'||swi=='4'||swi=='5'||swi=='6'||swi=='~'));
	cout<<swi;
	gotoxy(29,16);
	cout<<"Loading...";
	delay(1500);
		switch(swi)
		{case '1':clrscr();
				BORDER();
				output(4,37,17,9);
				gotoxy(17,10);
				cout<<"<1.Change password                    >";
				gotoxy(17,11);
				cout<<"<2.Factory reset                      >";
				gotoxy(17,12);
				cout<<"<Your choice:                         >";
				char ccc;
				gotoxy(32,12);
				do
				{ccc=getch();
				}while(!(ccc=='1'||ccc=='2'));
				cout<<ccc;
				gotoxy(18,13);
				cout<<"Loading...";
				delay(1500);
					if(ccc=='1')
					{clrscr();
					BORDER();
					output(3,37,17,9);
					a1.CHNG_pass();
					}
					else
					{gotoxy(18,13);
					cout<<"datas will be cleared(not user)<y/n>";
					ccc=getch();
					if(ccc=='y')
					{remove("shreyas.txt");
					remove("temp1.txt");
					remove("tejapala.txt");
					remove("maths1.txt");
					default_ini();
					}
					}
					goto Back_admin;
		case '2':clrscr();
			 BORDER();
			 char chh;
			 output(1,10,31,7);
			 gotoxy(31,8);
			 cout<<"<SUBSCRIBER>";
			 output(4,25,25,12);
			 gotoxy(26,13);
			 cout<<"1.Delete subscribers";
			 gotoxy(26,14);
			 cout<<"2.View subscribers";
			 gotoxy(26,15);
			 cout<<"Enter your choice:";
			 do
			 {chh=getch();
			 }while(!(chh=='1'||chh=='2'||chh=='~'));
			 cout<<chh;
			 gotoxy(26,16);
			 cout<<"Loading...";
			 delay(1500);
			 switch(chh)
			 {  case '1':delete_sub();
						 goto Back_admin;
					case '2':display_sub();
						 goto Back_admin;
			 }
		case '3':
						 Shreyas();
				goto Back_admin;
		case '4':ifstream fr1;
			 char str[1000];
			 fr1.open("temp1.txt");
			 clrscr();
			 BORDER();
			 output(1,5,31,8);
			 gotoxy(31,9);
			 cout<<"<INBOX>";
			 while(!fr1.eof())
			 {fr1>>str;
			 gotoxy(18,12);
			 if(strcmp(str,"`")==0)
			 {cout<<"SORRY NO MESSAGE";
			 break;
			 }
			 fr1>>str;
			 cout<<"subno"<<' '<<str;
			 fr1.getline(str,1000,'$');
				cout<<"\n\t"<<str;
				}
				 fr1.close();
				 getch();
			 goto Back_admin;
		case '5':   clrscr();
								BORDER();
								output(1,11,31,8);
							gotoxy(30,9);	cout<<"<NEW ENTRIES>";
							output(3,45,20,12);
							gotoxy(21,13);
							cout<<"No. of subscribers registered tis month : "<<srch_date(1);
							gotoxy(21,14);
							cout<<"No. of topics added this month: "<<srch_date(2);
							gotoxy(21,15);
							cout<<"No. of topics added previous  month: "<<srch_date(3);
							getch();
							goto Back_admin;
		case '6': goto Back_home;
		case '~':ofstream teyapaya("temp1.txt",ios::trunc);
						 teyapaya<<'`';
						 teyapaya.close();
								exit(0);
								break;
		default:goto Back_admin;
		}
	}
	break;
case '3': sign_up:
		{read();
		gotoxy(18,17);	cout<<"Loading...";
		delay(1500);
		gotoxy(18,17);	cout<<"Verifying details...";
		delay(1500);
		gotoxy(18,17);	cout<<"Verification message sent(email)";
		delay(1500);
		gotoxy(18,17);	cout<<"Waiting for your response       ";
		delay(3000);
		gotoxy(18,17);	cout<<"Sucessfully verified.loading...  ";
		delay(2000);
		gotoxy(18,17);	cout<<"Creating new account...          ";
		delay(1500);
		clrscr();
		BORDER();
		char tc;
	output(7,57,13,8);
	gotoxy(13,9);
	cout<<"<TERMS AND CONDITIONS                                     >";
	gotoxy(13,10);
	cout<<"<1.User cannot create more than one account               >";
	gotoxy(13,11);
	cout<<"<2.User have to take test after every maths topic         >";
	gotoxy(13,12);
	cout<<"<3.User must have a decent username                       >";
	gotoxy(13,13);
	cout<<"<4.User must not post that is irrelevent to the topic     >";
	gotoxy(13,14);
	cout<<"<  other than Mathematics                                 >";
	gotoxy(13,15);
	cout<<"<5.If the user is not active for more than 1mont the user >";
	gotoxy(13,16);
	cout<<"<  will be removed                                        >";
	getch();
	clrscr();
	BORDER();
	output(9,57,13,8);
	gotoxy(13,9);
	cout<<"<TERMS AND CONDITIONS                                      >";
	gotoxy(13,10);
	cout<<"<6.User cannot exit in the following pages..               >";
	gotoxy(13,11);
	cout<<"<  a.TERMS AND CODITIONS                                   >";
	gotoxy(13,12);
	cout<<"<  b.MCQ TEST                                              >";
	gotoxy(13,13);
	cout<<"<7.User will ho complete the course within 30 days         >";
	gotoxy(13,14);
	cout<<"<8.If the doubt of the user is not answered within 24 hours>";
	gotoxy(13,15);
	cout<<"<  user can contact http://www.tksacademy.com/answerdoubt  >";
	gotoxy(13,16);
	cout<<"<9.User have to accept all the terms and conditions..      >";
	gotoxy(13,17);
	cout<<"<  Press enter to continue                                 >";
	tc=getch();
	do
	{tc=getch();
	}while(tc!=13);
		}
case '2':TTTT:
		clrscr();
		BORDER();
	 char u1[25],p1[25],subno[20],subno2[20];
	 {{  output(1,10,30,7);
	 gotoxy(31,8);
	 COUT("USER LOGIN");
	 output(3,37,17,9);
	long xy;
	ifstream ft("mathsfun.txt");
	ofstream fp("temp.txt");
	gotoxy(18,10);
	COUT("Username:");
	gotoxy(18,11);
	COUT("Password:");
	XX:
	{gotoxy(53,11);
	 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	 gotoxy(53,10);
	 cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                           \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	gotoxy(28,10);
	Gets(u1);
	gotoxy(28,11);
	strcpy(p1,Password());
	xy=KRIS(u1,p1);
	}
	if(xy==-3) goto XX;
	else if(xy>0)
	{date ls;
	getdate(&ls);
	while(!ft.eof())
	{char abc1[30];
	ft>>abc1;
		if(strcmp(abc1,"SubscriberstatuS:")==0)
		{fp<<abc1<<' ';
		ft>>abc1;
		fp<<abc1<<'\n'<<'\n';
		ft>>abc1;
		}
		if(strcmp(abc1,"SubscribernumbeR:")==0)
		{fp<<abc1<<' ';
		ft>>abc1;
		fp<<abc1<<'\n';
		strcpy(subno2,abc1);
		ft>>abc1;
		}
		if(ft.tellg()==xy)
		{	fp<<abc1<<' ';
		ft>>abc1;
		fp<<int(ls.da_day)<<'/'<<int(ls.da_mon)<<'/'<<int(ls.da_year)<<'\n';
		strcpy(subno,subno2);
		}
		else
		{	fp<<abc1;
		ft.getline(abc1,30);
		if(!ft.eof())
		fp<<abc1<<'\n';
		else fp<<abc1;
		}
	}
	fp.close();
	ft.close();
	remove("mathsfun.txt");
	ft.open("temp.txt");
	fp.open("mathsfun.txt",ios::trunc);
		while(!ft.eof())
		{char chng[1000];
		ft.getline(chng,1000);
		fp<<chng<<'\n';
		}
	remove("temp.txt");
	ft.close();
	fp.close();
	}
	else if(xy==-1)	goto TTTT;
	else goto sign_up;
	}
	Back_user:
	{clrscr();
	BORDER();
	output(1,26,26,7);
	gotoxy(27,8);
	 cout<<"<Your subscriber no.:"<<subno<<'>';
	 output(6,20,28,10);
	gotoxy(29,11); COUT("1.Edit profile");
	gotoxy(29,12); COUT("2.Maths topic");
	gotoxy(29,13); COUT("3.Ask doubt");
	gotoxy(29,14); COUT("4.Logout");
	gotoxy(29,15); COUT("Enter your choice:");
	char opt_1;
	do
	{opt_1=getch();
	}while(!(opt_1=='1'||opt_1=='2'||opt_1=='3'||opt_1=='4'||opt_1=='~'));
	cout<<opt_1;
	gotoxy(29,16); cout<<"Loading...";
	delay(1500);
	switch(opt_1)
	{case '1':
						Back_edit:
					{clrscr();
					BORDER();
					output(1,12,32,7);
					gotoxy(32,8); cout<<"<EDIT PROFILE>";
					output(7,20,28,11);
			gotoxy(29,12); cout<<"1.Password";
			gotoxy(29,13); cout<<"2.Phone";
			gotoxy(29,14); cout<<"3.Email";
			gotoxy(29,15); cout<<"4.View profile";
			gotoxy(29,16); cout<<"5.Back";
			gotoxy(29,17); cout<<"Enter your choice:";
			char opt_2,initial[30],final[30];
			int chk_2=0,chk_3=0,chk_4=0;
			do
			{opt_2=getch();
			}while(!((opt_2>'0'&&opt_2<'6')||(opt_2=='~')));
			cout<<opt_2;
			gotoxy(29,18); cout<<"Loading...";
			delay(1500);
			 switch(opt_2)
			{ case '4':    EDIT_VIEW:
					{   clrscr();
				BORDER();
				output(12,42,17,8);
				char chk[1000];
				ifstream inf("mathsfun.txt");
				while(!inf.eof())
				{inf>>chk;
					if(strcmp(chk,"SubscribernumbeR:")==0)
					{inf>>chk;
						if(strcmp(chk,subno)==0)
						{gotoxy(19,9); cout<<"SubscribernumbeR: "<<subno;
						for(int i=1;i<11;i++)
						{char chk[30];
								 inf>>chk;
								if(strcmp(chk,"PassworD:")==0)
								{gotoxy(19,i+9);
								cout<<chk<<' ';
								inf>>chk;
								for(int i=0;i<strlen(chk);i++) cout<<"*";
								}
								else
								{gotoxy(19,i+9); cout<<chk;
								inf.getline(chk,1000);
								cout<<chk<<endl;
								}
						}
						inf.close();
						break;
						}	}	}
				inf.close();
				}
				char c;
				c=getch();
				if(c=='~')
				{
				delay(1500);
				 exit(0);
				 }
				 gotoxy(19,20);
				 cout<<"Loading...";
				 delay(1500);
						 break;
			case '1':clrscr();
					BORDER();
					output(3,37,17,9);
					user_pass(subno);
					goto Back_edit;

			case '2':     {clrscr();
				BORDER();
				output(12,42,17,8);
				char chk[1000];
				ifstream inf("mathsfun.txt");
				while(!inf.eof())
				{inf>>chk;
					if(strcmp(chk,"SubscribernumbeR:")==0)
					{inf>>chk;
						if(strcmp(chk,subno)==0)
						{gotoxy(19,9);
						cout<<"SubscribernumbeR: "<<subno;
						for(int i=1;i<11;i++)
						{char chk[30];
								 inf>>chk;
								 if(strcmp(chk,"PhonE:")==0) inf>>initial;
								if(strcmp(chk,"PassworD:")==0)
								{gotoxy(19,i+9);
								cout<<chk<<' ';
								inf>>chk;
								for(int i=0;i<strlen(chk);i++) cout<<"*";
								}
								else
								{gotoxy(19,i+9); cout<<chk;
								inf.getline(chk,1000);
								cout<<chk<<endl;
								}
						}
						inf.close();
						break;
						}	}	}
				inf.close();
						do
						{chk_2=0;
						gotoxy(53,12);
						cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						gotoxy(19,12); cout<<"NEW PHONE";
						gotoxy(35,12); cout<<':';
						Gets(final);
						for(int i=0;final[i]!='\0';i++)
							{if((i==0)&&!(final[i]>='7')) chk_2++;
							if(!isdigit(final[i])) chk_2++;
							}
						if(strlen(final)!=10) chk_2++;
						if(chk_2)
						{for(int i=0;i<5;i++)
						{gotoxy(18,20); cout<<"Invalid number!!!" ;
						delay(400);
						cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                 \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						delay(100);
						}}}
						while(chk_2);
				 user_edit("PhonE:",initial,final);
				 gotoxy(18,20);
				 cout<<"Loading...";
				 delay(1500);
				 goto Back_edit;
				 }
			case '3': {clrscr();
				BORDER();
				output(12,42,17,8);
				ifstream inf("mathsfun.txt");
				char chk[1000];
				while(!inf.eof())
				{inf>>chk;
					if(strcmp(chk,"SubscribernumbeR:")==0)
					{inf>>chk;
						if(strcmp(chk,subno)==0)
						{gotoxy(19,9);
						cout<<"SubscribernumbeR: "<<subno;
						for(int i=1;i<11;i++)
						{char chk[30];
								 inf>>chk;
								 if(strcmp(chk,"EmailiD:")==0) inf>>initial;
								if(strcmp(chk,"PassworD:")==0)
								{gotoxy(19,i+9);
								cout<<chk<<' ';
								inf>>chk;
								for(int i=0;i<strlen(chk);i++)
								cout<<"*";
								}
								else
								{gotoxy(19,i+9);
								cout<<chk;
								inf.getline(chk,1000);
								cout<<chk<<endl;
								}
						}
						inf.close();
						break;
						}	}	}
				inf.close();
						do
						{chk_3=0;
						gotoxy(53,14);
						cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                                        \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						gotoxy(18,14); cout<<"NEW EMAIL ID";
						gotoxy(35,14); cout<<':';
						Gets(final);
							for(int j=0;final[j]!='\0';j++)
							{	if(final[j]=='@') chk_3++;
								else if(final[j]=='.') chk_4++;
							}
							if(!(chk_3&&chk_4))
							{gotoxy(18,20);
							for(int b=0;b<5;b++)
							{cout<<"Invalid email id!!!";
							delay(400);
							cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                   \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
							delay(100);
							}							}
						}while(!(chk_3&&chk_4));
				 user_edit("EmailiD:",initial,final);
				 gotoxy(18,20); cout<<"Loading...";
				 delay(1500);
				 goto Back_edit;
				 }
		case '5':  goto Back_user;
			case '~':
				 exit(0);
			}}
	 goto Back_user;
	case '2': TEJAPALA();
		 goto Back_user;
	case'3': cout<<"\nLoading...";
		 doubt(subno);
		 delay(1500);
		 goto Back_user;
	case '4': goto Back_home;
	case '~':  exit(0);
	}	}}break;}}}
