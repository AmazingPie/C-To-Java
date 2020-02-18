/*	Initalise some pointers and do some basic arithmetic with them*/

int main() {
	//[Inits]
	int x = 42;
	int *y;		//int[] y
				//int y_off
	int z;
	
	//[Simple pointers]
	y = &x;
	//y_arr[y_off] = x

	z = *y;
	//z = y_arr[y_off]

	//[Pointer arithmetic]
	*(y + 4) = 5;
	//y[y_off + 4] = 5

	z = *(y + 4);
	//z = y[y_off + 4]

	y++;
	//y_off++

	*y = 2;
	//y[y_off] = 2

	y = (y + 5);
	//y_off = y_off + 5

	return 0;
}

//Whenever y is operated on without dereferencing, use the offset instead?
//e.g: y = ... -> y_off = ...
//Make sure that it can be proved that this is always going to be the case

//y is almost always changed to y[y_offset + ...] where any arithmetic that is done
//to the pointer is done to the offset

/*
This case is a little trickier because while it is pointer arithmetic it is more
confusing as to what is an offset and what isn't. For example:
	int *a;
	a = y + 3;
Should be transformed into
	int[] a
	int a_offset
	a_offset = y + 3		<--WRONG - the offset cannot be set to an array
And not
	a_offset = y_offset + 3

a needs to be set to an array of y but already indexed to the offset.
Maybe it can be transformed to:
	a_offset = y_offset + 3
	a = y
Might need a way of checking that the two pointers aren't equal because otherwise
it can be simplified to just changing the offset
*/