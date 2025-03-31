//5.8.6　(必要)长整型后缀必须应大写字母L
//------维持特殊的8114的“R - 1 - 8 - 5 数字类型后缀必须使用大写字母”

unsigned int  ucV1 = 0U;     //遵循
unsigned int  ucV2 = 0u;     //违背
long           lV1 = 0L;     //遵循
long           lV2 = 0l;     //违背
float          fV1 = 0.0F;   //遵循
float          fV2 = 0.0f;   //违背
double        ldV1 = 0.0L;   //遵循
double        ldV2 = 0.0l;   //违背
