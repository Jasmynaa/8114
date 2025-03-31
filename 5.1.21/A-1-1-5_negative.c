//5.1.21　(建议)建议结构体嵌套定义不超过3层
//------维持8114的“A-1-1-5 建议结构体嵌套定义不超过3层” 

struct D
{
	int id;
};
struct C
{
	struct D sd;
};
struct B
{
	struct C sc;
};
struct A            // 违背
{
	struct B sb;
};