#include "sorv.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Sorv sample1;
	double u,i,o;
	cin>>u>>i>>o;
	sample1.setdate(u,i,o);
	sample1.print(); 
	return 0;
}
