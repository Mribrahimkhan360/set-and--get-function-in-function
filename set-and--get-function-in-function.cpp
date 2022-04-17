#include <iostream>

using namespace std;

class book
{
    public:
    int page_no;
    string book_name;
    string writer_name;

    void display()
    {
            cout<<page_no<<endl;
            cout<<book_name<<endl;
            cout<<writer_name<<endl;
    }

    void set_value(int page,string b_name,string w_name)
    {
       page_no= page;
       book_name= b_name;
       writer_name= w_name;
            cout<<page_no<<endl;
            cout<<book_name<<endl;
            cout<<writer_name<<endl;
    }
};

int main()
{

    book B4;
    B4.set_value(300,"K Tmi Rupmoti","Manik Islam");

return 0;
}
