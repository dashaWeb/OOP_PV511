#pragma once
class String
{
public:
	String();
	String(const size_t& size);
	String(const char* str);
	String(const String& other);
	~String();

	void operator=(const String& other);

	void input();
	void print() const;

	char* concat(const char* str);
	char* intersect(const char* str);

	static size_t getCounter();
	static int compare(const String& str1, const String& str2);
	static void sort(String* lines);
private:
	char* str = nullptr;
	size_t size = 0;
	static size_t counter;

	void copyStr(char*& dest, const char* source);
};

