#pragma once
template <class T>
class Calculatrice
{
public:
	Calculatrice(T n1, T n2);
	T addition();
	T soustraction();
	T multiplication();
	T division();
	void afficherResultats();
	

private:
	T num1;
	T num2;
};

template<class T>
inline Calculatrice<T>::Calculatrice(T n1, T n2)
{
	num1 = n1;
	num2 = n2;
}

template<class T>
inline T Calculatrice<T>::addition()
{
	T t;
	t = num1 + num2;
	return T(t);
}

template<class T>
inline T Calculatrice<T>::soustraction()
{
	T t;
	t = num1 - num2;
	return T(t);
}

template<class T>
inline T Calculatrice<T>::multiplication()
{
	T t;
	t = num1* num2;
	return T(t);
}

template<class T>
inline T Calculatrice<T>::division()
{
	T t;
	t = num1 / num2;
	return T(t);
}

template<class T>
inline void Calculatrice<T>::afficherResultats()
{
	std::cout << "addition : " << addition() << std::endl;
	std::cout << "soustraction : " << soustraction() << std::endl;
	std::cout << "multiplication : " << multiplication() << std::endl;
	std::cout << "division : " << division() << std::endl;
}
