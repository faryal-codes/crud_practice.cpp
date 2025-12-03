#include <iostream>
using namespace std;
int i;

//Add new number
void add(int a[])
{
	cout<<"Enter the number you want to add : ";
	cin>>a[i];
	i++;
	cout<<"Added successfully!"<<endl;
}

//Exit 
void exit(int a[])
{
	
}

//Search any number 
void search(int a[])
{
	int n;
	cout<<"Enter the number you want to search : ";
	cin>>n;
	for(int j=0 ;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<"Your search value is : "<<a[j]<<endl;
		}
	}
	
}

// Update any number 
void update(int a[])
{
	int n;
	cout<<"Enter the number you want to update : ";
	cin>>n;
	for(int j=0 ;j<i;j++)
	{
		if(n==a[j])
		{
			cout<<"Your new value is : ";
			cin>>a[j];
		}
	}
	cout<<endl;
	
}

//Delete any number
void del(int a[])
{
    int n;
    cout << "Enter the number you want to delete : ";
    cin >> n;

    for (int j = 0; j < i; j++)
    {
        if (a[j] == n)
        {
            // shift elements to left
            for (int k = j; k < i; k++)
            {
                a[k] = a[k + 1];
            }
            i--;            // reduce size after deletion
            cout << "Deleted successfully!\n";
            return;        // stop after deleting once
        }
    }
    
    cout << "Number not found!\n"; 
}

//Showw all numbers
void show(int a[])
{

	for(int j=0 ;j<i;j++)
	{
		cout<<"\n"<<a[j];
	}
}
int main()
{

	int choice ,a[20];
	cout<<"---Menu---"<<endl;
	cout<<"1. Add "<<endl;
	cout<<"2. search "<<endl;
	cout<<"3. delete "<<endl;
	cout<<"4. update "<<endl;
	cout<<"5. show "<<endl;
	cout<<"6. exit "<<endl;
	p:
    cout<<"\n"<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
    	case 1:{
    		add(a);
			break;
		}
		case 2:{
			search(a);
				break;
			}
		case 3:{
			del(a);
			break;
		}
		case 4:{
			update(a);
			break;
		}
		case 5:{
			show(a);
				break;
			}
		case 6:{
			exit(0);
			break;
		}
		default:{
			cout<<"Invalid value --- try again. ";
			break;
		}
	}
	goto p;
}


