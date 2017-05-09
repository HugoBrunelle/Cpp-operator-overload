// Copyright 2017 <Hugo Brunelle>

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction
{
  double m_numerator;
  double m_denominator;
  double m_value;

 public:
  explicit Fraction(int num, int den = 1);
  void show(std::ostream& os) const;
  
  bool Equal(Fraction const& a) const;
  bool lowerThan(Fraction const& a) const;
  bool greaterThan(Fraction const& a) const;
  bool lowerEqualThan(Fraction const& a) const;
  bool greaterEqualThan(Fraction const& a) const;

  Fraction plus(Fraction const& a) const;
  Fraction minus(Fraction const& a) const;
  Fraction divide(Fraction const& a) const;
  Fraction multiply(Fraction const& a) const;

  // Raccourci arithmetique
  Fraction& operator+=(Fraction const& a);
  Fraction& operator-=(Fraction const& a);
  Fraction& operator*=(Fraction const& a);
  Fraction& operator/=(Fraction const& a);
};

// Surcharge operateur arithmetique
Fraction operator+(Fraction const& a, Fraction const& b);
Fraction operator-(Fraction const& a, Fraction const& b);
Fraction operator*(Fraction const& a, Fraction const& b);
Fraction operator/(Fraction const& a, Fraction const& b);

// Surcharge operateur de comparaison
bool operator<(Fraction const& a, Fraction const& b);
bool operator<=(Fraction const& a, Fraction const& b);
bool operator>(Fraction const& a, Fraction const& b);
bool operator>=(Fraction const& a, Fraction const& b);
bool operator==(Fraction const& a, Fraction const& b);
bool operator!=(Fraction const& a, Fraction const& b);

// Surcharge operateur de flux
std::ostream& operator<<(std::ostream& os, Fraction const& fraction);

#endif  // FRACTION_H
