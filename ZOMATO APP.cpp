# include "csv.hpp"
#include <iostream> 
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <time.h>
#include<ctype.h>                                   
#include <iostream>
#include<fstream>
#include<string>
#include <sstream>
#include <algorithm>
#include<vector>
using namespace csv;
using namespace std;
class HASHING;







//========================================================HASHING CLASS WITH FUNCTIONS============================================
	
class HASHING
{
    private:
 		string admin_pwd,temp_pwd;
 		string inp1,inp2;
 		int key ;
 		char ch;
    public:
        HASHING();
        void HASH_PASSWORD();
        int DEHASH();
        void WFile();
        int login();
      
};

	HASHING::HASHING():key(3),admin_pwd("")
	{    
	}
	
	int HASHING:: login() {
		system("color 6");
		while(1){
			admin_pwd="";
			string  logo=" ZOMATO - Never have a bad meal ";
			int i=0,j;
			cout<<"\n\t\t";
			for(j=0;j<17;j++)
			{
				Sleep(50);
				cout<<" \xB2";
			}
			for(j=0;j<logo.size();j++)
			{
				Sleep(50);
				cout<<logo[j];
			}
			for(j=0;j<17;j++)
			{
				Sleep(50);
				cout<<" \xB2";
			}
			
			cout<<"\n\n\n\t\t\t\tEnter Password:";
			while(ch!=13)
			{
				ch=getch();
				if(ch!=13 && ch!=8){
				putch('*');
				admin_pwd = admin_pwd + ch;
			}	
			}
				cout<<"\n\n\n\t\t\t\tVERIFYING";
			for(int i=0;i<8;i++){
				cout<<".";
				Sleep(300);
			}
				cout<<endl;
				temp_pwd=admin_pwd;
				int operation = DEHASH();
				int choice;
			if(!operation){
				cout<<"\n\n\n\t\t\t\tDEAR USER YOU PASSWORD DOESN'T MATCH\n\n\n\t\t\t\tPress 2 to Re-Enter password: \n\n\n\t\t\t\tPress 3 to Sign-up: \n\n\n\n\t\t\t\tChoice: ";
				cin>>choice;
			}
			else{
				choice = 1;
			}
			switch(choice)
		    {
		    	case 1:{
		    		return 1;
					break;
				}
		        case 3:{
		        	admin_pwd="";
		    		cout<<"\n\n\n\t\t\t\tEnter Password:";
					while(ch!=13)
					{
						ch=getch();
						if(ch!=13 && ch!=8){
						putch('*');
						admin_pwd = admin_pwd + ch;
					}	
					}
					cout<<"\n\n\n\t\t\t\tVERIFYING";
					for(int i=0;i<8;i++){
						cout<<".";
						Sleep(300);
					}
					inp1="C:\\Users\\sumsa\\Desktop\\rsa\\DECRYPTED_PASSWORDS.txt";    
				    ifstream input1;  
					input1.open(inp1);  
					
					while(!input1.eof()){
				    	input1  >> temp_pwd;
						if(admin_pwd==temp_pwd){
							cout<<"\n\n\n\t\t\t\tDEAR USER YOUR RECORD ALREADY EXISTS \n\n\n\t\t\t\tPROCEDING TO MENU ";
							for(int i=0;i<8;i++){
							cout<<".";
							Sleep(300);
						}
							return 1;
						}
					}
					input1.close();		
					
					ofstream PFile;
					PFile.open("C:\\Users\\sumsa\\Desktop\\rsa\\DECRYPTED_PASSWORDS.txt", ios::app);
				    PFile <<admin_pwd<<endl ;
				    PFile.close();
					HASH_PASSWORD();
					return 1;}
				
				break;
		        case 2:
		        	system("cls");
		            continue;
			}
		        
		}
		}
	void HASHING::HASH_PASSWORD()
	{
	//	inp1="C:\\Users\\sumsa\\Desktop\\rsa\\DECRYPTED_PASSWORDS.txt";    
	//    ifstream input;   
	//	input.open(inp1);  	
	//    while(!input.eof()){
	//	input >> admin_pwd;
		for (int i=0; i < admin_pwd.size(); i++){
			ch = admin_pwd[i];
			if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
				admin_pwd[i] = ch;
			}
			else if(ch >= 'A' && ch <= 'Z'){
				ch = ch + key;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
				admin_pwd[i] = ch;
			}
			}
		  	  WFile();
		      admin_pwd="";
		      cout<<endl;
	}
	
	int HASHING::DEHASH()
	{	
		inp1="C:\\Users\\sumsa\\Desktop\\rsa\\PASSWORDS.txt";    
	    ifstream input1;  
		input1.open(inp1);  
		bool flag=0;
		while(!input1.eof()){
	    	input1  >> admin_pwd;
	    for (int i=0; i < admin_pwd.size(); i++){
	   		 ch = admin_pwd[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
		if(ch < 'a'){
			ch = ch + 'z' - 'a' + 1;
		}
		admin_pwd[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
		if(ch > 'a'){
			ch = ch + 'Z' - 'A' + 1;
		}
			admin_pwd[i] = ch;
		}
	}
		if(admin_pwd==temp_pwd){
			flag = 1;
		}
	}
		return flag;
		
	}
	
	void HASHING::WFile()
	{
	    ofstream PFile;
		PFile.open("C:\\Users\\sumsa\\Desktop\\rsa\\PASSWORDS.txt", ios::app);
	    PFile << admin_pwd <<endl;
	}
	


class avl_node {
        public:
        string cost;
        string name;
        avl_node* lchild;
        avl_node* rchild;

        	avl_node()
    	{
    		cost = "";
    		name="";
    	    lchild = NULL;
			rchild = NULL;
		} 
    	   avl_node(string cost,string name,avl_node *ptr1=0,avl_node *ptr2=0)
    	{
    		this->cost = cost;
    	    this->name= name;
			lchild = ptr1;
            rchild = ptr2;
}};


///========================================================BST=====================================

class BST
{
   
    avl_node* root;
	vector<int> cost;
	vector<string> name;
    void makeEmpty(avl_node* p)
    {
        if(p == NULL)
            return;
        makeEmpty(p->lchild);
        makeEmpty(p->rchild);
        delete p;
    }

    avl_node* insert(string x,string name, avl_node* p)
    {
        if(p == NULL)
        {
            p = new avl_node(x,name);
        }
        else if(x < p->cost)
        {
            p->lchild = insert(x,name, p->lchild);
        }
        else if(x > p->cost)
        {
            p->rchild = insert(x,name, p->rchild);     
        }
            int balancefactor = height(p->lchild) - height(p->rchild);
            if(balancefactor == 2)
            {
                if(x < p->lchild->cost)
                    p = RightRotate(p);
                else
                    p = LeftRightRotate(p);
            }
            if(balancefactor == -2)
            {
                if(x > p->rchild->cost)
                    p = LeftRotate(p);
                else
                    p = RightLeftRotate(p);
            }
        return p;
    }

    avl_node* RightRotate(avl_node* &p)
    {
        avl_node* temp = p->lchild;
        p->lchild = temp->rchild;
        temp->rchild = p;
         return temp;
    }

    avl_node* LeftRotate(avl_node* &p)
    {
        avl_node* temp = p->rchild;
        p->rchild = temp->lchild;
        temp->lchild = p;
         return temp;
    }

    avl_node* RightLeftRotate(avl_node* &p)
    {
        p->rchild = RightRotate(p->rchild);
        return LeftRotate(p);
    }

    avl_node* LeftRightRotate(avl_node* &p)
    {
        p->lchild = LeftRotate(p->lchild);
        return RightRotate(p);
    }

    avl_node* findMin(avl_node* p)
    {
        if(p == NULL)
            return NULL;
        else if(p->lchild == NULL)
            return p;
        else
            return findMin(p->lchild);
    }

    avl_node* findMax(avl_node* p)
    {
        if(p == NULL)
            return NULL;
        else if(p->rchild == NULL)
            return p;
        else
            return findMax(p->rchild);
    }

    avl_node* remove(string x, avl_node* p)
    {
        avl_node* temp;

        // Element not found
        if(p == NULL)
            return NULL;

        // Searching for element
        else if(x < p->cost)
            p->lchild = remove(x, p->lchild);
        else if(x > p->cost)
            p->rchild = remove(x, p->rchild);

        // Element found
        // With 2 children
        else if(p->lchild && p->rchild)
        {
            temp = findMin(p->rchild);
            p->cost = temp->cost;
            p->rchild = remove(p->cost, p->rchild);
        }
        // With one or zero child
        else
        {
            temp = p;
            if(p->lchild == NULL)
                p = p->rchild;
            else if(p->rchild == NULL)
                p = p->lchild;
            delete temp;
        }
        if(p == NULL)
            return p;


        // If avl_node is unbalanced
        // If lchild avl_node is deleted, rchild case
        int balancefactor=height(p->lchild) - height(p->rchild);
        if(balancefactor == 2)
        {
            // rchild rchild case
            if(height(p->lchild->lchild) - height(p->lchild->rchild) == 1)
                return LeftRotate(p);
            // rchild lchild case
            else
                return RightLeftRotate(p);
        }
        // If rchild avl_node is deleted, lchild case
        else if(balancefactor == -2)
        {
            // lchild lchild case
            if(height(p->rchild->lchild)-height(p->rchild->rchild)   == -1)
                return RightRotate(p);
            // lchild rchild case
            else
                return  LeftRightRotate(p);
        }
        return p;
    }


    int height(avl_node* root)
    {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(height(root->lchild), height(root->rchild));
    }

    int getBalance(avl_node* p)
    {
        if(p == NULL)
            return 0;
        else
            return height(p->lchild) - height(p->rchild);
    }

    void inorder(avl_node* p)
    {
        if(p == NULL)
            return;
        inorder(p->lchild);
        stringstream geek(p->cost);
	    int x = 0;
	    geek >> x;
        name.push_back(p->name);cost.push_back(x);
        inorder(p->rchild);
    }

public:
    BST()
    {
        root = NULL;
    }

    void insert(string x,string name)
    {
        root = insert(x,name, root);
    }

    void remove(string x)
    {
        root = remove(x, root);
    }

    void display()
    {
        inorder(root);
        sort(cost.begin(),cost.end());
        for(int i=0;i<cost.size();i++){
        	cout<<name[i]<<" "<<cost[i]<<endl;
		}
        cout << endl;
    }
    void display(int size)
    {
        inorder(root);
        sort(cost.begin(),cost.end());
        for(int i=(name.size()-1),j=0;j<10;i--,j++){
        	cout<<name[i]<<" "<<cost[i]<<endl;
		}
        cout << endl;
    }
};




//========================================================RESTAURANTS CLASS WITH FUNCTIONS============================================

class restaurant{
	public:
	string url,
	address,
	name,
	online_order,
	book_table,
	rating,
	votes;
	string phone,
	location,
	rest_type,
	dish_liked,
	cuisines,
	approx_cost,
	reviews_list,
	menu_item,
	type,
	city;
	
		restaurant(){
			 url=address=name=online_order=book_table=rating=votes=phone=location=rest_type=dish_liked=cuisines=approx_cost=reviews_list=menu_item=type=city="";
		}
		
		vector<restaurant> read_file_without_parser(){
			restaurant query;
			vector<restaurant> temp;
			ifstream file("C:\\Users\\sumsa\\Desktop\\fianl project dataset\\dataset.csv");
			CSVReader reader("C:\\Users\\sumsa\\Desktop\\fianl project dataset\\dataset.csv");
			char c;
			while(c!='\n'){
				c= file.get();
			}
			
		 for (auto& row: reader) 
	        {
	        	//==========URL READ==============
	        	while(file.peek()!=','){
				c= file.get();
				query.url=query.url+c;}
				file.get();
				file.get();	
				
				//==========ADDRESS READ==============			
                while(file.peek()!='"'){
				c= file.get();
				query.address=query.address+c;}
				file.get();
				file.get();  
				
				//=========READ = NAME---ONLINE ORDER---BOOK-TABLE----RATING---VOTES========= 
	            getline(file, query.name, ',');
	            getline(file, query.online_order, ',');
	            getline(file, query.book_table, ',');
				getline(file, query.rating, ',');
	            getline(file, query.votes, ',');
				
				//========READ PHONE========	
	        	if(file.peek()=='"'){
	        		file.get();
	    	       while(file.peek()!='"'){
					c= file.get();
					query.phone=query.phone+c;
					}
					file.get();
					file.get();
					}
            	else 
				getline(file, query.phone, ',');
				
				//========READ LOCATION---RESTUARANT TYPE========	
				getline(file, query.location, ',');
				getline(file, query.rest_type, ',');
				
				//========READ DISHES LIKED========	
				if(file.peek()=='"'){
					file.get();
	    	       while(file.peek()!='"'){
					c= file.get();
					query.dish_liked=query.dish_liked+c;}
					file.get();
					file.get();
					}
            	else 
				getline(file, query.dish_liked, ',');
				
				//========READ CUISINES========	
	            if(file.peek()=='"'){
					file.get();
	    	       while(file.peek()!='"'){
					c= file.get();
					query.cuisines=query.cuisines+c;}
					file.get();
					file.get();
					}
            	else 
				getline(file, query.cuisines, ',');
				
				//========READ APPROXSIMATE COST(2 PEOPLE)========	
				getline(file, query.approx_cost, ',');
								
				//=========READ= REVIEWS---ITEMS ---TYPE---CITY========= 
  				query.reviews_list=row["reviews_list"].get<string>();				
			    query.menu_item=row["menu_item"].get<string>();
				query.type=row["listed_in(type)"].get<string>();
    			query.city=row["listed_in(city)"].get<string>();	
    			string str="";
    			getline(file, str);
			    temp.push_back(query);
				//		cout<<"URL: "<<query.url<<endl<<endl<<"address: "<<query.address<<endl<<endl<<endl<<"NAME: "<<query.name<<endl<<endl<<"ORDER ONLINE: "<<query.online_order<<endl;
				//		cout<<endl<<"BOOK: "<<query.book_table<<endl<<endl<<"rating: "<<query.rating<<endl<<endl<<"votes: "<<query.votes<<endl;
				//		cout<<endl<<endl<<"phone: "<<query.phone<<endl<<endl<<"location: "<<query.location<<endl<<endl<<"TYPE: "<<query.rest_type<<endl;
				//		cout<<endl<<endl<<"DISHES LIKED: "<<query.dish_liked<<endl<<endl<<endl<<"CUISINES: "<<query.cuisines<<endl<<endl<<endl<<"cost: "<<query.approx_cost<<endl;
				//		cout<<endl<<endl<<"REVIEWS: "<<query.reviews_list<<endl<<endl<<endl<<"menu_item: "<<query.menu_item<<endl<<endl<<endl<<"type: "<<query.type<<endl<<endl<<endl<<"city: "<<query.city<<endl;
				}
				return temp;
	}
			
	vector<restaurant> read_file_with_parser(){		
		vector<restaurant> temp;
		restaurant query;
		CSVReader reader("C:\\Users\\sumsa\\Desktop\\fianl project dataset\\dataset.csv");
		for (auto& row: reader) {
	    query.url=row["url"].get<string>();
		    query.address=row["address"].get<string>();
		    query.name=row["name"].get<string>();
		    query.online_order=row["online_order"].get<string>();
		    query.book_table=row["book_table"].get<string>();
		    query.rating=row["rate"].get<string>();
		    query.votes=row["votes"].get<string>();
		    query.phone=row["phone"].get<string>();
		    query.location=row["location"].get<string>();
		    query.rest_type=row["rest_type"].get<string>();
		    query.dish_liked=row["dish_liked"].get<string>();
		    query.cuisines=row["cuisines"].get<string>();
		    query.approx_cost=row["approx_cost(for two people)"].get<string>();
		    query.reviews_list=row["reviews_list"].get<string>();
		    query.menu_item=row["menu_item"].get<string>();
		    query.type=row["listed_in(type)"].get<string>();
		    query.city=row["listed_in(city)"].get<string>();
		    temp.push_back(query);
		    
	//		cout<<"URL: "<<query.url<<endl<<endl<<"address: "<<query.address<<endl<<endl<<endl<<"NAME: "<<query.name<<endl<<endl<<"ORDER ONLINE: "<<query.online_order<<endl;
	//		cout<<endl<<"BOOK: "<<query.book_table<<endl<<endl<<"rating: "<<query.rating<<endl<<endl<<"votes: "<<query.votes<<endl;
	//		cout<<endl<<endl<<"phone: "<<query.phone<<endl<<endl<<"location: "<<query.location<<endl<<endl<<"TYPE: "<<query.rest_type<<endl;
	//		cout<<endl<<endl<<"DISHES LIKED: "<<query.dish_liked<<endl<<endl<<endl<<"CUISINES: "<<query.cuisines<<endl<<endl<<endl<<"cost: "<<query.approx_cost<<endl;
	//		cout<<endl<<endl<<"REVIEWS: "<<query.reviews_list<<endl<<endl<<endl<<"menu_item: "<<query.menu_item<<endl<<endl<<endl<<"type: "<<query.type<<endl<<endl<<endl<<"city: "<<query.city<<endl;
	}
	return temp;
	}
	};



 class stack{
     int top;
     vector<string> arr;
     int size;
     public:
     stack(){
         //cin>>size;
         size=13963;
         top = -1;
         
     }
     void push(string data){
         if(top!=size-1){
             ++top;
			 arr.push_back(data);
         }
         else
         cout<<" stack overflow";
     }

     string pop(){
         if(top !=-1){
             return arr[top--];
         }
         else
         cout<<" stack undertflow";
     }

     string peak(){
         return arr[top];
     }
     int isempty(){
         return top==-1;
     }
     int isfull(){
         return top==size-1;
     }
     void print(){
         for(int i=top;i>=0;i--){
             cout<<arr[i]<<endl;
         }
     }
 };










	
//========================================================ZOMATO WITH FUNCTIONS============================================	
class Zomato{
	
	vector <restaurant> restaurants;
	vector<string> locate;
	vector<string> url;
	vector<string> address;
	vector<string> namee;
	vector<string> online_order;
	vector<string> book_table;
	vector<string> rating;
	vector<string> votes;
	vector<string>  phone;
	vector<string> location;
	vector<string> rest_type;
	vector<string> dish_liked;
	vector<string> cuisines;
	vector<string> approx_cost;
	vector<string> reviews_list;
	vector<string> menu_item;
	vector<string> type;
	string location2;
	stack s1;
	public:
		
		Zomato(){
		
		HASHING user;
		bool flag = user.login();
			if(flag){
				restaurant query;
				vector <restaurant> restaurants = query.read_file_with_parser();
				for(int i=0;i<restaurants.size();i++){
					url.push_back(restaurants[i].url);
					address.push_back(restaurants[i].address);
					namee.push_back(restaurants[i].name);
					online_order.push_back(restaurants[i].online_order);
					book_table.push_back(restaurants[i].book_table);
					rating.push_back(restaurants[i].rating);
					votes.push_back(restaurants[i].votes);
					phone.push_back(restaurants[i].phone);
					location.push_back(restaurants[i].location);
					rest_type.push_back(restaurants[i].rest_type);
					dish_liked.push_back(restaurants[i].dish_liked);
					cuisines.push_back(restaurants[i].cuisines);
					approx_cost.push_back(restaurants[i].approx_cost);
					reviews_list.push_back(restaurants[i].reviews_list);
					menu_item.push_back(restaurants[i].menu_item);
					type.push_back(restaurants[i].type);
					locate.push_back(restaurants[i].city);
				}
				menu();
		}
			else{
			cout<<"LOGIN UNSUCCESSFUL....";
		}
}

	
	
	void menu(){
		system("cls");
	int select=2;
	while(select>=1&&select<=9){
		cout << "Functions:" << endl;
		cout << "1. Find The Best Restaurant Of Your Choice (DINE_OUT) " << endl;
		cout << "2. Find The Best Restaurant Of Your Choice (DELIEVERY)" << endl;
		cout << "3. Find Top 10 Best Restaurant In Benglauru" << endl;
		cout << "4. Show All Restaurant In Your Area :" << endl;
		cout << "5. Search Restaurant By Food You Want To Eat :" << endl;
		cout << "6. Call A Restaurnt :" << endl;
		cout << "7. Show A Restaurant Details : " << endl;
		cout << "8. Give A Restaurant Reviews : " << endl;
		cout<<  "9. View Recent restaurants: "<<endl;
		cout << "Select: ";
		cin >> select;
		switch(select)
		    {
		    	case 1:{
		    		BROUCDO();
		    		getch();
		    		system("cls");
					break;
				}
		        case 2:{
		        	BROUCD();
					getch();
		    		system("cls");
					break;
				}
		        	
		        case 3:{
		        	top10();
					getch();
		    		system("cls");
					break;
				}
		        case 4:{
		    		ALLREST();
					getch();
		    		system("cls");
					break;
				}
		        case 5:{
		        	SEARCHFOOD();
					getch();
		    		system("cls");
					break;
				}
		        	
		        case 6:{
		        	CALL();
					getch();
		    		system("cls");
					break;
				}
				
		        case 7:{
		        	DETAILS();
					getch();
		    		system("cls");
					break;
				}
				case 8:{
		        	REVIEWS();
					getch();
		    		system("cls");
					break;
				}
				case 9:{
					cout<<"DEAR USER YOU VIEWED THE FOLLOWING RESTATURANS";
		        	s1.print();
					getch();
		    		system("cls");
					break;
				}
				default:{
					cout<<"WRONG CHOICE";
					exit(0);
					break;
				}
		}
	}
	}
	
	bool find(string str1,string str2){
    int i,j;
    for( i = 0, j = 0; (i != str1.size() && j!=str2.size()) != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == str2.size())
        return 1;
    else
        return 0;
}

//	int binarysearchfood(int l,int h,string cost){
//     if(l<=h){
//         int mid=(l+h)/2;
//         if(find(restaurants[mid].dish_liked,cost)){
//             return mid;
//         }
//         else{ 
//                 return binarysearchfood(l,mid-1,cost);
//                 return binarysearchfood(mid+1,h,cost);
//         }
//     }
//     return -1;
// 	}
//
//	 int exponentialsearchfood(string key){
//	       int i = 1; 
//	       while(restaurants[i].city < key)
//	             i *= 2;
//	    return binarysearchfood(i/2, i, key); 
//	 }
//	 
//	 
int binarySearch(string key)
{
    int left = 0, right = locate.size();

    while (left <= right) {

        int mid = left + (right - left) / 2;
        if (locate[mid] == key)
            return mid;
        else if (locate[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
//	 int exponentialsearchlocation(string key){
//	       int i = 1; 
//	       while(restaurants[i].city < key)
//	             i *= 2;
//	    return binarysearchloaction(i/2, i, key); 
//	 }
	 
 int linearsearch(string data){
     for (int i = 0; i < 20; i++)
     {
         if(locate[i]==data){
             return i;
         }
     }
     return -1;
 }





	 
	 int partition(int l,int h){	
    	int pivot = stoi(restaurants[l].rating);
		int i= l,j=h;
	 do      
     {
         do{i++;}while(stoi(restaurants[i].rating)<=pivot);
         do{j--;}while(stoi(restaurants[j].rating)>pivot);
         if(j>i){
         	swap(restaurants[i],restaurants[j]);
         }
     } while (j>i);
    swap(restaurants[j],restaurants[l]);
     return j;
 }
  void quicksort(int l,int h){
      if(l<h){
          int bound = partition(l,h);
          quicksort(l,bound);
          quicksort(bound+1,h);
      }
  }

	void BROUCDO(){
		system("cls");
		cout<<"ENTER YOU LOCATION: ";
		cin>>location2;
		int flag = binarySearch(location2);
		if(flag==-1){
			cout<<"SORRY WE DONOT PROVIDE SERVICES IN YOUR AREA :(";
		}
		
		else{
			BST costtree;
			int index = flag;
			cout<<"Following are the restaurants which offer Dine-out in your area :\n";
			
			while(locate[index]==location2){
				
			if(type[index]=="Dine-out"){
			cout<<"URL: "<<url[index]<<endl<<endl<<"address: "<<address[index]<<endl<<endl<<endl<<"namee: "<<namee[index]<<endl<<endl<<"ORDER ONLINE: "<<online_order[index]<<endl;
			cout<<endl<<"BOOK: "<<book_table[index]<<endl<<endl<<"rating: "<<rating[index]<<endl<<endl<<"votes: "<<votes[index]<<endl;
			cout<<endl<<endl<<"phone: "<<phone[index]<<endl<<endl<<"location: "<<location[index]<<endl<<endl<<"TYPE: "<<rest_type[index]<<endl;
			cout<<endl<<endl<<"DISHES LIKED: "<<dish_liked[index]<<endl<<endl<<endl<<"CUISINES: "<<cuisines[index]<<endl<<endl<<endl<<"cost: "<<approx_cost[index]<<endl;
			costtree.insert(approx_cost[index],namee[index]);
			cout<<endl<<endl<<"REVIEWS: "<<reviews_list[index]<<endl<<endl<<endl<<"menu_item: "<<menu_item[index]<<endl<<endl<<endl<<"type: "<<type[index]<<endl<<endl<<endl<<"city: "<<locate[index]<<endl;
			s1.push(namee[index]);
		}   
		index++;       
	}
		cout<<"\nFOLLOWING ARE THE RESTAURANTS WITH MINIMUM COST IN ASCENDING ORDER: \n";
		costtree.display();
		
	}
}
	void BROUCD(){
		system("cls");
		cout<<"PLEASE ENTER YOUR LOCATION: ";
		cin>>location2;
		int flag = binarySearch(location2);
		if(flag==-1){
			cout<<"SORRY WE DONOT PROVIDE SERVICES IN YOUR AREA :(";
		}
		
		else{
			BST costtree;
			int index = flag;
			cout<<"Following are the restaurants which offer Delivery in your area :\n";
			
			while(locate[index]==location2){
				
			if(type[index]=="Delivery"){
			cout<<"URL: "<<url[index]<<endl<<endl<<"address: "<<address[index]<<endl<<endl<<endl<<"namee: "<<namee[index]<<endl<<endl<<"ORDER ONLINE: "<<online_order[index]<<endl;
			cout<<endl<<"BOOK: "<<book_table[index]<<endl<<endl<<"rating: "<<rating[index]<<endl<<endl<<"votes: "<<votes[index]<<endl;
			cout<<endl<<endl<<"phone: "<<phone[index]<<endl<<endl<<"location: "<<location[index]<<endl<<endl<<"TYPE: "<<rest_type[index]<<endl;
			cout<<endl<<endl<<"DISHES LIKED: "<<dish_liked[index]<<endl<<endl<<endl<<"CUISINES: "<<cuisines[index]<<endl<<endl<<endl<<"cost: "<<approx_cost[index]<<endl;
			costtree.insert(approx_cost[index],namee[index]);
			cout<<endl<<endl<<"REVIEWS: "<<reviews_list[index]<<endl<<endl<<endl<<"menu_item: "<<menu_item[index]<<endl<<endl<<endl<<"type: "<<type[index]<<endl<<endl<<endl<<"city: "<<locate[index]<<endl;
			s1.push(namee[index]);
		}   
		index++;       
	}
		cout<<"\nFOLLOWING ARE THE RESTAURANTS WITH MINIMUM COST IN ASCENDING ORDER: \n";
		costtree.display();
		
	}
}

	void top10(){
		system("cls");
		BST votestree;
		for(int i=0;i<namee.size();i++){
			votestree.insert(votes[i],namee[i]);}
			
		cout<<"\nFOLLOWING ARE TOP 10 RESTAURANTS In BENGLAURU \n";
		votestree.display(10);	
		
	}
	
	void ALLREST(){
		system("cls");
		cout<<"PLEASE ENTER YOUR LOCATION: ";
		cin>>location2;
		int flag =binarySearch(location2);
		if(flag==-1)
			cout<<"SORRY WE DONOT PROVIDE SERVICES IN YOUR AREA :(";
		
		else{
			BST costtree;
			int index = flag;
			cout<<"Following are the restaurants in your area :\n";
			while(locate[index]==location2){
			cout<<"URL: "<<url[index]<<endl<<endl<<"address: "<<address[index]<<endl<<endl<<endl<<"namee: "<<namee[index]<<endl<<endl<<"ORDER ONLINE: "<<online_order[index]<<endl;
			cout<<endl<<"BOOK: "<<book_table[index]<<endl<<endl<<"rating: "<<rating[index]<<endl<<endl<<"votes: "<<votes[index]<<endl;
			cout<<endl<<endl<<"phone: "<<phone[index]<<endl<<endl<<"location: "<<location[index]<<endl<<endl<<"TYPE: "<<rest_type[index]<<endl;
			cout<<endl<<endl<<"DISHES LIKED: "<<dish_liked[index]<<endl<<endl<<endl<<"CUISINES: "<<cuisines[index]<<endl<<endl<<endl<<"cost: "<<approx_cost[index]<<endl;
			cout<<endl<<endl<<"REVIEWS: "<<reviews_list[index]<<endl<<endl<<endl<<"menu_item: "<<menu_item[index]<<endl<<endl<<endl<<"type: "<<type[index]<<endl<<endl<<endl<<"city: "<<locate[index]<<endl;
			index++;
			s1.push(namee[index]);	
		}
		
	}
}
	void SEARCHFOOD(){
		system("cls");
		cout<<"PLEASE ENTER YOUR LOCATION: ";
		cin>>location2;
		cout<<endl<<"PLEASE ENTER WHAT YOU WANT TO EAT: ";
		string food;
		cin>>food;
		cout<<endl;
		int flag =binarySearch(location2);
		if(flag==-1)
			cout<<"SORRY WE DONOT PROVIDE SERVICES IN YOUR AREA :(";
		
		else{
	
			int index = flag;
			cout<<"Following are the restaurants in your area which offer food of your choice:\n";
			while(locate[index]==location2){
				
			if(find(cuisines[index],food)){
			flag=1;
			cout<<"URL: "<<url[index]<<endl<<endl<<"address: "<<address[index]<<endl<<endl<<endl<<"namee: "<<namee[index]<<endl<<endl<<"ORDER ONLINE: "<<online_order[index]<<endl;
			cout<<endl<<"BOOK: "<<book_table[index]<<endl<<endl<<"rating: "<<rating[index]<<endl<<endl<<"votes: "<<votes[index]<<endl;
			cout<<endl<<endl<<"phone: "<<phone[index]<<endl<<endl<<"location: "<<location[index]<<endl<<endl<<"TYPE: "<<rest_type[index]<<endl;
			cout<<endl<<endl<<"DISHES LIKED: "<<dish_liked[index]<<endl<<endl<<endl<<"CUISINES: "<<cuisines[index]<<endl<<endl<<endl<<"cost: "<<approx_cost[index]<<endl;
			cout<<endl<<endl<<"REVIEWS: "<<reviews_list[index]<<endl<<endl<<endl<<"menu_item: "<<menu_item[index]<<endl<<endl<<endl<<"type: "<<type[index]<<endl<<endl<<endl<<"city: "<<locate[index]<<endl;}
			index++;
			s1.push(namee[index]);
			}
			if(flag!=1){
				cout<<"SORRY NO RETAURANTS PROVIDE THE FOOD DESIRED :(";
			}
		
		}
		
	}
	
	void CALL(){
		system("cls");
		cout<<"PLEASE ENTER RESTAURANT NAME: : ";
		string name;
		cin>>name;
		fflush(stdin);
		cout<<"\nWHICH BRANCH OF THE RESTAURANT YOU WOULD WANT TO CALL: ";
		cin>>location2;
		int flag =binarySearch(location2);
		if(flag==-1)
			cout<<"SORRY WE DONOT PROVIDE SERVICES IN YOUR AREA :(";
		
		else{
	
			int index = flag;
			cout<<"Following are the restaurant details:\n";
			while(locate[index]==location2){
				cout<<endl<<"NAME: "<<namee[index]<<endl<<endl<<"phone: "<<phone[index]<<endl<<endl<<"location: "<<location[index]<<endl<<endl<<"TYPE: "<<rest_type[index]<<endl;
				index++;
				s1.push(namee[index]);
				}
			if(flag!=1){
				cout<<"SORRY NO RETAURANTS PROVIDE THE FOOD DESIRED :(";
			}
		
	}
}
	void DETAILS(){
		system("cls");
		cout<<"PLEASE ENTER RESTAURANT NAME : ";
		string name;
		cin>>name;
		fflush(stdin);
		cout<<"WHICH BRANCH OF THE RESTAURANT YOU WOULD WANT TO HAVE DETAILS OF: ";
		cin>>location2;
		int flag =binarySearch(location2);

		if(flag==-1)
			cout<<"SORRY WE DONOT PROVIDE SERVICES IN YOUR AREA :(";
		
		else{
	
			int index = flag;
			//cout<<"Following are the restaurant details:\n";
//			
//			while(locate[index]==location2){
//				
////			if(namee[index]==name){
////			cout<<"URL: "<<url[index]<<endl<<endl<<"address: "<<address[index]<<endl<<endl<<endl<<"NAME: "<<name[index]<<endl<<endl<<"ORDER ONLINE: "<<online_order[index]<<endl;
////			cout<<endl<<"BOOK: "<<book_table[index]<<endl<<endl<<"rating: "<<rating[index]<<endl<<endl<<"votes: "<<votes[index]<<endl;
////			cout<<endl<<endl<<"phone: "<<phone[index]<<endl<<endl<<"location: "<<location[index]<<endl<<endl<<"TYPE: "<<rest_type[index]<<endl;
////			cout<<endl<<endl<<"DISHES LIKED: "<<dish_liked[index]<<endl<<endl<<endl<<"CUISINES: "<<cuisines[index]<<endl<<endl<<endl<<"cost: "<<approx_cost[index]<<endl;
////			cout<<endl<<endl<<"REVIEWS: "<<reviews_list[index]<<endl<<endl<<endl<<"menu_item: "<<menu_item[index]<<endl<<endl<<endl<<"type: "<<type[index]<<endl<<endl<<endl<<"city: "<<locate[index]<<endl;
////			}
////			
//			index++;
//			}
			cout<<"SORRY NO RETAURANTS PROVIDE THE FOOD DESIRED :(";
	}
}
	void REVIEWS(){
		system("cls");
		cout<<"PLEASE ENTER RESTAURANT NAME : ";
		string name;
		string review;
		cin>>name;
		fflush(stdin);
		cout<<"WHICH BRANCH OF THE RESTAURANT YOU WOULD WANT TO GIVE REVIEWS: ";
		cin>>location2;
		string stars;
		cout<<"PLEASE ENTER NO OF STARS YOU WOULD LIKE TO GIVE : ";
		cin>>stars;
		fflush(stdin);
		cout<<"PLEASE ENTER REVIEW : ";
		getline(cin,review);
		int flag =binarySearch(location2);

		if(flag==-1)
			cout<<"NO SUCH RESTUARANT FOUND IN YOUR LOCATION :(";
		
		else{
	
			int index = flag;
			reviews_list[index]=reviews_list[index]+",[stars "+stars+"/5]"+review+"},";
			cout<<"REVIEW ADDED SUCCESFULLY\n\n"<<reviews_list[index];
	}
}		
};	

int main(){
	Zomato app;
}

	

