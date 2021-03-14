#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret = dest;
	assert(dest&&src);
	while(num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
		//src++;
	}
	return ret;
}
struct s
{
	char name[20];
	int age;
};
int main()
{
	int arr1[] = {1,3,2,3,5};
	int arr2[5] = {0};
	struct s arr3[] = {{"张三",22},{"李四",34}};
	struct s arr4[3] = {0};
	my_memcpy(arr4,arr3,sizeof(arr3));
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}