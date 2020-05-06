# E-Tutorial

A C++ application using file system for E tutorial.

#DESCRIPTION
A void COUT(char *Print,int x=10)-takes the string and the delaytime and prints the string character by
character with delay of x(by default 10).
void output(int m,int n,int x,int y)-to put inner border;m rows ,n pickel wide, and starting coordinate of
x&y.
void BORDER(int x=10,int y=0)-to print the border with delay of x and to print the side border if y=0 or
dont(default y=0).
void Gets(char *p)-reads a string just like built in function gets but exits the program on pressing"~" and
cant take null value i.e the first char cant be '\0'.
void change_my_password(char *p_1)-changes the password in the file "ADMIN.txt" takes the new
password as parameter.
char *Password()-that protects the password by display * for every char during reading the password and
returns the password.
void default_ini()-creates and initialises all the file required the program with the neccessary value.
char *Validate(char *p,char *p2,int x=11,int y=17)-that checks and makes sure that no 2 person has
same email,phone,username to make sure that 1 user creates one account;p2-the
criteria(phone,email,etc);p-the value;x&y coordinates to display the messages;return the value which is
tested.

MEMBER FUNCTIONS OF CLASS ADMIN:
constructor-to initialise the variable ini_password,ini_username with the values from the file.
void CHNG_pass()-that takes the value of new password and calls change_my_password which the
value in the file.
int Login()-that reads the username and password if the username and password matches returns 1
else 0.

MEMBERS FUNCTION OF CLASS SUBSCRIBE:
long Sub_num(),char *FNAME(),char *LNAME(),char *EMAIL(),char *NUMBER(),char *USER(),char
*PASSWORD() are the accessor fn to return subscriber no.
,firstname,lastname,email,phone,user,password respectively.
constructor-to initialise the sub_num.
void NAMECHK(char fname,int x=10)-to check for the valid name(no char other than alphabets) takes
the string and the x-coordinate as its argument.
void getdata()-to read all the value and check whether a valid input and also calls validate() function to
ensure the data is an valid one and not repeated.
void read()-to create a new user i.e signup.
long kris(char *user_name,char *pass_word)- to facilitate user login if wrong password takes the
password and calls itself.Takes user name and password as its argument and returns the byte in the file
if login success or returns -3 to signup and return -2 if wrong username.
void user_pass(char*x)- to change the user password and update the value in file.Take the subcriber
number as parameter.
void user_edit(char *p,char *p2,char *p3)-to change the value of email,phone,userid .p-what to update
,p2-old value,p3-value to be updated.
void delete_record(char *subno)-to delete a subscriber .It takes the subscriber number as its argument.

void delete_sub()-to give the user choice to delete using subscriber number or username.If username
then find the subscriber number and call the fn delete_record else directly call.
void doubt(char *subno)-to update the doubt so that admin can read it.
void display_sub()-to display all the details or enable to search by subscriber
number/username/subscriber status.

#How to run
Download turbo-cpp and run with it
