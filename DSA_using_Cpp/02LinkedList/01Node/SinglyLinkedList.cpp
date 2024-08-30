#include<iostream>






class node
{
	private:
		int data;
		node *next;
	
	public:

		explicit node(const int data=0, node *next = nullptr) : data(data) , next(next) {};
		// node(const node &other) : data(other.data) , next(other.next) {};

		int getData()
		{
			return data;
		}
		node* getNext()
		{
			return next;
		}

		void setData(int data)
		{
			this->data = data;
		}
		void setNode(node *tempNode)
		{
			this->next = tempNode;
		}

		void create(int n)
		{
			node *lastNode = this;

			for(unsigned i=2; i<=n; ++i)
			{
				lastNode->next = new node();
				lastNode = lastNode->next;
			}
		}

		void fill()
		{
			node *tempNode = this;
			while(tempNode)	
			{
				std::cout << "Enter Data : ";
				std::cin >> tempNode->data;
				tempNode = tempNode->next;
			}
		}

		void print()
		{
			node *tempNode = this;
			while(tempNode)
			{
				std::cout << tempNode->data << " ";
				tempNode = tempNode->next;
			}
		}


		void free()
		{
			node *f = this;
			node *temp = f;
			while(temp)
			{
				temp = f;
				f = f->next;
				delete temp;
			}
		}


		~node() 
		{
		}

};



int main()
{
	node *Head = new node();

	int n=3;

	Head->create(n);
	Head->fill();
	Head->print();
	// Head->free();

	return 0;
}