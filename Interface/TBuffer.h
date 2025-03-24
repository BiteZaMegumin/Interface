#pragma once
#include "random";

class TBuffer
{
private:
	int buf[25], score1 = 0, score2 = 0;
public:
	TBuffer() {
		int range = rand() % 10;
		for (int i = 0; i < 25 - range; i++) buf[i] = rand() % 2;
	}
	int getNumber(int pos) {
		return buf[pos];
	}
	void setNumber(int numb, int pos) {
		buf[pos] = numb;
	}
	void setScore1(int numb) {
		score1 = numb;
	}
	void setScore2(int numb) {
		score1 = numb;
	}
	int getScore1() {
		return score1;
	}
	int getScore2() {
		return score2;
	}
	void setVar1(int numb, int pos);
	void setVar2(int numb, int pos);
	void setVar3(int numb, int pos);
	void setVar4(int numb, int pos);
	void move(int pos);
};
extern TBuffer* buf;
