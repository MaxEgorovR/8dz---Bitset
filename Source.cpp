#include "Bitset.h"
using namespace std;

int main() {
	Bitset *bs = new Bitset(4);
	vector<bool> tmp{ true, false, true, false };
	vector<bool> tmp1{ true, false, true, false, false};

	vector<bool> tmp2{ true, false, true, true };
	bs->print();

	bs->OR(tmp);
	bs->print();
	bs->OR(tmp1);

	bs->XOR(tmp2);
	bs->print();
	bs->XOR(tmp1);

	bs->AND(tmp);
	bs->print();
	bs->OR(tmp);
	bs->AND(tmp);
	bs->print();
	bs->AND(tmp1);

	bs->LC();
	bs->print();

	bs->L();
	bs->print();


	bs->R();
	bs->print();

	bs->RC();
	bs->print();

	bs->LC(4);
	bs->print();




	bs->RC(4);
	bs->print();
 }