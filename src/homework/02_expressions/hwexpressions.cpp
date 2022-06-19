#include <iostream>
#include "expressions.h"

//write function code here

double get_sales_tax_amount(double meal_amount)
{
	double tax_rate = 0.0675;
	return tax_rate * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}
