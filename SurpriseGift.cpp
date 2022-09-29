#include "SurpriseGift.h"
#include <iostream>
#include <string>
using namespace std;
template<typename T>
SurpriseGift<T>::SurpriseGift()
{
	coupon = false;
	toys = false;
	cashback = false;
	giftcard = false;
}
template<typename T>
SurpriseGift<T>::SurpriseGift(T coupon, T toys, T cashBack, T giftCard)
{
	this->coupon = coupon;
	this->toys = toys;
	this->cashback = cashBack;
	this->giftcard = giftCard;
}
template<typename T>
T SurpriseGift<T>::getCoupon()
{
	return this->coupon;
}
template<typename T>
void SurpriseGift<T>::setCoupon(T c)
{
	if (c == true ) { // < 325
		coupon = true;
		cout << "You get a 25% off for your next purchase.\n";
	}
}
template<typename T>
T SurpriseGift<T>::getToys()
{
	return this->toys;
}
template<typename T>
void SurpriseGift<T>::setToys(T t)
{
	if (t == true) { //> 325 && t < 360
		toys = true;
		cout << "You get a random action figure.\n";
	}
}
template<typename T>
T SurpriseGift<T>::getCashback()
{
	return this->cashback;
}
template<typename T>
void SurpriseGift<T>::setCashback(T cb)
{
	if (cb == true ) {//> 360 && cb < 400
		cashback = true;
		cout << "You get a 35% cashback for the next purchase.\n";
	}
}
template<typename T>
T SurpriseGift<T>::getGiftcard()
{
	return this->giftcard;
}
template<typename T>
void SurpriseGift<T>::setGiftcard(T gc)
{
	if (gc == true) {
		giftcard = true;
		cout << "You get a $50 giftcard for the next purchase.\n";
	}
}
template<typename T>
ostream& operator<<(ostream& o, const SurpriseGift<T>& c)
{
	if (c.getCashback() == true) {
		o << "You get a 35% cashback for the next purchase.\n" << endl;
	}
	else if (c.getCoupon() == true) {
		o << "You get a 25% off for your next purchase.\n" << endl;
	}
	else if (c.getGiftcard() == true) {
		o << "You get a $50 giftcard for the next purchase.\n" << endl;
	}
	else if (c.getToys() == true) {
		o << "You get a random action figure.\n" << endl;
	}
	return o;
}
template<typename T>
istream& operator>>(istream& i, SurpriseGift<T>& c)
{
	i >> c.none;
	return i;
}
