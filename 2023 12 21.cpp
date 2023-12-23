//#include <iostream>
//
//using namespace std;
//
//struct Node {
//	int num;
//	Node* next;
//	Node(int n) {
//		num = n;
//		next = nullptr;
//	}
//	Node() {};
//};
//
//
//int main()
//{
//	int n = 0, k = 0;
//	cin >> n >> k;
//	Node* root = new Node(1);
//	Node* cur = root;
//	for (int i = 2; i <= n; i++)
//	{
//		Node* next = new Node(i);
//		cur->next = next;
//		cur = next;
//		
//	}
//	cur->next = root;
//	//Node* root = new Node;
//
//	/*root->num = 1;
//	root->prev = nullptr;
//
//	Node* next = new Node;
//	next->num = 2;
//	next->prev = nullptr;
//	root->prev = next;*/
//
//	Node* first = root;
//	Node* second = root->next;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k-1; j++)
//		{
//			first = first->next;
//
//		}
//		cout << root->num << " ";
//		
//		second = root->next;
//		root = second->next;
//		//root = root->next;
//	}
//	//cout << root->num << endl;
//
//	return 0;
//}