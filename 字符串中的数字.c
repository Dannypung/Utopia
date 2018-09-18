#include<stdio.h>
#include<string.h>
int main(){
	char str[21],numb[21];
	while(gets(str)){
		int j=0,i,temp,len;
		memset(numb,0,sizeof(numb));      //清零数组值

	for(i=0;str[i]!='\0';i++){			  //依次输入数组元素

		if(str[i]>='0'&&str[i]<='9'){      	//寻找字符串中的数字并输入数组numb[]中
			numb[j]=str[i];
			j++;
		}

		len=strlen(numb);
	}

	for(i=0;i<len-1;i++)                //冒泡排序
		for(j=0;j<len-i-1;j++)
			{if(numb[j]>numb[j+1]){
				temp=numb[j];
				numb[j]=numb[j+1];
				numb[j+1]=temp;
			}

			}
	for(j=0;j<strlen(numb);j++)
	printf("%4c",numb[j]);			 	 //%4c意味着每个数组元素占四个空，不足的补齐空格
	printf("\n");
}
	return 0;
}
