#include<iostream>

using namespace std;

int main()
{
    int *n = new int;
    *n = 10;
    //int *n = new int(15);  //direct assigning value to n
    cout<<*n<<endl;

    delete n;

    return 0;

}

/*
//Character pointer
int main()
{
    char *cptr = new char('H');
    cout<<"character  = "<<*cptr<<endl;

    delete cptr;
}
*/