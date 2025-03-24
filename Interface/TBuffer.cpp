#include "TBuffer.h"
TBuffer* buf;

void TBuffer::setVar1(int numb, int pos) {
	move(pos);
	buf[pos - 1] = 1;
	if (numb == 1) score1++;
	else score2++;
}
void TBuffer::setVar2(int numb, int pos) {
	move(pos);
	buf[pos - 1] = 0;
	if (numb == 1) score1--;
	else score2--;
}
void TBuffer::setVar3(int numb, int pos) {
	move(pos);
	buf[pos - 1] = 1;
	if (numb == 1) score1--;
	else score2--;
}
void TBuffer::setVar4(int numb, int pos) {
	move(pos);
	buf[pos - 1] = 0;
	if (numb == 1) score1++;
	else score2++;
}
void TBuffer::move(int pos) {
	for (int i = pos; i < 24; i++) {
		buf[i] = buf[i + 1];
	}
}