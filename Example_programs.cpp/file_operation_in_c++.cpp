#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char c,fname[20];
    ofstream f;
    cout<<"enter the file name:"<<endl;
    cin>>fname;
    f.open(fname);
    if(!f)
    {
        cout<<"File open failed"<<endl;
        return 1;
    }
    while((c = getchar())!='#')
    {
        f<<c;
    }

    f.close();

    ifstream f1;
    f1.open(fname);

    if(!f1)
    {
        cout<<"File 1 OPEN failed "<<endl;
        return 1;
    }

    while(f1.get(c))
    {
        cout<<c;
    }

    f.close();
    
}