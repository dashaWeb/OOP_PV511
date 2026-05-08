#pragma once
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
struct Node
{
	T data;
	Node* next, * prev;
	Node(const T& data = T(), Node* prev = nullptr, Node* next = nullptr)
		:data(data),prev(prev), next(next)
	{}
};

template<typename T>
class List
{
public:
	List() = default;
	void addHead(const T& data);
	void addTail(const T& data);
	void removeHead();
	void removeTail();

	bool isEmpty() const;
	void print() const;
	void printR() const;

	void removeData(const T& data);
private:
	Node<T>* findNode(const T& data);
	Node<T>* head = nullptr, * tail = nullptr;
	size_t size = 0;
};

template<typename T>
inline void List<T>::addHead(const T& data)
{
	auto tmp = new Node<T>(data,nullptr,head);
	if (isEmpty())
		tail = tmp;
	else
		head->prev = tmp;

	head = tmp;
	++size;
}

template<typename T>
inline void List<T>::addTail(const T& data)
{
	auto tmp = new Node<T>(data, tail);
	if (isEmpty())
		head = tmp;
	else
		tail->next = tmp;

	tail = tmp;
	++size;
}

template<typename T>
inline void List<T>::removeHead()
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	--size;

	auto tmp = head;
	head = head->next;
	delete tmp;
	if (isEmpty())
		tail = nullptr;
	else
		head->prev = nullptr;

}

template<typename T>
inline void List<T>::removeTail()
{
}

template<typename T>
inline bool List<T>::isEmpty() const
{
	return head == nullptr;
}

template<typename T>
inline void List<T>::print() const
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	auto tmp = head;
	cout << "List in direct :: \t";
	while (tmp != nullptr)
	{
		cout << tmp->data << "\t";
		tmp = tmp->next;
	}
	cout << endl;
}

template<typename T>
inline void List<T>::printR() const
{
	if (isEmpty())
	{
		cout << "List is empty" << endl;
		return;
	}
	auto tmp = tail;
	cout << "List in reverse :: \t";
	while (tmp != nullptr)
	{
		cout << tmp->data << "\t";
		tmp = tmp->prev;
	}
	cout << endl;
}

template<typename T>
inline void List<T>::removeData(const T& data)
{
	auto find = findNode(data);
	if (find == nullptr)
		return;
	if (find == head) {
		removeHead();
		return;
	}
	if (find == tail)
	{
		removeTail();
		return;
	}

	find->prev->next = find->next;
	find->next->prev = find->prev;
	delete find;
	--size;
}

template<typename T>
inline Node<T>* List<T>::findNode(const T& data)
{
	auto tmp = head;
	while (tmp != nullptr && tmp->data != data)
	{
		tmp = tmp->next;
	}
	return tmp;
}
