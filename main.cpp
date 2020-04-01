//Sveshnikov Artem 19-PM-2 Variant 15
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;



int podschet(int h,int m,int s){
	int timesec;
	timesec =h*360+m*60+s;
	return timesec;
	}


int main(int argc, char* argv[]) {
	char  *nameopen=argv[1];
	char *namezap=argv[2];
	int h1,h2,m1,m2,s1,s2,timesec1,timesec2,timerez;
	fstream t1;
	t1.open(nameopen, ios::in);
	if (!t1)
	{
		cout<<"Fail s takim imenem ne naiden"<<endl;
		return -1;
	}
	t1>> h1>>m1>>s1;
	t1.close();
	if((h1>24)||(m1>60)||(s1>60))
	{
	cout<<"Vremia v file zadanno nepravilno."<<endl;
	return -1;
	}
	cout<<h1<<":"<<m1<<":"<<s1<<endl;
	timesec1=podschet(h1,m1,s1);	
	cout<<"Vvedit  chas, minutu i secundu cherez probel :"<< endl;
	cin>> h2>> m2>> s2;
	timesec2=podschet(h2,m2,s2);
	timerez=abs(timesec1-timesec2);
	fstream trez;
	trez.open(namezap, ios::out);
	trez<<timerez;
	trez.close();
	return 0;
}
