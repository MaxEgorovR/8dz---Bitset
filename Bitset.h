#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bitset {
public:
	vector<bool> bits;

	Bitset(){}

	Bitset(int length)
	{
		for (int i = 0;i < length;i++) {
			bits.push_back(false);
		}
	}

	Bitset(vector<bool> bits)
	{
		this->bits = bits;
	}

	vector<bool> AND(vector<bool> multipl) {
		if (this->bits.size() == multipl.size()) {
			for (int i = 0;i < bits.size();i++) {
				this->bits[i] = this->bits[i] && multipl[i];
			}
			return this->bits;
		}
		else {
			cout << "You can't use operator AND with bitsets, who have different sizes";
			cout << endl;
		}
		return this->bits;
	}

	vector<bool> OR(vector<bool> sum) {
		if (this->bits.size() == sum.size()) {
			for (int i = 0;i < bits.size();i++) {
				this->bits[i] = this->bits[i] || sum[i];
			}
			return this->bits;
		}
		else {
			cout << "You can't use operator OR with bitsets, who have different sizes";

			cout << endl;
		}
		return this->bits;
	}

	vector<bool> XOR(vector<bool> sum) {
		if (this->bits.size() == sum.size()) {
			for (int i = 0;i < bits.size();i++) {
				this->bits[i] = ((this->bits[i] || sum[i]) && !(this->bits[i] && sum[i]));
			}
			return this->bits;
		}
		else {
			cout << "You can't use operator XOR with bitsets, who have different sizes";

			cout << endl;
		}
		return this->bits;
	}

	void print() {
		for (int i = 0;i < bits.size();i++) {
			cout << this->bits[i];
		}
		cout << endl;
	}

	vector<bool> L() {
		for (int i = 0;i < (this->bits.size() - 1);i++) {
			this->bits[i] = this->bits[i + 1];
		}
		this->bits[this->bits.size()-1] = false;
		return this->bits;
	}

	vector<bool> LC() {
		bool tmp = this->bits[0];
		for (int i = 0;i < (this->bits.size() - 1);i++) {
			this->bits[i] = this->bits[i + 1];
		}
		this->bits[this->bits.size()-1] = tmp;
		return this->bits;
	}

	vector<bool> L(int length) {

		for (int i = 0;i < length;i++) {
			for (int i = 0;i < (this->bits.size() - 1);i++) {
				this->bits[i] = this->bits[i + 1];
			}
			this->bits[this->bits.size() - 1] = false;
		}
		return this->bits;
	}

	vector<bool> LC(int length) {
		for (int i = 0;i < length;i++) {
			bool tmp = this->bits[0];
			for (int i = 0;i < (this->bits.size() - 1);i++) {
				this->bits[i] = this->bits[i + 1];
			}
			this->bits[this->bits.size() - 1] = tmp;
		}
		return this->bits;
	}

	vector<bool> R() {
		vector<bool> tmp = this->bits;
		for (int i = 1;i < this->bits.size();i++) {
			this->bits[i] = tmp[i-1];
		}
		this->bits[0] = false;
		return this->bits;
	}

	vector<bool> RC() {
		vector<bool> tmp1 = this->bits;
		bool tmp = this->bits[this->bits.size() - 1];
		for (int i = 1;i < this->bits.size();i++) {
			this->bits[i] = tmp1[i - 1];
		}
		this->bits[0] = tmp;

		return this->bits;
	}

	vector<bool> R(int length) {
		for (int i = 0;i < length;i++) {
			vector<bool> tmp = this->bits;
			for (int i = 1;i < this->bits.size();i++) {
				this->bits[i] = tmp[i - 1];
			}
			this->bits[0] = false;
		}
		return this->bits;
	}

	vector<bool> RC(int length) {

		for (int i = 0;i < length;i++) {
			vector<bool> tmp1 = this->bits;
			bool tmp = this->bits[this->bits.size() - 1];
			for (int i = 1;i < this->bits.size();i++) {
				this->bits[i] = tmp1[i - 1];
			}
			this->bits[0] = tmp;
		}
		return this->bits;
	}
};

