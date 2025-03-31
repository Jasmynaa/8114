//5.1.3　(必要)表示字符的char不用signed或unsigned说明
//-------新增准则

int main(void){
	unsigned int d=12;
	signed char myChar = 'a'; //违背
	unsigned char myChar1 = 'b';//违背
	char myChar2 = 'c';    //遵循
	return(0);
}
