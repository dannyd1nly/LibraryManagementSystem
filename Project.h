typedef struct book {
	char name[200];
	int id;
	char author[200];
	int price;
}book;

void storebooks(book*,int);
void displaybooks(book*,int);
void searchbyname(book*,int);
void searchbybookid(book*,int);
void searchbyauthor(book*,int);
void maxpricebook(book*,int);
void minpricebook(book*,int);
void sortbyprice(book*,int);
void sortbyid(book*,int);
void updatebook(book*,int);
void insertbook(book*,int);
void deletebook(book*,int);
