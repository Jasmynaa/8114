
struct C
{
	int id;
};
struct B
{
	struct C sc;
};
struct A            // ×ñÑ­
{
	struct B sb;
};