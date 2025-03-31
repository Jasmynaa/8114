//5.13.15　(建议)谨慎使用寄存器变量
//------维持8114的“A - 1 - 13 - 2 谨慎使用寄存器变量”

register int glb;     //违背
register int r_var;    //违背
void static_p(register int x)    //违背
{
	register int ri = 0;  //违背
	for (register int i = 0; i<4; i++)  //违背
	{
		/*…*/
	}
}