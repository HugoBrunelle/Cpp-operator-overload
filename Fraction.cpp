// Copyright 2017 <Hugo Brunelle>

#include <iostream>
#include "Fraction.h"

// =================== Constructor ===================

Fraction::Fraction(int num, int den) {
  m_numerator = num;
  m_denominator = den;
  m_value = num / den;
}

// ===================== Methods =====================

void Fraction::show(std::ostream& os) const {
  if (m_denominator == 1) {
    os << m_numerator;
  } else {
    os << m_numerator << "/" << m_denominator;
  }
}

bool Fraction::Equal(Fraction const& a) const {
  return m_value == a.m_value ? true : false;
}

bool Fraction::lowerThan(Fraction const& a) const {
  return m_value < a.m_value ? true : false;
}

bool Fraction::greaterThan(Fraction const& a) const {
  return m_value > a.m_value ? true : false;
}

bool Fraction::lowerEqualThan(Fraction const& a) const {
  return m_value <= a.m_value ? true : false;
}

bool Fraction::greaterEqualThan(Fraction const& a) const {
  return m_value >= a.m_value ? true : false;
}

Fraction Fraction::plus(Fraction const& a) const {
  return Fraction((m_numerator * a.m_denominator)+
		  (a.m_numerator * m_denominator),
		  (m_denominator * a.m_denominator));
}

Fraction Fraction::minus(Fraction const& a) const {
  return Fraction((m_numerator * a.m_denominator)-
		  (a.m_numerator * m_denominator),
		  (m_denominator * a.m_denominator));
}

Fraction Fraction::divide(Fraction const& a) const {
  return Fraction((m_numerator * a.m_denominator),
		  (m_denominator * a.m_numerator));
}

Fraction Fraction::multiply(Fraction const& a) const {
  return Fraction((m_numerator * a.m_numerator),
		  (m_denominator * a.m_denominator));
}

Fraction& Fraction::operator+=(Fraction const& a) {
  m_numerator = (m_numerator * a.m_denominator)+
                (a.m_numerator * m_denominator);
  m_denominator *= a.m_denominator;
  
  return *this;
}

Fraction& Fraction::operator-=(Fraction const& a) {
  m_numerator = (m_numerator * a.m_denominator)-
                (a.m_numerator * m_denominator);
  m_denominator *= a.m_denominator;
  
  return *this;
}

Fraction& Fraction::operator*=(Fraction const& a) {
  m_numerator *= a.m_numerator;
  m_denominator *= a.m_denominator;
  
  return *this;
}

Fraction& Fraction::operator/=(Fraction const& a) {
  m_numerator *= a.m_denominator;
  m_denominator *= a.m_denominator;
  
  return *this;
}

// ============  Arithmetic operator overload ============

Fraction operator+(Fraction const& a, Fraction const& b) {
  return a.plus(b);
}

Fraction operator-(Fraction const& a, Fraction const& b) {
  return a.minus(b);
}

Fraction operator*(Fraction const& a, Fraction const& b) {
  return a.multiply(b);
}

Fraction operator/(Fraction const& a, Fraction const& b) {
  return a.divide(b);
}

// =============== Logic operator overload ===============

bool operator<(Fraction const& a, Fraction const& b) {
  return a.lowerThan(b);
}

bool operator>(Fraction const& a, Fraction const& b) {
  return a.greaterThan(b);
}

bool operator<=(Fraction const& a, Fraction const& b) {
  return a.lowerEqualThan(b);
}

bool operator>=(Fraction const& a, Fraction const& b) {
  return a.greaterEqualThan(b);
}

bool operator==(Fraction const& a, Fraction const& b) {
  return a.Equal(b);
}

bool operator!=(Fraction const& a, Fraction const& b) {
  return !a.Equal(b);
}

// ============== Stream operator overload ===============

std::ostream& operator<<(std::ostream& os, Fraction const& fraction) {
  fraction.show(os);
  return os;
}
