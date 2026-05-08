#pragma once
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
struct Node // структура дл€ опису одного вузла однозв. списку
{
	T data;
	Node* next;
	Node(const T& data = T(), Node* next = nullptr)
		:data{ data }, next{next}
	{}
};

template <typename T>
class FwdList
{
public:
	FwdList() = default;
	FwdList(Node<T>* head)
		:head{ head } {
	}
	void addHead(const T& data);
	void addTail(const T& data);
	void print() const;
	void removeHead();
	bool isEmpty() const;
	Node<T>* operator+(const FwdList& other) const;
private:
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;
	size_t size = 0;
};

template<typename T>
inline void FwdList<T>::addHead(const T& data)
{
	/*Node<T>**/auto tmp = new Node<T>(data, head);
	head = tmp;
	if (isEmpty())
		tail = tmp;
	++size;
}

template<typename T>
inline void FwdList<T>::addTail(const T& data)
{
	auto tmp = new Node<T>(data);
	++size;
	if (isEmpty())
	{
		head = tail = tmp;
		return;
	}
	tail->next = tmp;
	tail = tmp;
}

template<typename T>
inline void FwdList<T>::print() const
{
	if (isEmpty()) {
		cout << "List is Empty" << endl;
		return;
	}
	auto tmp = head; //  починаЇмо з початку списка
	cout << "List :: \t";
	while (tmp != nullptr) // працюЇ доки не д≥йшли до к≥нц€ списку
	{
		cout << tmp->data << "\t"; // вивели д≥н≥ з вузла
		tmp = tmp->next; // перейшли на наступний вузол
	}
	cout << endl;

}

template<typename T>
inline void FwdList<T>::removeHead()
{
	if (isEmpty())
		return;
	auto tmp = head; // запам€тали старий head
	head = tmp->next; // перем≥стили head на наступний елемент (можливо стане nullptr)
	--size;
	delete tmp;
	if (isEmpty()) // €кщо список став порожн≥м, то виправл€Їмо вказ≥вник tail;
		tail = nullptr;
}

template<typename T>
inline bool FwdList<T>::isEmpty() const
{
	return head == nullptr;
	//return size == 0;
}

template<typename T>
inline Node<T>* FwdList<T>::operator+(const FwdList& other) const
{
	FwdList<T> newFwList;
	auto tmp = this->head;
	while (tmp != nullptr) {
		newFwList.addTail(tmp->data);
		tmp = tmp->next;
	}

	tmp = other.head;
	while (tmp != nullptr) {
		newFwList.addTail(tmp->data);
		tmp = tmp->next;
	}
	return newFwList.head;
}
