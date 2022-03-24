#include<iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class CankayaScooter{
	public:

		CankayaScooter()
        {

		}
		virtual ~CankayaScooter()
        {

		}
		virtual int Charge()=0;

};

class Scooter1:public CankayaScooter{
	public:
        Scooter1(){

        }
        virtual ~Scooter1(){

        }
		virtual int Charge()
		{
            srand(time(0));
		    int c1;
			c1=rand()%100;
			return c1;
		}

};
class Scooter2:public CankayaScooter{
	public:
        Scooter2(){

        }
        virtual ~Scooter2(){

        }
		virtual int Charge()
		{

            int c2;
            c2=rand()%100;
            return c2;
		}
};
class Scooter3:public CankayaScooter{
	public:
        Scooter3(){

        }
        virtual ~Scooter3(){

        }
		virtual int Charge()
		{
            int c3;
            c3=rand()%100;
            return c3;
		}
};
class Scooter4:public CankayaScooter{
	public:
        Scooter4(){

        }
        virtual ~Scooter4(){

        }
		virtual int Charge()
		{

            int c4;
            c4=rand()%100;
            return c4;
		}
};
class Scooter5:public CankayaScooter{
	public:
        Scooter5(){

        }
        virtual ~Scooter5(){

        }
		virtual int Charge ()
		{
            srand(time(0));
            int c5;
            c5=rand()%100;
            return c5;
		}
};
class User{
	public:
		int x;

		User(){

		}
		~User(){

		}
		void CommunicationInformation(){
			cout<<"Please enter your phone number : 0 ";
		}
		void Agreement(){
			cout<<"User agreement"<<endl;
			cout<<"yes/no : ";
		}
        int Payment()
        {
            int pay=0;
            cout<<"Case : "<<pay<<"$"<<endl;
            return pay;
        }
		void setPhoneSet(int p ){ x = p;}
		int getPhoneSet(){ return x;}
};

template<typename T>
T calculate(T x, T y )
{return (x * (0.5) + y) ;}

void exepction()
{
    try {
        throw 0;
    }
    catch (int thx) {
        cerr << "ERROR !!  --Please choose another scooter.-- -->Insufficient charge information: " << endl;
    }

}
int main() {

    User p1;
    User *phone = new User[5];
    bool time = true;
    float case1[5];
    int i = 0;
    CankayaScooter *s1 = new Scooter1;
    int st1;
    st1 = s1->Charge();

    CankayaScooter *s2 = new Scooter2;
    int st2;
    st2 = s2->Charge();

    CankayaScooter *s3 = new Scooter3;
    int st3;
    st3 = s3->Charge();

    CankayaScooter *s4 = new Scooter4;
    int st4;
    st4 = s4->Charge();

    CankayaScooter *s5 = new Scooter5;
    int st5;
    st5 = s5->Charge();
	cout<<"Enter 5 user information  "<<endl;
    while ( time!=false) {


        p1.CommunicationInformation();
        double x;//cin phone
        cin >> x;
        phone[i].setPhoneSet(x);

        p1.Agreement();
        string ag;
        cin >> ag;

        if (ag == "yes" || ag == "YES" || ag == "Yes") {
            cout << "Please enter card information : ";
            double ci;  //ci = card information
            cin >> ci;
            User pay[5];

            case1[i] = pay[i].Payment();

            cout << "1)Start the journey\n2)Exit\n";
            int selection;
            cin >> selection;


            JUMP:
            if (selection == 1) {

                cout << "Scooter 1 ( " << st1 << "% )" << endl;

                cout << "Scooter 2 ( " << st2 << "% )" << endl;

                cout << "Scooter 3 ( " << st3 << "% )" << endl;

                cout << "Scooter 4 ( " << st4 << "% )" << endl;

                cout << "Scooter 5 ( " << st5 << "% )" << endl;


                cout << endl;
                cout << st1 << " " << st2 << " " << st3 << " " << st4 << " " << st5 << " " << endl;


                cout << endl;
                cout << "Please choose a scooter" << endl;


                int choicesc;
                cin >> choicesc;

                cout << "How many minutes did you use?" << endl;
                float minute;
                cin >> minute;
                double price = 2;
                int totalp;

                if (choicesc == 1) {

                    //başlangıç ücreti 2 tl dakika başı 50 krş
                    totalp = calculate<double>(minute, price);
                    cout << "Price : " << totalp << "$" << endl;
                    st1 = st1 - (minute * 0.3);
                    cout << "Current charge : " << st1 << endl;
                    if (st1 < 0) {
                        cout << "ERROR!! -->Insufficient charge " << endl;
                        goto JUMP;
                    }
                    case1[i] = ((minute / 10) * 0.1);
                    cout << "Promotion(Gift) : " << case1[i] << "$" << endl;

                } else if (choicesc == 2) {

                    totalp = calculate<double>(minute, price);
                    cout << "Price : " << totalp << "$" << endl;
                    st2 = st2 - (minute * 0.3);
                    cout << "Current charge : " << st2 << endl;
                    if (st2 < 0) {
                        cout << "ERROR!! -->Insufficient charge " << endl;
                        goto JUMP;
                    }
                    case1[i] = ((minute / 10) * 0.1);
                    cout << "Promotion(Gift) : " << case1[i] << "$" << endl;

                } else if (choicesc == 3) {

                    totalp = calculate<double>(minute, price);
                    cout << "Price : " << totalp << "$" << endl;
                    st3 = st3 - (minute * 0.3);
                    cout << "Current charge : " << st3 << endl;
                    if (st3 < 0) {
                        cout << "ERROR!! -->Insufficient charge " << endl;
                        goto JUMP;
                    }
                    case1[i] = ((minute / 10) * 0.1);
                    cout << "Promotion(Gift) : " << case1[i] << "$" << endl;

                } else if (choicesc == 4) {

                    totalp = calculate<double>(minute, price);
                    cout << "Price : " << totalp << "$" << endl;
                    st4 = st4 - (minute * 0.3);
                    cout << "Current charge : " << st4 << endl;
                    if (st4 < 0) {
                        cout << "ERROR!! -->Insufficient charge " << endl;
                        goto JUMP;
                    }
                    case1[i] = ((minute / 10) * 0.1);
                    cout << "Promotion(Gift) : " << case1[i] << "$" << endl;

                } else if (choicesc == 5) {

                    totalp = calculate<double>(minute, price);
                    cout << "Price : " << totalp << "$" << endl;
                    st5 = st5 - (minute * 0.3);
                    cout << "Current charge : " << st5 << endl;
                    if (st5 < 0) {
                        cout << "ERROR!! -->Insufficient charge " << endl;
                        goto JUMP;
                    }
                   
                    case1[i] = ((minute / 10) * 0.1);
                	cout << "Promotion(Gift) : " << case1[i] << "$" << endl;

                }

            }
            else if(selection==2)
            {
                time=false;
            }

        }
        else if (ag == "no") {
            time = false;
        }
        i++;
        
//        if(i>5)
//        {
//        	try
//        	{
//        		throw 0;
//			}
//			catch(int ex){
//				cerr<<"More information has been entered.";
//			}
//		}
    }

    for(int j=0;j<5;j++)
    {
        cout <<j+1<< " PROMOTION POINTS : "<<case1[j]<<"$"<<endl;
    }

    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete s5;
    delete phone;
    return 0;

}

