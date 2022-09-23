#include <stdio.h>
#include <stdlib.h>

float calculateTotalPriceAerolineas(float KM, float priceAerolineas) {

	float priceTotal;
	priceTotal = KM * priceAerolineas;
	return priceTotal;
}

float calculateDebitPriceAerolineas(float priceAerolineas, float KM) {

	float price = 0;
	float debitPrice = 0;

	price = calculateTotalPriceAerolineas(KM, priceAerolineas);

	debitPrice = price - (price * 0.1);

	return debitPrice;
}

float calculateTotalPriceLatam(float KM, float priceLatam) {

	float priceTotal;
	priceTotal = KM * priceLatam;
	return priceTotal;
}

float calculateDebitPriceLatam(float priceLatam, float KM) {

	float price = 0;
	float debitPrice = 0;

	price = calculateTotalPriceLatam(KM, priceLatam);

	debitPrice = price - (price * 0.1);

	return debitPrice;
}

