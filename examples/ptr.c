/*	Initalise some pointers and do some basic arithmetic with them*/

int main() {
	//[Inits]
	int x = 42;
	int *y;		//int[] y
				//int y_off
	int *a;
	int z;
	
	//[Simple pointers]
	y = &x;
	//y_arr[y_off] = x

	z = *y;
	//z = y_arr[y_off]

	//[Pointer arithmetic]
	*(y + 4) = 5;
	//Lval(e)
	//Lval(BinOp(e1,e2))
	//Lval(BinOp(Lval(lv1),Lval(lv2)))
	//y[y_off + 4] = 5

	z = *(y + 4);
	//z = y[y_off + 4]

	y++;
	//y_off++

	*y = 2;
	//y[y_off] = 2

	y = (y + 5);
	//y = y
	//y_off = y_off + 5

	y = (y - (1 + 2 + 2));
	//y = y
	//y_off = y_off -5

	y = 2 + y;
	//y = y
	//y_off = y_off + 2

	y = 6;
	//throw exception

	//[Dynamic Allocation]
	a = (int*)malloc(10 * sizeof(int*));
	//a = new int[10]
	//a = new int[10 * sizeof(int) / sizeof(int)]
	//a = (int*)malloc(40);
	//a = new int[10]
	//a = new int[40 / sizeof(int)]
	
	free(a);
	//nothing -- Java's GC will handle this

	return 0;
}