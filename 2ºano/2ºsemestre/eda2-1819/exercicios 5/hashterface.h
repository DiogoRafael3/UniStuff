struct item{//este struct representa cada elemento da hashtable
	short p1;
	short p2;
	short p3;
	short interface;
	int key;
};

struct item *item_new(short a, short b, short c, short inter);
struct item **array_new();
int hashCode(int key);
int doubleHash(int key);
void hashInsert(struct item **array, struct item *item);
bool compare(struct item **array,int hash,short p1, short p2, short p3);
short hashFind(struct item **array,short p1, short p2, short p3);
