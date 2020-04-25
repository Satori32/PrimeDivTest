#pragma once
#include <vector>


template<class T>
class PrimeDivTest {
public:
	PrimeDivTest() {
		Clear();
	}

	bool Clear() {
		Primes.clear();
		Count = 2;
		//Primes.push_back(2);
		return true;
	}

	std::size_t Size() const{
		return Primes.size();
	}

	bool Search(const T& In) {
		for (Count; Count <= In; Count++) {
			bool F = true;
			for (auto& o : Primes) {
				if (Count % o==0) {
					F = false;
					break;
				}
			}
			if (F) {
				Primes.push_back(Count);
			}
		}

		return true;
	}

	const T& operator[](std::size_t Idx) const{
		return Primes[Idx];
	}

	typename std::vector<T>::const_iterator begin() {
		return Primes.cbegin();
	}
	typename std::vector<T>::const_iterator end() {
		return Primes.cend();
	}
protected:
	std::vector<T> Primes;
	T Count=2;
};