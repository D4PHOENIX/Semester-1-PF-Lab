#include <iostream>
using namespace std;

int main(){
    string userName;
	cout<<"Enter your name: ";
	getline(cin,userName);
	// cout<<"Enter your Name: "<<userName<<endl;
    float math, mathTotal, phy, phyTotal, che, cheTotal, eng, engTotal, entryTestObtained, entryTestTotal;
    cout<<"Input your marks below:\n";
    cout<<"Obtained Marks in Math: "; cin>>math;
    cout<<"Total Marks in Math: "; cin>> mathTotal;
    cout<<"Obtained Marks in Physics: ";  cin>>phy;
    cout<<"Total Marks in Physics: "; cin>> phyTotal;
    cout<<"Obtained Marks in Chemistry: "; cin>>che;
    cout<<"Total Marks in Chemistry: "; cin>> cheTotal;
    cout<<"Obtained Marks in English: "; cin>>eng;
    cout<<"Total Marks in English: "; cin>> engTotal;
    cout<<"Obtained Marks in Entry Test: "; cin>> entryTestObtained;
    cout<<"Total Marks in Entry Test: "; cin>> entryTestTotal;
    float obtainedMarks, totalMarks;
    obtainedMarks = math + phy + che + eng, totalMarks= mathTotal+phyTotal+cheTotal+engTotal;
    float mathPercent, phyPercent, chePercent, engPercent;
    mathPercent= (math*100)/mathTotal, phyPercent= (phy*100)/phyTotal, chePercent= (che*100)/cheTotal;
    engPercent= (eng*100)/engTotal;
    float totalPercent, entryPercent, aggregatePercent;
    totalPercent= (obtainedMarks*100)/totalMarks, entryPercent= (entryTestObtained*100)/entryTestTotal;
    aggregatePercent= (totalPercent*70)/100 + (entryPercent*30)/100;

    cout<<"\nHi, "<<userName<<".Your marks details are as under:\n\n";
    cout<<"\t-------------------------------------------\n";
    cout<<"\tSubject\t  |   \tMarks\t   | \tPercentage\n";
    cout<<"\t-------------------------------------------\n";
    cout<<"\tMath\t\t"<<math<<"/"<<mathTotal<<"\t\t"<<mathPercent<<"%\n";
    cout<<"\tPhysics\t\t"<<phy<<"/"<<phyTotal<<"\t\t"<<phyPercent<<"%\n";
    cout<<"\tChemistry\t"<<che<<"/"<<cheTotal<<"\t\t"<<chePercent<<"%\n";
    cout<<"\tEnglish\t\t"<<eng<<"/"<<engTotal<<"\t\t"<<engPercent<<"%\n";
    cout<<"\t-------------------------------------------\n";
    cout<<"\tTotal:\t\t"<<obtainedMarks<<"/"<<totalMarks<<"\t\t"<<totalPercent<<"%\n";
    cout<<"\tEntry Test:\t"<<entryTestObtained<<"/"<<entryTestTotal<<"\t\t"<<entryPercent<<"%\n";
    cout<<"\tAggregate:\t\t\t"<<aggregatePercent<<"%\n";

return 0;
}