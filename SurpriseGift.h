#ifndef SURPRISEGIFT_H
#define SURPRISEGIFT_H
#include <iostream>
#include <string>

using namespace std;
template<typename T>
class SurpriseGift
{
private:
	T coupon, toys, none;
	T cashback, giftcard;
public:
	SurpriseGift();
	SurpriseGift(T coupon, T toys, T cashBack, T giftCard);

	T getCoupon();
	void setCoupon(T c);
	T getToys();
	void setToys(T t);
	T getCashback();
	void setCashback(T cb);
	T getGiftcard();
	void setGiftcard(T gc);

	friend ostream& operator<<(ostream& o, const SurpriseGift<T>& c);
	friend istream& operator>>(istream& i, SurpriseGift<T>& c);
};

#endif