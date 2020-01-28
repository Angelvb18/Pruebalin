#include<iostream>
using namespace std;
int main()
{
  int nota = 0;
  int aprobadas=0;
  while(true)
  {
    cout <<"NOta: ";
    cin >>nota;
    cout<<"===>"<<!nota<<"<====";
    if(!nota)
	    break;
    nota >= 60? ++aprobadas : --aprobadas;
  }
  cout <<"Aprobados="<<aprobadas<<endl;
  
}
