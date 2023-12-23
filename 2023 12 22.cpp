//#include <iostream>
//
//using namespace std;
//
////                                Задача на поиск в ширину
//
//
//int main()
//{  
//                                    День зананий
//	int n, k;
//	cin >> n >> k;
//	int* arr = new int[n];
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//
//	int* arr1 = new int[n];
//	int* arr2 = new int[n];
//	int* arr3 = new int[n];
//	for (int i = 0; i < n; i++) cin >> arr[i];
//	
//	Sort_Up(arr1, n);
//	for (int i = 0; i < n; i++)
//	{
//		arr3[i] = arr1[n - i - 1];
//	}
//	int k1 = Cump_Arr(arr1, arr2, n); //Up
//	int k2 = Cump_Arr(arr1, arr3, n); //Down
//
//	return 0;
//}



// Создать структуру типа стек
// и методы стека


#include <iostream>
#include <fstream>
using namespace std;

// stack на связаном списке
// После него становятся доступны задачи "Моно билиард" "Построение инфиксного и посфиксноговыражения"

// Реализоват очередь с помощью двух стеков
struct  Node
{
	int num;
	Node* prev;
	Node(int num) { this->num = num; this->prev = nullptr; };
	Node() {};
};

struct Stack
{
	Node* top;
	bool Emtpty() { return top == nullptr; }
	int Top() { return top->num; }
	void Push(int k) 
	{
		Node* prev = new Node(k);
		prev->prev = top;
		top = prev;
	}
	int Pop()
	{
		Node* temp = top;
		int k = top->num;
		top = top->prev;
		delete temp;
		return k;
	}
	
};

int main()
{
	ifstream input("stack.txt");

	Stack stack;
	stack.top = nullptr;
	int k;
	while (input >> k)
	{
		stack.Push(k);
	}

	while (!stack.Emtpty())
	{
		cout << stack.Pop() << " ";
	}

	return 0;
}