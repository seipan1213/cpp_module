#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>
#include <stdexcept>

template <typename T>
class Array
{
private:
	size_t len;
	T *array;

public:
	Array() : len(0), array(new T[0]) {}

	Array(unsigned int len) : len(len), array(new T[len]) {}

	Array(const Array &other) : len(other.len), array(new T[other.len])
	{
		for (size_t i = 0; i < other.len; i++)
		{
			this->array[i] = other.array[i];
		}
	}

	~Array()
	{
		delete[] this->array;
	}

	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			delete[] array;
			this->array = new T[other.len];
			for (size_t i = 0; i < other.len; i++)
			{
				this->array[i] = other.array[i];
			}
		}
		return *this;
	}

	T &operator[](size_t i)
	{
		return this->at(i);
	}

	const T &operator[](size_t i) const
	{
		return this->at(i);
	}

	T &at(size_t i)
	{
		if (i >= this->len)
		{
			throw std::out_of_range("out of range");
		}
		return this->array[i];
	}

	const T &at(size_t i) const
	{
		if (i >= this->len)
		{
			throw std::out_of_range("out of range");
		}
		return this->array[i];
	}

	size_t size() const
	{
		return this->len;
	}
};
#endif