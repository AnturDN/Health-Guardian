#include <bits/stdc++.h>
using namespace std;

class registar{
public:
    string name;
    string email;
    string phone;

//constructor
registar(){
name="billal";
email="billal4720@gmail.com";
phone="+8801xxxxxxx";
}

    void inputdata(){
cout<<"\n\n\n---------general registration---------\n\n\n"<<endl;
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your email :";
    cin>>email;
    cout<<"Enter your phone :";
    cin>>phone;
    cout << endl;
    cout << "Congrats ! Your registration successfully Done ! " << endl;
    }
    void printregidata(){
    cout<<"\n\n\n---------general data print---------\n\n\n"<<endl;
    cout<<"name :"<<name<<endl;
     cout<<"email :"<<email<<endl;
     cout<<"phone :"<<phone<<endl;

    }
};

class donorregistration:public registar{   //inheritance
public:
string address;
string bloodgroup;
int age;
string dateofbirth;
string bdb; //blood donate before


  int inputdata(){  //overridding
      string dis ;
      cout<<"\n\n\n---------Donor registration---------\n\n\n"<<endl;
      cout<<"do you have any diseces (y ? n) :";
      cin>> dis ;
      if(dis=="y" || dis=="Y" ){
cout <<"you are not eligible to donate blood .When you passed your illness then you try to donate blood ";
      return 0;
      }
      if(dis=="n" || dis=="N"){
        cout<<"You are eligible to donate blood . THANK YOU."<< endl ;
      }
    cout<<"name :";
    cin>>name;
    cout<<"email :";
    cin>>email;
    cout<<"phone :";
    cin>>phone;
    cout<<"Enter your address :";
    cin>>address;
    cout<<"Enter your bloodgroup :";
    cin>>bloodgroup;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Enter date of birth :";
    cin>>dateofbirth;
    cout<<"have ever donated blood before : ";
    cin>>bdb;
    }
void printregidata(){//over ridding
     cout<<"\n\n\n-----donor registration info---------\n\n\n";
     cout<<"name :"<<name<<endl;
     cout<<"email :"<<email<<endl;
     cout<<"phone :"<<phone<<endl;
     cout<<"address :"<<address<<endl;
     cout<<"bloodgroup"<<bloodgroup<<endl;
     cout<<"age"<<age<<endl;
     cout<<"date of birth :"<<dateofbirth<<endl;
     cout<<"have ever donated blood before"<< bdb<<endl;
    }

};
// info recipient
class donorrequest{
private:
 string ppblm; //patient problem

public:
 string reciname;
 string reciphone;
 string reciaddress;
 string hospitalname;
 string nbg; //need blood group
 string gender;
 int nth; //How many bags of blood?
 donorrequest(int n){  //parameterez constructor
 nth=n;
 }


   void inputdatarequ(){
cout<<"---------Donor request---------"<<endl;
    cout<<"Enter blood recipient name :";
    cin>>reciname;
    cout<<"Enter blood recipient phone :";
    cin>>reciphone;

    cout<<"Enter blood receving address :";
    cin>>reciaddress;
    cout<<"Enter recipient bloodgroup :";
    cin>>nbg;

   }
   //encapsulation
     void inputdata2(string p){
     ppblm=p;
     }
   string outdata(){
   return ppblm;
   }
     void inputdatarequ(string h,string g){ //overloading
     hospitalname= h;
     gender=  g;
     }

     void printrequestdata(){  //overridding
cout<<"---------Donor request information---------"<<endl;
cout<<"blood recipient name :"<<reciname<<endl;
cout<<"blood recipient phone :"<<reciphone<<endl;
cout<<"blood receving address :"<<reciaddress<<endl;
cout<<"recipient bloodgroup :"<<nbg<<endl;
cout<<"recipient problem :"<<ppblm<<endl;
cout<<"recipient hospitalname :"<<hospitalname<<endl;
cout<<"Enter recipient gender: "<<gender<<endl;
cout<<"blood donor number : "<<nth<<endl;//parameter constructor

     }

     void donordatail(string bg){

     cout<<"donor name: sabbir ! BG : '"<<bg<<"' ! phone :01xxxxxxxx ! address:kawla ! \n ";
                        cout<<"donor name: Laden ! BG : '"<<bg<<"' ! phone :01xxxxxxxx ! address:uttata ! \n ";
                                    cout<<"donor name: Shamim ! BG : '"<<bg<<"'  ! phone :01xxxxxxxx ! address: thakurgaon ! \n ";
                                                cout<<"donor name: Antur ! BG : '"<<bg<<"'  ! phone :01xxxxxxxx ! address: dhanmondi ! \n ";
                                                            cout<<"donor name: mubin ! BG :  '"<<bg<<"'  ! phone :01xxxxxxxx ! address: jatrabari ! \n ";
                                                                        cout<<"donor name: sahib ! BG : '"<<bg<<"'  ! phone :01xxxxxxxx ! address: rongpur ! \n ";
                                                                                    cout<<"donor name: kabir ! BG :'"<<bg<<"'  ! phone :01xxxxxxxx ! address:dhaka ! \n ";


     }

     void finddonor1(){
       //  string tolow=tolower(nbg);
  cout<<"\n\n\n\n<--------------our application have available '"<<nbg<<"' blood donor---------->\n\n"<<endl;
       if(nbg== "a+"){
         donordatail(nbg);

        }

      else if(nbg== "a-"){
              donordatail(nbg);

        }

         else if(nbg== "b+"){
              donordatail(nbg);

        }
          else if(nbg== "b-"){
   donordatail(nbg);

        }
        else if(nbg== "o+"){
              donordatail(nbg);

        }

         else if(nbg== "o-"){
             donordatail(nbg);

        }

         else if(nbg== "ab"){
             donordatail(nbg);

        }
         else if(nbg== "ab-"){
              donordatail(nbg);

        }
        else{
            cout<<"sir ! please make blood donor request .";
        }
     }
};


//Separation of Interface and Implementation
class devinfo{
public:
	virtual void dev ()=0;
	virtual void boss()=0;
};
class detail:public devinfo{
	public:
		void dev(){
			cout<<"<-----developer----->\n------HEALTH GURDIAN-----\n----cse dept----\n-----northern university bangladesh-----\n"<<endl;
		}
		void boss(){
			cout << "<-----instructor----->\n <-----Jannatul Nesha  ------>\n<----cse dept----> \n <-----northern university bangladesh----->" <<endl;
		}
};





int main(){
    cout<<"     <--------------Welcome Health guardian (HG)----------> "<<endl;


    //Object calling
registar gregi;
donorregistration dnr;
donorrequest drequ(5);//parameter constructor
//devclass interface
devinfo *dev1 = new detail();
//object call end


//int a,b,c,d,e,f,g,h,nth2;
string hospitalname,gender;
string pb;
//user input
int number;
//loop iteration
int i=1;

while(i!=0){
//all
cout <<"-----------Read carefully-------------";
cout<<"\n\n To entry our application press ->1  :"<<endl;
cout<<"\nshowing registration data press ->2 "<<endl;
cout<<"\nDonor registration press ->3 "<<endl;
cout<<"\nshow Donor registration data press ->4"<<endl;
cout<<"\nmake Donor request press ->5"<<endl;
cout<<"\nshow Donor request data press->6 "<<endl;
// find donor
cout<<"\nshow available blood donor press->7 "<<endl;
cout<<"\nDeveloper info press ->8";
// all end
cout<<"\nEnter your choice : ";
cin>>number ;

switch(number){
case 1:
gregi.inputdata();
    break;

        case 2:
  gregi.printregidata();
            break;

        case 3:
 dnr.inputdata();
            break;

        case 4:
dnr.printregidata();
            break;

        case 5:
 drequ.inputdatarequ();
     cout<<"Enter recipient problem :";
    cin>>pb;
    drequ.inputdata2(pb);
     cout<<"Enter recipient hospitalname :";
    cin>>hospitalname;
    cout<<"Enter recipient gender: ";
    cin>>gender;
     drequ.inputdatarequ(hospitalname,gender);
            break;

        case 6:
 drequ.printrequestdata();
            break;

        case 7:
drequ.finddonor1();
            break;

             case 8:
                 //Separation of Interface and Implementation
  dev1->dev();
  dev1->boss();
            break;

        default:
            cout<< "Error! your is not correct";
            break;

}

cout<<"\n\nshow menu ( press ->1<-):";
cin>>i;
}
}
