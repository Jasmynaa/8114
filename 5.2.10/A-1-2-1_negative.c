//5.2.10��(����)һ���ļ��е�������в�����2000��
//------ά��8114�ġ�A - 1 - 2 - 1 һ���ļ��е�������в�����2000�С�

//5.2.10��(����)һ���ļ��е�������в�����2000��
//------ά��8114�ġ�A - 1 - 2 - 1 һ���ļ��е�������в�����2000�С�

/* ע��
ע��
ע��
ע��
ע��
ע��
ע��
ע��
ע��
ע��
ע�� */

#define DelayTime 20            // ע��

int SXQ3362[4];                 // ע�� 

/* ע�� ** */
extern char SXQ1317[12];        /* ע��
								ע��
								ע��
								ע��
								ע��
								ע��
								ע�� */
extern char SXQ1069[3];         /* ע�� ; /*s7s7sBsFsE3s6s1s5s6sEsFs6s1s8 */
/* ע��
ע��
ע��
ע�� */
extern unsigned char SXQ437[3]; // ע�� 
extern unsigned char SXQ2090[12];       // ע�� 
extern unsigned char SXQ3455[12];       // ע�� 
extern unsigned char SXQ3155[3];        // ע�� 

extern unsigned char SXQ1242[12];       /* ע�� 2s6s2s4s1s4s6s7s4s1s1s6s1sA0-s0sC1-s3s8s1s1 */
extern unsigned char SXQ985[3]; /* ע�� ; /*3s6s1s5s6s7s4s1s1s6s1sA0-s0sC1-s3s8s1s1 */

unsigned char SXQ2385;          // ע�� 

/* ע�� ** */
extern int SXQ3385;             /* ע�� /* main task mtask ID */
extern SEM_ID SXQ1421;          // ע�� 

MSG_Q_ID SXQ1408;               /* ע�� 12s6s1s4s6s4sEs0s1sFsEs1 */
MSG_Q_ID SXQ1146;               /* ע�� sA3s6s1s5s6s4sEs0s1sFsEs1 */

MSG_Q_ID SXQ340;                /* ע��
								ע�� */
MSG_Q_ID SXQ499;                // ע�� 
MSG_Q_ID SXQ595;                // ע�� 

extern unsigned int SXQ1935;             // ע�� 

// ע�� 
SXQ3491::SXQ3491()
{
	unsigned char i, j;         // ע�� 

	/* ע�� ** */
	for (i = 0; i < 12; i++)
	{
		SXQ3736[i] = 0;         // ע�� 
		// ע�� 
		SXQ2440[i] = 0;
		SXQ2833[i] = 0;
		SXQ2401[i] = 0;
		SXQ1521[i] = 0;         // ע�� 
		SXQ1304[i] = 0;         // ע�� 
		SXQ855[i] = 0;          // ע�� 
		for (j = 0; j < 2; j++)
		{
			SXQ1243[i][j] = 0;  // ע�� 
		}

		// ע�� 
		SXQ1194[i].SXQ2413 = 0; // ע�� 
		SXQ1194[i].SXQ998 = 0;  // ע�� 
		SXQ1194[i].SXQ4071 = 0; // ע�� 
		SXQ1194[i].SXQ2889 = 0; // ע�� 
		SXQ1194[i].SXQ2896 = 0; // ע�� 

		// ע�� 
		SXQ1090[i].SXQ3419 = 0;

		for (j = 0; j < 60; j++)
		{
			SXQ1800[i][j] = 0;
			SXQ1799[i][j] = 0;
		}
		SXQ2465[i] = 0;         // ע�� 
	}

	for (i = 0; i < 3; i++)
	{
		// ע�� 
		SXQ2441[i] = 0;
		SXQ2834[i] = 0;
		SXQ2402[i] = 0;

		SXQ1222[i] = 0;         // ע�� 
		SXQ1057[i] = 0;         // ע�� 
		SXQ685[i] = 0;          // ע�� 

		// ע�� 
		SXQ957[i].SXQ2413 = 0;  // ע�� 
		SXQ957[i].SXQ998 = 0;   // ע�� 
		SXQ957[i].SXQ4071 = 0;  // ע�� 

		SXQ358[i] = 0;          // ע�� 

		for (j = 0; j < 30; j++)
		{
			SXQ1550[i][j] = 0;
		}

		SXQ2097[i] = 0;         // ע�� 
	}

	for (i = 0; i < 96; i++)     // ע�� 
	{
		SXQ1251[i] = 0xFF;
		SXQ1029[i] = 0;         // ע�� 
	}
	SXQ2385 = 0;                // ע�� 
}

// ע�� 
SXQ3491::~SXQ3491()
{
	// ע�� 
	// ע�� 
}

/* ע��
ע��
ע��
ע�� */
unsigned char SXQ3491::SXQ1122(unsigned char *SXQ4013, unsigned char *SXQ3390, int SXQ3365)
{
	int i;                      // ע�� 
	unsigned char SXQ3722;      // ע�� 

	SXQ3722 = 0;                // ע�� 
	for (i = 0; i < SXQ3365; i++)
	{
		if (SXQ4013[i] != SXQ3390[i])
		{
			SXQ3722 = 1;        // ע�� 
			break;
		}
	}
	return SXQ3722;
}

/* ע�� ** */
/* ע��                 */
/* ע�� ** */
void SXQ3491::SXQ962(void)      // ע�� 
{
	unsigned char SXQ1795[60];

	// ע�� 
	int SXQ1420;
	struct fd_set SXQ3389;      // ע�� 

	/* ע�� ** */
	SXQ1408 = msgQCreate(MAX_MSG_LAU, MSG_SIZE_LAU, MSG_Q_FIFO);

	taskDelay(1000);            // ע�� 

	while (true)
	{
		/* ע�� **** */
		/* ע�� 5sA     */
		/* ע�� F                       */
		/* ע�� **** */
		FD_ZERO(&SXQ3389);      // ע�� 
		FD_SET(SXQ3362[0], &SXQ3389);   // ע�� 

		SXQ1420 = select(SXQ3362[0] + 1, &SXQ3389, NULL, NULL, NULL);   // ע�� 

		if (SXQ1420 > 0)         // ע�� 
		{
			if (FD_ISSET(SXQ3362[0], &SXQ3389))  // ע�� 
			{
				if (SXQ1912(CH0_LAU, (char *)SXQ1795, MaxCH0) > 0)       // ע�� 
				{
					SXQ700(SXQ1795);
				}
			}
		}
	}
}

void SXQ3491::SXQ963(void)      // ע�� 
{
	unsigned char SXQ1795[60];

	// ע�� 
	int SXQ1420;
	struct fd_set SXQ3389;      // ע�� 

	taskDelay(1000);            // ע�� 

	while (true)
	{
		/* ע�� **** */
		/* ע�� 5sA     */
		/* ע�� F                       */
		/* ע�� **** */
		FD_ZERO(&SXQ3389);      // ע�� 
		FD_SET(SXQ3362[1], &SXQ3389);   // ע�� 

		SXQ1420 = select(SXQ3362[1] + 1, &SXQ3389, NULL, NULL, NULL);   // ע�� 

		if (SXQ1420 > 0)         // ע�� 
		{
			if (FD_ISSET(SXQ3362[1], &SXQ3389))  // ע�� 
			{
				if (SXQ1912(CH1_DROP, (char *)SXQ1795, MaxCH1) > 0)      // ע�� 
				{
					SXQ568(SXQ1795);
				}
			}
		}
	}
}

void SXQ3491::SXQ964(void)
{
	unsigned char SXQ1795[60];

	// ע�� 
	int SXQ1420;
	struct fd_set SXQ3389;      // ע�� 

	/* ע�� *** */
	SXQ1146 = msgQCreate(MAX_MSG_BAIT, MSG_SIZE_BAIT, MSG_Q_FIFO);

	taskDelay(1000);            // ע�� 

	while (true)
	{
		/* ע�� **** */
		/* ע�� 5sA     */
		/* ע�� F                       */
		/* ע�� **** */
		FD_ZERO(&SXQ3389);      // ע�� 
		FD_SET(SXQ3362[3], &SXQ3389);   // ע�� 

		SXQ1420 = select(SXQ3362[3] + 1, &SXQ3389, NULL, NULL, NULL);   // ע�� 

		if (SXQ1420 > 0)         // ע�� 
		{
			if (FD_ISSET(SXQ3362[3], &SXQ3389))  // ע�� 
			{
				if (SXQ1912(CH3_BAIT, (char *)SXQ1795, MaxCH3) > 0)      // ע�� 
				{
					SXQ1120(SXQ1795);   // ע�� 
					// ע�� 
					if ((SXQ1795[0] >= 0x40) && (SXQ1795[0] <= 0x42))    // ע�� 
					{
						// ע�� 
						if ((SXQ1795[4] == HSXQ050) && (SXQ1795[5] == HSXQ050) && (SXQ2385 == 0))  // ע�� 
						{
							SXQ2385 = 1;        // ע�� 
						}
					}
				}
			}
		}
	}
}

/* ע�� ** */
/* ע��                 */
/* ע�� ** */
void SXQ3491::SXQ700(unsigned char *SXQ1795)
{
	static unsigned char SXQ1035[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };  // ע�� 

	int i, j, k, l;             // ע�� 

	unsigned char SXQ3450;      // ע�� 
	unsigned char SXQ3727;      // ע�� 
	int SXQ4367;                // ע�� 
	unsigned char SXQ2785, SXQ2783;     // ע�� 
	unsigned char SXQ3722 = 0;  // ע�� 

	unsigned char SXQ3141[60];  // ע�� 
	unsigned char SXQ3110[60];  // ע�� 
	int SXQ3364, SXQ3360;       // ע�� 

	struct _SXQ2728 SXQ2728;    // ע�� 

	// ע�� 
	SXQ3450 = SXQ1795[0] - 0x60;        // ע�� 

	/* ע��
	ע��
	ע��
	ע�� */

	if (SXQ3450 < 12)            // ע�� 
	{
		SXQ3455[SXQ3450] = 0;   // ע�� 

		// ע�� 
		SXQ3727 = SXQ1795[3] & 7;       // ע�� 

		// ע�� 
		if ((SXQ1317[SXQ3450] == OK) && (SXQ3727 != 7))  // ע�� 
		{
			SXQ1035[SXQ3450]++; // ע�� 
		}
		if (SXQ3727 == 7)        // ע�� 
		{
			SXQ1317[SXQ3450] = OK;      // ע�� 
			SXQ1035[SXQ3450] = 0;       // ע�� 
		}
		else if ((SXQ1035[SXQ3450] >= 3) || (SXQ1317[SXQ3450] == ERROR)) // ע�� 
		{
			if ((SXQ3727 == 1) || (SXQ3727 == 5))        // ע�� 
			{
				SXQ1317[SXQ3450] = 1;   // ע�� 
			}
			else if ((SXQ3727 == 2) || (SXQ3727 == 6))   // ע�� 
			{
				SXQ1317[SXQ3450] = 2;   // ע�� 
			}
			else
			{
				SXQ1317[SXQ3450] = 3;   // ע�� 
			}
		}

		// ע�� 
		if ((SXQ1795[1] > 1) && (SXQ1795[1] <= 14) && (SXQ1795[4] == SXQ1795[5]))
			// ע�� 
		{
			memcpy(SXQ3141, SXQ1795 + 4, SXQ1795[1]);
			SXQ3141[0] = SXQ1795[1];    // ע�� 
			SXQ3364 = SXQ1795[1];       // ע�� 
		}
		else
		{
			SXQ3364 = 0;        // ע�� 
			SXQ3141[1] = 0;     // ע�� 
		}

		if ((SXQ1795[1] <= 14) && (SXQ1795[2] > 1) && (SXQ1795[2] <= 40) && ((SXQ1795[1] + SXQ1795[2]) <= 40))
		{
			SXQ4367 = SXQ1795[1];
			if (SXQ1795[SXQ4367 + 4] == SXQ1795[SXQ4367 + 5])    // ע�� 
			{
				memcpy(SXQ3110, SXQ1795 + SXQ4367 + 4, SXQ1795[2]);
				SXQ3110[0] = SXQ1795[2];        // ע�� 
				SXQ3360 = SXQ1795[2];   // ע�� 
			}
			else                // ע�� 
			{
				SXQ3360 = 0;    // ע�� 
				SXQ3110[1] = 0; // ע�� 
			}
		}
		else
		{
			SXQ3360 = 0;        // ע�� 
			SXQ3110[1] = 0;     // ע�� 
		}

		if ((SXQ3364 != 0) || (SXQ3360 != 0))
		{
			// ע�� 
			if (SXQ1521[SXQ3450] != HSXQ012)       // ע�� 
			{
				SXQ3722 = SXQ1910(SXQ3110[1], SXQ3141[1], SXQ1521[SXQ3450], SXQ1795);
			}

			if (SXQ3722 == 1)    // ע�� 
			{
				// ע�� 
				SXQ1521[SXQ3450] = 0;   // ע�� 
				SXQ1304[SXQ3450] = 0;   // ע�� 
				SXQ855[SXQ3450] = 0;    // ע�� 
				SXQ1242[SXQ3450] = 0;   // ע�� 
			}

			// ע�� 
			SXQ2785 = SXQ1122(SXQ3141, SXQ1800[SXQ3450], SXQ3364);      // ע�� 
			if ((SXQ2785 == 1) || (SXQ1795[4] == HSXQ032) || (SXQ1795[4] == HSXQ019))  // ע�� 
			{
				memcpy(SXQ1800[SXQ3450], SXQ3141, SXQ3364);     // ע�� 
				SXQ2785 = 1;
			}

			SXQ2783 = SXQ1122(SXQ3110, SXQ1799[SXQ3450], SXQ3360);      // ע�� 
			if ((SXQ2783 == 1) || (SXQ3110[1] == HSXQ031) || (SXQ3110[1] == HSXQ019) || ((SXQ3360 > 0) && (SXQ3110[1] == HSXQ032)))        // ע�� 
			{
				memcpy(SXQ1799[SXQ3450], SXQ3110, SXQ3360);     // ע�� 
				SXQ2783 = 1;
			}

			if ((SXQ2785 == 0) && (SXQ2783 == 0) && ((SXQ3141[1] == HSXQ018) || (SXQ3110[1] == HSXQ018)))    // ע�� 
			{
				// ע�� 
				SXQ3727 = SXQ1795[3] & 7;       // ע�� 
				if (SXQ2465[SXQ3450] != SXQ3727) // ע�� 
				{
					if (SXQ3141[1] == HSXQ018)
					{
						SXQ2785 = 1;
					}
					if (SXQ3110[1] == HSXQ018)
					{
						SXQ2783 = 1;
					}
					SXQ2465[SXQ3450] = SXQ3727; // ע�� 
				}
			}

			if (((SXQ2785 == 1) || (SXQ2783 == 1)) && (SXQ3141[1] == SXQ3110[1]))        // ע�� 
			{
				// ע�� 
				SXQ2728.SXQ3107[0] = 0; // ע�� 
				SXQ2728.SXQ3107[1] = SXQ3141[1];        // ע�� 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ע�� 
				if ((SXQ2785 == 1) && (SXQ2783 == 0))
				{
					SXQ2728.SXQ3107[3] = 1;     // ע�� 
				}
				else if ((SXQ2785 == 0) && (SXQ2783 == 1))
				{
					SXQ2728.SXQ3107[3] = 2;     // ע�� 
				}
				else
				{
					SXQ2728.SXQ3107[3] = 3;     // ע�� 
				}

				// ע�� 
				if ((SXQ2785 == 1) && (SXQ3364 > 2))     // ע�� 
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3141 + 2, SXQ3364 - 2);      // ע�� 
				}
				if ((SXQ2783 == 1) && (SXQ3360 > 2) && (SXQ2728.SXQ3107[3] == 3))
				{
					memcpy(SXQ2728.SXQ3107 + SXQ3364 + 2, SXQ3110 + 2, SXQ3360 - 2);    // ע�� 
				}
				else if ((SXQ2783 == 1) && (SXQ3360 > 2) && (SXQ2728.SXQ3107[3] == 2))
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3110 + 2, SXQ3360 - 2);      // ע�� 
				}

				if ((SXQ3141[1] == HSXQ018) && (SXQ3364 == 3) && (SXQ3360 == 3))
				{
					SXQ2090[SXQ3450] = 1;       // ע�� 
				}

				/* ע�� ****** */
				SXQ2728.SXQ2767 = tickGet();    // ע�� 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ע�� 
			}
			else if ((SXQ2785 == 1) && (SXQ2783 == 1))   // ע�� 
			{
				// ע�� 
				SXQ2728.SXQ3107[0] = 0; // ע�� 
				SXQ2728.SXQ3107[1] = SXQ3141[1];        // ע�� 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ע�� 
				SXQ2728.SXQ3107[3] = 1; // ע�� 
				if ((SXQ2785 == 1) && (SXQ3364 > 2))     // ע�� 
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3141 + 2, SXQ3364 - 2);      // ע�� 
				}
				/* ע�� ****** */
				SXQ2728.SXQ2767 = tickGet();    // ע�� 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ע�� 

				// ע�� 
				SXQ2728.SXQ3107[1] = SXQ3110[1];        // ע�� 
				SXQ2728.SXQ3107[3] = 2; // ע�� 
				if ((SXQ2783 == 1) && (SXQ3360 > 2))
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3110 + 2, SXQ3360 - 2);      // ע�� 
				}
				/* ע�� ****** */
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ע�� 
			}
			else if ((SXQ2785 == 1) && (SXQ2783 == 0))   // ע�� 
			{
				// ע�� 
				SXQ2728.SXQ3107[0] = 0; // ע�� 
				SXQ2728.SXQ3107[1] = SXQ3141[1];        // ע�� 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ע�� 
				SXQ2728.SXQ3107[3] = 1; // ע�� 
				if ((SXQ2785 == 1) && (SXQ3364 > 2))     // ע�� 
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3141 + 2, SXQ3364 - 2);      // ע�� 
				}
				/* ע�� ****** */
				SXQ2728.SXQ2767 = tickGet();    // ע�� 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ע�� 
			}
			else if ((SXQ2785 == 0) && (SXQ2783 == 1))   // ע�� 
			{
				// ע�� 
				SXQ2728.SXQ3107[0] = 0; // ע�� 
				SXQ2728.SXQ3107[1] = SXQ3110[1];        // ע�� 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ע�� 
				SXQ2728.SXQ3107[3] = 2; // ע�� 
				if ((SXQ2783 == 1) && (SXQ3360 > 2))
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3110 + 2, SXQ3360 - 2);      // ע�� 
				}

				/* ע�� ****** */
				SXQ2728.SXQ2767 = tickGet();    // ע�� 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ע�� 
			}
		}
	}
}

/* ע�� ** */
/* ע��                 */
/* ע�� ** */
void SXQ3491::SXQ568(unsigned char *SXQ1795)
{
	int i;                      // ע�� 

	unsigned char SXQ3450;      // ע�� 
	unsigned char SXQ3453;      // ע�� 
	unsigned char SXQ4427;      // ע�� 

	struct _SXQ2728 SXQ2728;    // ע�� 
	unsigned long SXQ2159;      // ע�� 
	unsigned short SXQ2165;

	union _SXQ4439
	{
		unsigned long SXQ2767;
		unsigned char SXQ4047[4];
	}
	SXQ4439;

	unsigned int SXQ1578;

	// ע�� 

	SXQ3450 = SXQ1795[0] - 0x60;        // ע�� 

	if (SXQ3450 < 12)            // ע�� 
	{
		SXQ2728.SXQ2767 = tickGet();    // ע�� 
		SXQ2728.SXQ3107[0] = 0; // ע�� 
		SXQ2728.SXQ3107[1] = 126;       // ע�� 
		SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ע�� 
		switch (SXQ1795[1])
		{
		case 0x99:         // ע�� 
			SXQ4427 = 1;
			break;
		case 0xA5:         // ע�� 
			SXQ4427 = 2;
			break;
		case 0xAA:         // ע�� 
			SXQ4427 = 3;
			break;
		case 0xCC:         // ע�� 
			SXQ4427 = 4;
			break;
		case 0x33:         // ע�� 
			SXQ4427 = 5;
			break;
		case 0x66:         // ע�� 
			SXQ4427 = 6;
			break;
		case 0xD6:         // ע�� 
			SXQ4427 = 7;
			break;
		case 0x7E:         // ע�� 
			SXQ4427 = 8;
			break;
		default:           // ע�� 
			SXQ4427 = 0;
			break;
		}
		if (SXQ4427 != 0)
		{
			SXQ3453 = SXQ3450 * 8 + SXQ4427 - 1;        // ע�� 
			SXQ2728.SXQ3107[3] = SXQ3453;       // ע�� 
			SXQ2728.SXQ3107[4] = SXQ1251[SXQ3453];      // ע�� 
			// ע�� 
			if (SXQ1090[SXQ3450].SXQ3419 == 1)   // ע�� 
			{
				SXQ1578 = SXQ1090[SXQ3450].SXQ2513;     // ע�� 
			}
			else
			{
				SXQ1578 = 0;    // ע�� 
			}

			if ((SXQ2728.SXQ2767 - SXQ1578) > 500)       // ע�� 
			{
				SXQ2159 = (long)((float)(SXQ1795[2] * 0x100 + SXQ1795[3]) * 0.3315 + (float)SXQ1795[4] / 0.281 + 0.369);        // ע�� 
				SXQ2165 = (unsigned short)SXQ2159;
				memcpy(&(SXQ2728.SXQ3107[5]), &SXQ2165, 2);
				if (SXQ2159 < 2000)      // ע�� 
				{
					SXQ4439.SXQ2767 = SXQ2728.SXQ2767 - SXQ2159;        // ע�� 
				}
				else            // ע�� 
				{
					SXQ4439.SXQ2767 = SXQ2728.SXQ2767 - 300;    // ע�� 
				}
				for (i = 0; i < 4; i++)  // ע�� 
				{
					SXQ2728.SXQ3107[i + 7] = SXQ4439.SXQ4047[i];
				}
				/* ע�� ***** */
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);
			}
			// ע�� 
			// ע�� 
			// ע�� 
			SXQ1090[SXQ3450].SXQ3419 = 1;
			SXQ1090[SXQ3450].SXQ2513 = SXQ2728.SXQ2767;
		}
	}
}

/* ע�� ** */
/* ע��                 */
/* ע�� ** */
void SXQ3491::SXQ1120(unsigned char *SXQ1795)
{
	int i, j;                   // ע�� 
	static unsigned char SXQ1034[3] = { 0, 0, 0 };      // ע�� 

	unsigned char SXQ3101;      // ע�� 
	unsigned char SXQ3727;      // ע�� 
	int SXQ4367;

	// ע�� 

	struct _SXQ2728 SXQ2728;    // ע�� 
	union _SXQ2525 SXQ2525;     // ע�� 

	unsigned char SXQ4047[30];  // ע�� 
	unsigned char SXQ3722;      // ע�� 

	// ע�� 
	SXQ3101 = SXQ1795[0] - 0x40;

	if (SXQ3101 < 3)             // ע�� 
	{
		SXQ3155[SXQ3101] = 0;   // ע�� 

		// ע�� 
		SXQ3727 = SXQ1795[3] & 7;       // ע�� 

		if ((SXQ1069[SXQ3101] == OK) && (SXQ3727 != 5))  // ע�� 
		{
			SXQ1034[SXQ3101]++; // ע�� 
		}
		if (SXQ3727 == 5)        // ע�� 
		{
			SXQ1069[SXQ3101] = OK;      // ע�� 
			SXQ1034[SXQ3101] = 0;       // ע�� 
		}
		else if (SXQ1034[SXQ3101] >= 3)  // ע�� 
		{
			SXQ1069[SXQ3101] = 3;       // ע�� 
		}

		// ע�� 
		if ((SXQ1795[1] > 1) && (SXQ1795[1] < 24) && (SXQ1795[4] == SXQ1795[5]))
			// ע�� 
		{
			memcpy(SXQ4047, SXQ1795 + 4, SXQ1795[1]);
			SXQ4047[0] = SXQ1795[1];    // ע�� 
			SXQ4367 = SXQ1795[1];       // ע�� 
		}
		else
		{
			SXQ4367 = 0;        // ע�� 
		}

		if (SXQ4367 != 0)        // ע�� 
		{
			// ע�� 
			SXQ3722 = 0;
			SXQ3722 = SXQ1122(SXQ4047, SXQ1550[SXQ3101], SXQ4367);      // ע�� 

			if ((SXQ3722 == 1) || (SXQ4047[1] == HSXQ051) || (SXQ4047[1] == HSXQ060))   // ע�� 
			{
				memcpy(SXQ1550[SXQ3101], SXQ1795, SXQ4367);     // ע�� 
				memcpy(SXQ2525.SXQ4047, SXQ1795, SXQ4367 + 5);  // ע�� 

				// ע�� 
				SXQ3722 = SXQ1910(SXQ4047[1], 0, SXQ1222[SXQ3101], SXQ1795);
				if (SXQ3722 == 1)        // ע�� 
				{
					// ע�� 
					SXQ1222[SXQ3101] = 0;       // ע�� 
					SXQ1057[SXQ3101] = 0;       // ע�� 
					SXQ685[SXQ3101] = 0;        // ע�� 
				}

				// ע�� 
				SXQ2728.SXQ3107[0] = 0; // ע�� 
				SXQ2728.SXQ3107[1] = SXQ4047[1];        // ע�� 
				SXQ2728.SXQ3107[2] = SXQ3101 + 1;       // ע�� 
				if (((SXQ3722 == 1) || (SXQ4047[1] == HSXQ051) || (SXQ4047[1] == HSXQ060)) && (SXQ4367 > 2))    // ע�� 
				{
					memcpy(SXQ2728.SXQ3107 + 3, SXQ4047 + 2, SXQ4367 - 2);      // ע�� 
				}
				/* ע�� ****** */
				SXQ2728.SXQ2767 = tickGet();    // ע�� 
				msgQSend(SXQ1146, (char *)&SXQ2728, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);  // ע�� 
			}
		}
	}
}

/* ע�� ** */
/* ע��                 */
/* ע��                 */
/* ע��                 */
/* ע�� ** */
void SXQ3491::SXQ2002(void)
{
	int l, i, k;                // ע�� 

	unsigned char SXQ3444, SXQ3746;     // ע�� 
	union _SXQ2769 SXQ2769;     // ע�� 
	union _SXQ2526 SXQ2526;     // ע�� 
	unsigned char SXQ4423;      // ע�� 
	short SXQ2712;              // ע�� 
	unsigned char SXQ4427;      // ע�� 
	struct _SXQ2728 SXQ2728;    // ע�� 

	unsigned char SXQ1795[60];  // ע�� 
	unsigned char SXQ1491[20];  // ע�� 

	int SXQ3416 = 0;            // ע�� 

	int SXQ3365;                // ע�� 
	int SXQ1945;                // ע�� 
	unsigned char SXQ2741;      // ע�� 
	unsigned char SXQ2294[10][12];      // ע�� 
	unsigned char SXQ2295[10][3];       // ע�� 
	unsigned char SXQ3114[3];   // ע�� 

	for (l = 0; l < 12; l++)
	{
		SXQ3115[l] = 1;         // ע�� 
	}

	for (l = 0; l < 3; l++)
	{
		SXQ3114[l] = 1;         // ע�� 
	}

	/* ע�� ** */
	SXQ340 = msgQCreate(MAX_MSG_SCC, MSG_SIZE_SCC, MSG_Q_FIFO);

	/* ע�� ** */
	SXQ2769.SXQ1678.SXQ2741 = All_Lau;  // ע�� 
	SXQ2769.SXQ1678.SXQ3142 = 2;        // ע�� 
	SXQ2769.SXQ1678.SXQ3111 = 2;        // ע�� 
	SXQ2769.SXQ1678.SXQ3463 = 0;        // ע�� 

	for (i = 0; i < 2; i++)
	{
		SXQ2769.SXQ1678.SXQ2753[i] = HSXQ001;        // ע�� 
		SXQ2769.SXQ1678.SXQ2752[i] = HSXQ001;        // ע�� 
	}

	SXQ2769.SXQ1678.SXQ3417 = 0;        // ע�� 

	SXQ3365 = 9;                // ע�� 

	// ע�� 
	SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);       // ע�� 

	for (l = 0; l < 12; l++)
	{
		SXQ3444 = SXQ2440[l];
		SXQ2294[SXQ3444][l] = SXQ3365;  // ע�� 
		SXQ2033[SXQ3444][l][0] = 0x60 + l;      // ע�� 
		for (i = 1; i < SXQ3365; i++)
		{
			SXQ2033[SXQ3444][l][i] = SXQ2769.SXQ4047[i];        // ע�� 
		}
		SXQ3444++;
		SXQ2440[l] = SXQ3444;
		SXQ2833[l] = SXQ2440[l];
		SXQ2401[l]++;           // ע�� 
		SXQ3115[l]++;           // ע�� 
		SXQ1521[l] = HSXQ001;
		SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 
	}

	/* ע�� ** */
	SXQ2526.SXQ1423.SXQ2741 = All_Bait; // ע�� 
	SXQ2526.SXQ1423.SXQ2744 = 2;        // ע�� 
	SXQ2526.SXQ1423.SXQ3713 = 0;        // ע�� 
	SXQ2526.SXQ1423.SXQ3463 = 0;        // ע�� 

	for (i = 0; i < 2; i++)
	{
		SXQ2526.SXQ1423.SXQ2395[i] = HSXQ038;       // ע�� 
	}

	SXQ2526.SXQ1423.SXQ3417 = 0;        // ע�� 

	SXQ3365 = 7;                // ע�� 

	// ע�� 
	SXQ1945 = SXQ1915(CH3_BAIT, (char *)SXQ2526.SXQ4047, SXQ3365);      // ע�� 

	for (l = 0; l < 3; l++)
	{
		SXQ3444 = SXQ2441[l];
		SXQ2295[SXQ3444][l] = SXQ3365;  // ע�� 
		SXQ2034[SXQ3444][l][0] = 0x40 + l;      // ע�� 
		for (i = 1; i < 24; i++)
		{
			SXQ2034[SXQ3444][l][i] = SXQ2526.SXQ4047[i];        // ע�� 
		}
		SXQ3444++;
		SXQ2441[l] = SXQ3444;
		SXQ2834[l] = SXQ2441[l];
		SXQ3114[l]++;           // ע�� 
		SXQ1222[l] = HSXQ038;
		SXQ685[l] = SXQ464(SXQ1222[l]); // ע�� 
	}

	SXQ3416 = 0;                // ע�� 
	while (true)
	{
		// ע�� 
		semTake(SXQ1421, WAIT_FOREVER);
		SXQ3416++;

		// ע�� 
		for (l = 0; l < 12; l++) // ע�� 
		{
			if (SXQ1521[l] != 0) // ע�� 
			{
				SXQ1304[l]++;   // ע�� 
				if (SXQ1304[l] > SXQ855[l])      // ע�� 
				{
					// ע�� 
					SXQ2728.SXQ3107[0] = 0;     // ע�� 
					SXQ2728.SXQ3107[1] = SXQ1521[l];    // ע�� 
					SXQ2728.SXQ3107[2] = l + 1; // ע�� 
					SXQ2728.SXQ3107[3] = (unsigned char)ERROR;  // ע�� 
					/* ע�� ******* */
					SXQ2728.SXQ2767 = tickGet();        // ע�� 
					msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);      // ע�� 

					// ע�� 
					SXQ1521[l] = 0;     // ע�� 
					SXQ1304[l] = 0;     // ע�� 
					SXQ855[l] = 0;      // ע�� 
					SXQ1242[l] = 0;     // ע�� 
				}
			}
		}

		for (l = 0; l < 3; l++)  // ע�� 
		{
			if (SXQ1222[l] != 0) // ע�� 
			{
				SXQ1057[l]++;   // ע�� 
				if (SXQ1057[l] > SXQ685[l])      // ע�� 
				{
					// ע�� 
					SXQ2728.SXQ3107[0] = 0;     // ע�� 
					SXQ2728.SXQ3107[1] = SXQ1222[l];    // ע�� 
					SXQ2728.SXQ3107[2] = l + 1; // ע�� 
					SXQ2728.SXQ3107[3] = (unsigned char)ERROR;  // ע�� 
					/* ע�� ******* */
					SXQ2728.SXQ2767 = tickGet();        // ע�� 
					msgQSend(SXQ1146, (char *)&SXQ2728, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);      // ע�� 

					// ע�� 
					SXQ1222[l] = 0;     // ע�� 
					SXQ1057[l] = 0;     // ע�� 
					SXQ685[l] = 0;      // ע�� 
				}
			}
		}

		// ע�� 
		while (msgQReceive(SXQ340, (char *)SXQ1795, MSG_SIZE_SCC, 3 /*NO_WAIT */) != ERROR)     //s2sCs5s6s0s0sE
		{
			if (SXQ1795[1] == 250)       // ע�� 
			{
				switch (SXQ1795[2])
				{
				case 1:    // ע�� 
					memcpy(&SXQ2712, SXQ1795 + 4, 2);
					SXQ1194[SXQ1795[3] - 1].SXQ2889 = (char)(SXQ2712 / 3);
					memcpy(&SXQ2712, SXQ1795 + 6, 2);
					SXQ1194[SXQ1795[3] - 1].SXQ2896 = (char)(SXQ2712 / 3);
					break;
				default:
					break;
				}
			}
			else if (SXQ1795[1] == 70)   // ע�� 
			{
				// ע�� 
				SXQ1491[0] = SXQ1795[2];        // ע�� 
				SXQ1491[1] = SXQ1795[3];        // ע�� 
				SXQ1491[2] = 0; // ע�� 
				SXQ1491[3] = 0x05;      // ע�� 
				memcpy(SXQ1491 + 4, SXQ1795 + 4, (int)SXQ1795[3]);      // ע�� 

				SXQ1120(SXQ1491);       // ע�� 

				// ע�� 
				if ((SXQ1795[4] == HSXQ050) && (SXQ1795[5] == HSXQ050) && (SXQ2385 == 0))  // ע�� 
				{
					SXQ2385 = 2;        // ע�� 
				}
			}
			else                // ע�� 
			{
				SXQ3365 = 0;    // ע�� 
				/* ע�� ****** */
				if (((SXQ1795[1] >= 101) && (SXQ1795[1] <= 139) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 12)) || (SXQ1795[2] == 0x6F)))   // ע�� 
					|| ((SXQ1795[1] >= 171) && (SXQ1795[1] <= 199) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 3)) || (SXQ1795[2] == 0x4F))) // ע�� 
					)
				{
					if ((SXQ1795[1] >= 101) && (SXQ1795[1] <= 139) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 12)) || (SXQ1795[2] == 0x6F)))        // ע�� 
					{
						if (SXQ1795[2] != 0x6F)
						{
							SXQ2741 = 0x60 + SXQ1795[2] - 1;    // ע�� 
						}
						else
						{
							SXQ2741 = SXQ1795[2];       // ע�� 
						}
					}
					else if ((SXQ1795[1] >= 171) && (SXQ1795[1] <= 199) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 3)) || (SXQ1795[2] == 0x4F)))    // ע�� 
					{
						if (SXQ1795[2] != 0x4F)
						{
							SXQ2741 = 0x40 + SXQ1795[2] - 1;    // ע�� 
						}
						else
						{
							SXQ2741 = SXQ1795[2];       // ע�� 
						}
					}

					/* ע�� ******* */
					switch (SXQ1795[1])
					{
					case HSXQ001:       /* ע�� /*(1)sAsEs7s4101 9 bytes */
						SXQ2769.SXQ1678.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1678.SXQ3142 = 2;        // ע�� 
						SXQ2769.SXQ1678.SXQ3111 = 2;        // ע�� 
						SXQ2769.SXQ1678.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1678.SXQ2753[i] = HSXQ001;        // ע�� 
							SXQ2769.SXQ1678.SXQ2752[i] = HSXQ001;        // ע�� 
						}
						SXQ2769.SXQ1678.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 9;        // ע�� 
						break;
					case HSXQ002:    /* ע�� s6s1s1sBs7s4103 13 bytes */
						SXQ2769.SXQ1438.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
						SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
						SXQ2769.SXQ1438.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
							SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
						}
						SXQ2769.SXQ1438.SXQ2050 = SXQ1795[3];       // ע�� 
						SXQ2769.SXQ1438.SXQ797 = SXQ1795[4];        // ע�� 
						SXQ2769.SXQ1438.SXQ2051 = SXQ1795[3];       // ע�� 
						SXQ2769.SXQ1438.SXQ798 = SXQ1795[4];        // ע�� 
						SXQ2769.SXQ1438.SXQ2889 = 0;        // ע�� 
						SXQ2769.SXQ1438.SXQ2896 = 0;        // ע�� 
						SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 15;       // ע�� 
						break;
					case HSXQ003:   /* ע�� 5sCs9sFsEsEs7s4105 11 bytes */
						SXQ2769.SXQ758.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2769.SXQ758.SXQ3142 = 3; // ע�� 
						SXQ2769.SXQ758.SXQ3111 = 3; // ע�� 
						SXQ2769.SXQ758.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ758.SXQ2753[i] = HSXQ003;     // ע�� 
							SXQ2769.SXQ758.SXQ2752[i] = HSXQ003;     // ע�� 
						}
						SXQ2769.SXQ758.ucWorkmode1 = SXQ1795[3];    // ע�� 
						SXQ2769.SXQ758.ucWorkmode2 = SXQ1795[3];    // ע�� 
						SXQ2769.SXQ758.SXQ3417 = 0; // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ2413 = SXQ1795[3];  // ע�� 
							SXQ1194[SXQ4427].SXQ998 = 1;    // ע�� 
						}
						SXQ3365 = 11;       // ע�� 
						break;
					case HSXQ004:      /* ע�� s1s4s6sAs0s7s4107 9 bytes */
						SXQ2769.SXQ1437.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1437.SXQ3142 = 2;        // ע�� 
						SXQ2769.SXQ1437.SXQ3111 = 2;        // ע�� 
						SXQ2769.SXQ1437.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1437.SXQ2753[i] = HSXQ004;       // ע�� 
							SXQ2769.SXQ1437.SXQ2752[i] = HSXQ004;       // ע�� 
						}
						SXQ2769.SXQ1437.SXQ3417 = 0;        // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ998 = 2;    // ע�� 
						}
						SXQ3365 = 9;        // ע�� 
						break;
					case HSXQ005:   /* ע�� 1s4s6s5s7s7s6s7s4109 8 bytes */
						SXQ2769.SXQ754.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2769.SXQ754.SXQ3142 = 3; // ע�� 
						SXQ2769.SXQ754.SXQ3111 = 0; // ע�� 
						SXQ2769.SXQ754.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ754.SXQ2753[i] = HSXQ005;     // ע�� 
						}
						if (SXQ1795[3] == 1)
						{
							SXQ2769.SXQ754.SXQ2067 = 0x7;   // ע�� 
						}
						else        // ע�� 
						{
							SXQ2769.SXQ754.SXQ2067 = 0x70;  // ע�� 
							// ע�� 
							SXQ4427 = SXQ1795[2] - 1;
							if (SXQ4427 < 12)
							{
								// ע�� 
								if (SXQ1521[SXQ4427] == 109)
								{
									// ע�� 
									SXQ1521[SXQ4427] = 0;   // ע�� 
									SXQ1304[SXQ4427] = 0;   // ע�� 
									SXQ855[SXQ4427] = 0;    // ע�� 
									SXQ1242[SXQ4427] = 0;   // ע�� 
								}
							}
						}
						SXQ2769.SXQ754.SXQ3417 = 0; // ע�� 
						SXQ3365 = 8;        // ע�� 
						break;
					case HSXQ006:    /* ע�� s7s6s6s1s0s5s7s4111 7 bytes */
						SXQ2769.SXQ942.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2769.SXQ942.SXQ3142 = 0; // ע�� 
						SXQ2769.SXQ942.SXQ3111 = 2; // ע�� 
						SXQ2769.SXQ942.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ942.SXQ2752[i] = HSXQ006;      // ע�� 
						}
						SXQ2769.SXQ942.SXQ3417 = 0; // ע�� 
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ007:     /* ע�� s6s2s0sBsDs7s4113 45 bytes */
						SXQ2769.SXQ1171.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1171.SXQ3142 = 6;        // ע�� 
						SXQ2769.SXQ1171.SXQ3111 = 32;       // ע�� 
						SXQ2769.SXQ1171.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1171.SXQ2753[i] = HSXQ007;      // ע�� 
							SXQ2769.SXQ1171.SXQ2752[i] = HSXQ007;      // ע�� 
						}
						memcpy(SXQ2769.SXQ4047 + 12, SXQ1795 + 3, 30);      // ע�� 
						// ע�� 
						SXQ2769.SXQ1171.SXQ1956 = SXQ2769.SXQ1171.SXQ1957;  /* ע�� itTrans.SXQ1957;/*s1s4s6sAs1s0sE,sEs3s7s9s2sCsAs6s8sAs3.s5sD:s2s6,-10800-10800 */
						SXQ2769.SXQ1171.SXQ926 = SXQ2769.SXQ1171.SXQ927;    /* ע�� ErectAngle1=SXQ2769.SXQ1171.SXQ927;/* s1s4s6s7s6s2,s5sD:s2s6s6,-600-6600 */
						SXQ2769.SXQ1171.SXQ3417 = 0;        // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ998 = 3;    // ע�� 
							// ע�� 
							SXQ1194[SXQ4427].SXQ2889 = SXQ2769.SXQ1171.SXQ2889;
							SXQ1194[SXQ4427].SXQ2896 = SXQ2769.SXQ1171.SXQ2896;
						}
						SXQ3365 = 43;       // ע�� 
						break;
					case HSXQ008:       /* ע�� sFs4sD/sDs4sDs7s4115 9 bytes */
						SXQ2769.SXQ1439.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1439.SXQ3142 = 0;        // ע�� 
						SXQ2769.SXQ1439.SXQ3111 = 7;        // ע�� 
						SXQ2769.SXQ1439.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1439.SXQ2752[i] = HSXQ008;        // ע�� 
						}
						SXQ2769.SXQ1439.SXQ2438 = SXQ1795[3];       // ע�� 
						for (i = 0; i < 4; i++)
						{
							SXQ2769.SXQ1439.SXQ4423[i] = SXQ1795[4 + i];    /* ע�� +i];/*sCs9s9sDs7sCsFs1sCs9s0s4sD;s5sBsBs9s0s1sCs9s6s4s1sCs9 */
						}
						SXQ2769.SXQ1439.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 12;       // ע�� 
						break;
					case HSXQ009:  /* ע�� s0s5/sDs5s7s4117 10 bytes */
						SXQ2769.SXQ2341.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ2341.SXQ3142 = 0;        // ע�� 
						SXQ2769.SXQ2341.SXQ3111 = 10;       // ע�� 
						SXQ2769.SXQ2341.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ2341.SXQ2752[i] = HSXQ009;   // ע�� 
						}
						SXQ2769.SXQ2341.SXQ2069 = SXQ1795[3];       // ע�� 
						SXQ2769.SXQ2341.SXQ2438 = SXQ1795[4];       /* ע��
																	ע��
																	ע�� */
						for (i = 0; i < 4; i++)
						{
							SXQ2769.SXQ2341.SXQ4423[i] = SXQ1795[5 + i];    /* ע�� ;/*sCs9s9sDs7sCsFs1sCs9s0s4sD;s5sBsBs9s0s1sCs9s6s4s1sCs9 */
						}
						SXQ2769.SXQ2341.SXQ1816 = SXQ1795[9];
						SXQ2769.SXQ2341.SXQ1817 = SXQ1795[10];

						SXQ2769.SXQ2341.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 15;       // ע�� 
						break;
					case HSXQ010:     /* ע�� 0)s1s7s3s1s7s4119 7 bytes */
						SXQ2769.SXQ1963.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1963.SXQ3142 = 0;        // ע�� 
						SXQ2769.SXQ1963.SXQ3111 = 2;        // ע�� 
						SXQ2769.SXQ1963.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1963.SXQ2752[i] = HSXQ010;      // ע�� 
						}
						SXQ2769.SXQ1963.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ011:  /* ע�� 9s0s5s5s2s7s4121 8 bytes */
						SXQ2769.SXQ761.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2769.SXQ761.SXQ3142 = 0; // ע�� 
						SXQ2769.SXQ761.SXQ3111 = 6; // ע�� 
						SXQ2769.SXQ761.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ761.SXQ2752[i] = HSXQ011;    // ע�� 
						}
						for (i = 0; i < 4; i++)
						{
							SXQ2769.SXQ761.SXQ4423[i] = SXQ1795[3 + i];     // ע�� 
						}
						SXQ2769.SXQ761.SXQ3417 = 0; // ע�� 
						SXQ3365 = 11;       // ע�� 
						break;
					case HSXQ012:    /* ע�� s9s1s4s7s4123 45sAs7s2 */
						SXQ2769.SXQ1679.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1679.SXQ3142 = 0;        // ע�� 
						SXQ2769.SXQ1679.SXQ3111 = 40;       // ע�� 
						SXQ2769.SXQ1679.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1679.SXQ2752[i] = HSXQ012;     // ע�� 
						}
						// ע�� 
						memcpy(SXQ2769.SXQ4047 + 6, SXQ1795 + 3, 36);       // ע�� 
						// ע�� 
						SXQ2769.SXQ1679.SXQ2420 = 0;
						for (i = 0; i < 36; i++)
						{
							SXQ2769.SXQ1679.SXQ2420 += SXQ2769.SXQ4047[i + 6];
						}
						SXQ2769.SXQ1679.SXQ3417 = 0;        // ע�� 
						// ע�� 
						SXQ4423 = SXQ2769.SXQ1679.SXQ4423;
						if (((SXQ2769.SXQ1679.SXQ3451 & 0x3f) < 32) && ((SXQ4423 & 0x0f) == ((SXQ4423 & 0xf0) / 0x10)))      /* ע�� tSXQ4664LauComm.SXQ3451&0x3f)<32) && ((SXQ4423&0x0f)==((SXQ4423&0xf0)/0x10))) /*sCs9s0s0s1s9s8sCsA0-31 */
						{
							SXQ4423 = SXQ4423 & 0x0f;       // ע�� 
							SXQ4423 = SXQ4423 + (SXQ1795[2] - 1) * 8;       // ע�� 

							SXQ1251[SXQ4423] = SXQ2769.SXQ1679.SXQ3451 & 0x3f;      // ע�� 
						}
						SXQ3365 = 45;       // ע�� 
						break;
					case HSXQ013:    /* ע�� 4s6s4sAsBs5s7s4129 11 bytes */
						SXQ2769.SXQ943.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2769.SXQ943.SXQ3142 = 3; // ע�� 
						SXQ2769.SXQ943.SXQ3111 = 4; // ע�� 
						SXQ2769.SXQ943.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ943.SXQ2753[i] = HSXQ013;      // ע�� 
							SXQ2769.SXQ943.SXQ2752[i] = HSXQ013;      // ע�� 
						}
						SXQ2769.SXQ943.SXQ2856 = SXQ1795[3];        // ע�� 
						SXQ2769.SXQ943.SXQ2504 = SXQ1795[4];        // ע�� 
						SXQ2769.SXQ943.SXQ2505 = SXQ1795[5];        // ע�� 
						SXQ2769.SXQ943.SXQ3417 = 0; // ע�� 
						SXQ3365 = 12;       // ע�� 
						break;
					case HSXQ014:        /* ע�� BsFs0sAs7s4133 9 bytes */
						SXQ2769.SXQ1977.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1977.SXQ3142 = 2;        // ע�� 
						SXQ2769.SXQ1977.SXQ3111 = 2;        // ע�� 
						SXQ2769.SXQ1977.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1977.SXQ2753[i] = HSXQ014; // ע�� 
							SXQ2769.SXQ1977.SXQ2752[i] = HSXQ014; // ע�� 
						}
						SXQ2769.SXQ1977.SXQ3417 = 0;        // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ2413 = 0;   // ע�� 
							SXQ1194[SXQ4427].SXQ998 = 0;    // ע�� 
						}
						else if (SXQ1795[2] == 0x6F)
						{
							for (i = 0; i < 12; i++)
							{
								SXQ1194[i].SXQ2413 = 0;     // ע�� 
								SXQ1194[i].SXQ998 = 0;      // ע�� 
							}
						}
						SXQ3365 = 9;        // ע�� 
						break;
					case HSXQ015:      /* ע�� 1s0s5s3sCs7s4135 11 bytes */
						SXQ2769.SXQ2366.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ2366.SXQ3142 = 0;        // ע�� 
						SXQ2769.SXQ2366.SXQ3111 = 3;        // ע�� 
						SXQ2769.SXQ2366.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ2366.SXQ2752[i] = HSXQ015;       // ע�� 
						}
						SXQ2769.SXQ2366.SXQ3416 = SXQ1795[3];       // ע�� 
						SXQ2769.SXQ2366.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 8;        // ע�� 
						break;
					case HSXQ016:    /* ע�� /*(15)s6sEs7s4137 11 bytes */
						SXQ2769.SXQ941.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2769.SXQ941.SXQ3142 = 3; // ע�� 
						SXQ2769.SXQ941.SXQ3111 = 3; // ע�� 
						SXQ2769.SXQ941.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ941.SXQ2753[i] = HSXQ016;      // ע�� 
							SXQ2769.SXQ941.SXQ2752[i] = HSXQ016;      // ע�� 
						}
						SXQ2769.SXQ941.SXQ3417 = 0; // ע�� 
						SXQ2769.SXQ941.SXQ663 = SXQ1795[3]; // ע�� 
						SXQ2769.SXQ941.SXQ664 = SXQ1795[3]; // ע�� 
						SXQ3365 = 11;       // ע�� 
						break;
					case HSXQ017:
						SXQ2769.SXQ1173.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2769.SXQ1173.SXQ3142 = 2;        // ע�� 
						SXQ2769.SXQ1173.SXQ3111 = 0;        // ע�� 
						SXQ2769.SXQ1173.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1173.SXQ2753[i] = HSXQ017;      // ע�� 
						}
						SXQ2769.SXQ1173.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ038:      /* ע�� /*(1)sAsEs7s4171  7 bytes */
						SXQ2526.SXQ1423.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2526.SXQ1423.SXQ2744 = 2;        // ע�� 
						SXQ2526.SXQ1423.SXQ3713 = 0;        // ע�� 
						SXQ2526.SXQ1423.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1423.SXQ2395[i] = HSXQ038;       // ע�� 
						}
						SXQ2526.SXQ1423.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ039:   /* ע�� Cs8s6s1s1sBs7s4173 9 bytes */
						SXQ2526.SXQ1158.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2526.SXQ1158.SXQ2744 = 4;        // ע�� 
						SXQ2526.SXQ1158.SXQ3713 = 0;        // ע�� 
						SXQ2526.SXQ1158.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ע�� 
						}
						SXQ2526.SXQ1158.SXQ2413 = SXQ1795[3];       // ע�� 
						SXQ2526.SXQ1158.SXQ998 = SXQ1795[4];        // ע�� 
						// ע�� 
						SXQ2526.SXQ1158.SXQ3417 = 0;        // ע�� 
						SXQ3365 = 9;        // ע�� 
						break;
					case HSXQ040:  /* ע�� 3)sBsFs5sCs9sFsEsE175 8 bytes */
						SXQ2526.SXQ605.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ605.SXQ2744 = 3; // ע�� 
						SXQ2526.SXQ605.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ605.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ605.SXQ2395[i] = HSXQ040;    // ע�� 
						}
						SXQ2526.SXQ605.SXQ2413 = SXQ1795[3];        // ע�� 
						SXQ2526.SXQ605.SXQ3417 = 0; // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ2413 = SXQ1795[3];   // ע�� 
							SXQ957[SXQ4427].SXQ998 = 1;     // ע�� 
						}
						SXQ3365 = 8;        // ע�� 
						break;
					case HSXQ041:     /* ע�� )s1s5s6sAs0s7s4177 7 bytes */
						SXQ2526.SXQ1157.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2526.SXQ1157.SXQ2744 = 2;        // ע�� 
						SXQ2526.SXQ1157.SXQ3713 = 0;        // ע�� 
						SXQ2526.SXQ1157.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1157.SXQ2395[i] = HSXQ041;      // ע�� 
						}
						SXQ2526.SXQ1157.SXQ3417 = 0;        // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ998 = 2;     // ע�� 
						}
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ042:    /* ע�� Bs6s2s0sBsDs7s4179 19 bytes */
						SXQ2526.SXQ928.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ928.SXQ2744 = 14;        // ע�� 
						SXQ2526.SXQ928.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ928.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ928.SXQ2395[i] = HSXQ042;      // ע�� 
						}
						memcpy(SXQ2526.SXQ4047 + 6, SXQ1795 + 3, 12);       // ע�� 
						// ע�� 
						SXQ2526.SXQ928.SXQ2420 = 0;
						for (i = 0; i < 10; i++)
						{
							SXQ2526.SXQ928.SXQ2420 += SXQ2526.SXQ4047[i + 6];
						}
						SXQ2526.SXQ928.SXQ3417 = 0; // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ998 = 3;     // ע�� 
						}
						SXQ3365 = 19;       // ע�� 
						break;
					case HSXQ043:   /* ע�� /s9s9s1sFsEsEs7s4181 9 bytes */
						SXQ2526.SXQ746.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ746.SXQ2744 = 4; // ע�� 
						SXQ2526.SXQ746.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ746.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ746.SXQ2395[i] = HSXQ043;     // ע�� 
						}
						SXQ2526.SXQ746.SXQ1515 = SXQ1795[3];        // ע�� 
						SXQ2526.SXQ746.SXQ3418 = SXQ1795[4];        // ע�� 
						SXQ2526.SXQ746.SXQ3417 = 0; // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ998 = 4;     // ע�� 
						}
						SXQ3365 = 9;        // ע�� 
						break;
					case HSXQ044:   // ע�� 
						SXQ2526.SXQ741.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ741.SXQ2744 = 2; // ע�� 
						SXQ2526.SXQ741.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ741.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ741.SXQ2395[i] = HSXQ044;     // ע�� 
						}
						SXQ2526.SXQ741.SXQ3417 = 0; // ע�� 
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ045:    /* ע�� 0s8sB/sDs8sBs7s4185 8 bytes */
						SXQ2526.SXQ930.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ930.SXQ2744 = 3; // ע�� 
						SXQ2526.SXQ930.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ930.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ930.SXQ2395[i] = HSXQ045;      // ע�� 
						}
						SXQ2526.SXQ930.SXQ2069 = SXQ1795[3];        // ע�� 
						SXQ2526.SXQ930.SXQ3417 = 0; // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							if (SXQ1795[3] == 0x7)   // ע�� 
							{
								SXQ957[SXQ4427].SXQ998 = 5; // ע�� 
							}
							else
							{
								SXQ957[SXQ4427].SXQ998 = 4; // ע�� 
							}
						}
						SXQ3365 = 8;        // ע�� 
						break;
					case HSXQ046:        /* ע�� s1sFsBsFs7s4187 8 bytes */
						SXQ2526.SXQ1960.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2526.SXQ1960.SXQ2744 = 3;        // ע�� 
						SXQ2526.SXQ1960.SXQ3713 = 0;        // ע�� 
						SXQ2526.SXQ1960.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1960.SXQ2395[i] = HSXQ046; // ע�� 
						}
						SXQ2526.SXQ1960.SXQ2068 = SXQ1795[3];       // ע�� 
						SXQ2526.SXQ1960.SXQ3417 = 0;        // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							if (SXQ1795[3] == 0x7)   // ע�� 
							{
								SXQ957[SXQ4427].SXQ998 = 6; // ע�� 
							}
							else
							{
								SXQ957[SXQ4427].SXQ998 = 5; // ע�� 
							}
						}
						SXQ3365 = 8;        // ע�� 
						break;
					case HSXQ047:   /* ע�� s5s6s4sAsBs5s7s4189         8 bytes */
						SXQ2526.SXQ743.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ743.SXQ2744 = 2; // ע�� 
						SXQ2526.SXQ743.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ743.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ743.SXQ2395[i] = HSXQ047;     // ע�� 
						}
						SXQ2526.SXQ743.SXQ3417 = 0; // ע�� 
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ048:       /* ע�� )sBsFs0sAs7s4193 7 bytes */
						SXQ2526.SXQ1671.SXQ2741 = SXQ2741;  // ע�� 
						SXQ2526.SXQ1671.SXQ2744 = 2;        // ע�� 
						SXQ2526.SXQ1671.SXQ3713 = 0;        // ע�� 
						SXQ2526.SXQ1671.SXQ3463 = 0;        // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1671.SXQ2395[i] = HSXQ048;        // ע�� 
						}
						SXQ2526.SXQ1671.SXQ3417 = 0;        // ע�� 
						SXQ4427 = SXQ1795[2] - 1;   // ע�� 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ2413 = SXQ1795[3];   // ע�� 
							SXQ957[SXQ4427].SXQ998 = 0;     // ע�� 
						}
						else if (SXQ1795[2] == 0x4F)
						{
							for (i = 0; i < 3; i++)
							{
								SXQ957[i].SXQ2413 = 0;      // ע�� 
								SXQ957[i].SXQ998 = 0;       // ע�� 
							}
						}
						SXQ3365 = 7;        // ע�� 
						break;
					case HSXQ049:   /* ע�� k: /*(11)s6sEs7s4197 8 bytes */
						SXQ2526.SXQ742.SXQ2741 = SXQ2741;   // ע�� 
						SXQ2526.SXQ742.SXQ2744 = 3; // ע�� 
						SXQ2526.SXQ742.SXQ3713 = 0; // ע�� 
						SXQ2526.SXQ742.SXQ3463 = 0; // ע�� 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ742.SXQ2395[i] = HSXQ049;     // ע�� 
						}
						SXQ2526.SXQ742.SXQ811 = SXQ1795[3]; // ע�� 
						SXQ2526.SXQ742.SXQ3417 = 0; // ע�� 
						SXQ3365 = 8;        // ע�� 
						break;
					default:
						SXQ3365 = 0;        // ע�� 
						break;
					}

					if (SXQ3365 > 0)     // ע�� 
					{
						// ע�� 
						switch (SXQ2741)        // ע�� 
						{
						case All_Lau:      // ע�� 
							for (l = 0; l < 12; l++)
							{
								SXQ3444 = SXQ2440[l];
								SXQ2033[SXQ3444][l][0] = 0x60 + l;  // ע�� 
								for (i = 1; i < SXQ3365; i++)
								{
									SXQ2033[SXQ3444][l][i] = SXQ2769.SXQ4047[i];
								}
								SXQ2294[SXQ3444][l] = SXQ3365;      // ע�� 
								SXQ3444++;
								if (SXQ3444 >= 10)
								{
									SXQ3444 = 0;    // ע�� 
								}
								SXQ2440[l] = SXQ3444;
							}
							break;
						case All_Bait:     // ע�� 
							for (l = 0; l < 3; l++)
							{
								SXQ3444 = SXQ2441[l];
								SXQ2034[SXQ3444][l][0] = 0x40 + l;  // ע�� 
								for (i = 1; i < SXQ3365; i++)
								{
									SXQ2034[SXQ3444][l][i] = SXQ2526.SXQ4047[i];
								}
								SXQ2295[SXQ3444][l] = SXQ3365;      // ע�� 
								SXQ3444++;
								if (SXQ3444 >= 10)
								{
									SXQ3444 = 0;    // ע�� 
								}
								SXQ2441[l] = SXQ3444;
							}
							break;
						case 0x60: // ע�� 
						case 0x61: // ע�� 
						case 0x62: // ע�� 
						case 0x63: // ע�� 
						case 0x64: // ע�� 
						case 0x65: // ע�� 
						case 0x66: // ע�� 
						case 0x67: // ע�� 
						case 0x68: // ע�� 
						case 0x69: // ע�� 
						case 0x6a: // ע�� 
						case 0x6b: // ע�� 
							l = SXQ2741 - 0x60;
							if ((SXQ2769.SXQ1439.SXQ2752[0] == HSXQ008) || (SXQ2769.SXQ1963.SXQ2752[0] == HSXQ010) || (SXQ2769.SXQ1679.SXQ2752[0] == HSXQ012))
								// ע�� 
							{
								if (SXQ1521[l] == HSXQ009)   // ע�� 
								{
									// ע�� 
									SXQ3746 = SXQ2833[l];
									SXQ3444 = SXQ2440[l];
									memcpy(SXQ2033[SXQ3746][l], SXQ2769.SXQ4047, SXQ3365);
									SXQ2294[SXQ3746][l] = SXQ3365;  // ע�� 
									if (SXQ3746 == SXQ3444)
									{
										SXQ3444++;
										if (SXQ3444 >= 10)
										{
											SXQ3444 = 0;    // ע�� 
										}
										if (SXQ3746 == 0)
										{
											SXQ3746 = 10;
										}
										SXQ3746--;
									}
									memcpy(SXQ2033[SXQ3444][l], SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
									SXQ2294[SXQ3444][l] = SXQ2294[SXQ3746][l];      // ע�� 
									// ע�� 
									SXQ1521[l] = 0; // ע�� 
									SXQ1304[l] = 0; // ע�� 
									SXQ855[l] = 0;  // ע�� 
									SXQ1242[l] = 0; // ע�� 
								}
								else if ((SXQ1521[l] == 0) && (SXQ2833[l] != SXQ2440[l]) && (SXQ2033[SXQ2833[l]][l][4] == HSXQ009))
								{
									// ע�� 
									SXQ3746 = SXQ2833[l];
									SXQ3444 = SXQ2440[l];
									memcpy(SXQ2033[SXQ3444][l], SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
									SXQ2294[SXQ3444][l] = SXQ2294[SXQ3746][l];      // ע�� 
									memcpy(SXQ2033[SXQ3746][l], SXQ2769.SXQ4047, SXQ3365);
									SXQ2294[SXQ3746][l] = SXQ3365;  // ע�� 
								}
								else
								{
									SXQ3444 = SXQ2440[l];
									memcpy(SXQ2033[SXQ3444][l], SXQ2769.SXQ4047, SXQ3365);
									SXQ2294[SXQ3444][l] = SXQ3365;  // ע�� 
								}
							}
							else
							{
								SXQ3444 = SXQ2440[l];
								memcpy(SXQ2033[SXQ3444][l], SXQ2769.SXQ4047, SXQ3365);
								SXQ2294[SXQ3444][l] = SXQ3365;      // ע�� 
							}
							SXQ3444++;
							if (SXQ3444 >= 10)
							{
								SXQ3444 = 0;        // ע�� 
							}
							SXQ2440[l] = SXQ3444;
							break;
						case 0x40: // ע�� 
						case 0x41: // ע�� 
						case 0x42: // ע�� 
							l = SXQ2741 - 0x40;
							SXQ3444 = SXQ2441[l];
							memcpy(SXQ2034[SXQ3444][l], SXQ2526.SXQ4047, SXQ3365);
							SXQ2295[SXQ3444][l] = SXQ3365;  // ע�� 
							SXQ3444++;
							if (SXQ3444 >= 10)
							{
								SXQ3444 = 0;        // ע�� 
							}
							SXQ2441[l] = SXQ3444;
							break;
						default:
							break;
						}
					}
				}
			}
		}

		/* ע�� **** */
		/* ע��                                 */
		/* ע�� **** */
		if (((((SXQ3416 + 1) % 4) == 0) && (SXQ1935 == 0)) || ((SXQ1935 != 0) && ((SXQ1935 % 4) == 2)))  // ע�� 
		{
			// ע�� 
			l = 0;
			if ((SXQ2833[l] != SXQ2440[l]) &&    // ע�� 
				((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

				// ע�� 
				if (SXQ1521[l] == 0)     // ע�� 
				{
					memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
					if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ע�� 
					{
						SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ע�� 
						SXQ1304[l] = 0; // ע�� 
						SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 
						SXQ1242[l] = 1; // ע�� 
					}
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ע�� 
				}
				SXQ2833[l] = SXQ3746;
				SXQ2401[l] = 1;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if ((SXQ2833[l] != SXQ2440[l]) &&       // ע�� 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

				// ע�� 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if ((SXQ2833[l] == SXQ2440[l]) &&       // ע�� 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ע�� 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if (SXQ1521[l] == 0)
			{
				SXQ1194[l].SXQ4071 += 4;
				if (SXQ1194[l].SXQ4071 >= 60)    // ע�� 
				{
					SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ע�� 
					SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
					SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
					SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
						SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
					}
					SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ע�� 
					SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ע�� 
					SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ע�� 
					SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ע�� 
					SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ע�� 
					SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ע�� 
					SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
					SXQ3365 = 15;       // ע�� 

					// ע�� 
					SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
					// ע�� 

					SXQ1194[l].SXQ4071 = 0;     // ע�� 
					SXQ3115[l]++;       // ע�� 
					if (SXQ3115[l] > 7)
					{
						SXQ3115[l] = 0;
					}
					SXQ3455[l]++;       // ע�� 
				}
			}
			taskDelay(10);

			// ע�� 
			if ((SXQ2834[0] != SXQ2441[0]) &&    // ע�� 
				((SXQ1222[0] == 0) || (SXQ1222[0] == SXQ2034[SXQ2834[0]][0][4])))        // ע�� 
			{
				SXQ3746 = SXQ2834[0];
				SXQ2034[SXQ3746][0][3] = SXQ3114[0] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][0], SXQ2295[SXQ3746][0]);
				if (SXQ1222[0] == 0)     // ע�� 
				{
					SXQ1222[0] = SXQ2034[SXQ3746][0][4];        // ע�� 
					SXQ1057[0] = 0;     // ע�� 
					SXQ685[0] = SXQ464(SXQ1222[0]);     // ע�� 
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ע�� 
				}
				SXQ2834[0] = SXQ3746;
				SXQ2402[0] = 1;
				SXQ957[0].SXQ4071 = 0;  // ע�� 
				SXQ3114[0]++;   // ע�� 
				if (SXQ3114[0] > 7)
				{
					SXQ3114[0] = 0;
				}
				SXQ3155[0]++;   // ע�� 
			}
			else if ((SXQ2834[0] != SXQ2441[0]) &&       // ע�� 
				(SXQ1222[0] != 0) && (SXQ1057[0] < SXQ685[0]))      // ע�� 
			{
				SXQ3746 = SXQ2834[0];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][0][3] = SXQ3114[0] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][0], SXQ2295[SXQ3746][0]);
				SXQ2402[0]++;
				SXQ957[0].SXQ4071 = 0;  // ע�� 
				SXQ3114[0]++;   // ע�� 
				if (SXQ3114[0] > 7)
				{
					SXQ3114[0] = 0;
				}
				SXQ3155[0]++;   // ע�� 
			}
			else if ((SXQ2834[0] == SXQ2441[0]) &&       // ע�� 
				(SXQ1222[0] != 0) && (SXQ1057[0] < SXQ685[0]))      // ע�� 
			{
				SXQ3746 = SXQ2834[0];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][0][3] = SXQ3114[0] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][0], SXQ2295[SXQ3746][0]);
				SXQ2402[0]++;
				SXQ957[0].SXQ4071 = 0;  // ע�� 
				SXQ3114[0]++;   // ע�� 
				if (SXQ3114[0] > 7)
				{
					SXQ3114[0] = 0;
				}
				SXQ3155[0]++;   // ע�� 
			}
			else
			{
				SXQ957[0].SXQ4071 += 4;
				if (SXQ957[0].SXQ4071 >= 100)    // ע�� 
				{
					SXQ2526.SXQ1158.SXQ2741 = 0x40;     // ע�� 
					SXQ2526.SXQ1158.SXQ2744 = 4;        // ע�� 
					SXQ2526.SXQ1158.SXQ3713 = 0;        // ע�� 
					SXQ2526.SXQ1158.SXQ3463 = SXQ3114[0] << 5;  // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ע�� 
					}
					SXQ2526.SXQ1158.SXQ2413 = SXQ957[0].SXQ2413;        // ע�� 
					SXQ2526.SXQ1158.SXQ998 = SXQ957[0].SXQ998;  // ע�� 
					SXQ2526.SXQ1158.SXQ3417 = 0;        // ע�� 
					SXQ3365 = 9;        // ע�� 
					// ע�� 
					SXQ1913(SXQ2385, (char *)SXQ2526.SXQ4047, SXQ3365);

					SXQ437[0]++;        // ע�� 

					SXQ957[0].SXQ4071 = 0;      // ע�� 
					SXQ3114[0]++;       // ע�� 
					if (SXQ3114[0] > 7)
					{
						SXQ3114[0] = 0;
					}
					SXQ3155[0]++;       // ע�� 
				}
			}

			taskDelay(10);

			// ע�� 
			for (l = 1; l < 12; l++)
			{
				if ((l == 1) || (l == 6) || (l == 8))
				{
					if ((SXQ2833[l] != SXQ2440[l]) &&    // ע�� 
						((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

						// ע�� 
						if (SXQ1521[l] == 0)     // ע�� 
						{
							memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
							if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ע�� 
							{
								SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ע�� 
								SXQ1304[l] = 0; // ע�� 
								SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 
								SXQ1242[l] = 1; // ע�� 
							}
						}
						SXQ3746++;
						if (SXQ3746 >= 10)
						{
							SXQ3746 = 0;        // ע�� 
						}
						SXQ2833[l] = SXQ3746;
						SXQ2401[l] = 1;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if ((SXQ2833[l] != SXQ2440[l]) &&       // ע�� 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

						// ע�� 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if ((SXQ2833[l] == SXQ2440[l]) &&       // ע�� 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ע�� 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if (SXQ1521[l] == 0)
					{
						SXQ1194[l].SXQ4071 += 4;
						if (SXQ1194[l].SXQ4071 >= 60)    // ע�� 
						{
							SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ע�� 
							SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
							SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
							SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ע�� 
							for (i = 0; i < 2; i++)
							{
								SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
								SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
							}
							SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ע�� 
							SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ע�� 
							SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ע�� 
							SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ע�� 
							SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ע�� 
							SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ע�� 
							SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
							SXQ3365 = 15;       // ע�� 

							// ע�� 
							SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
							// ע�� 

							SXQ1194[l].SXQ4071 = 0;     // ע�� 
							SXQ3115[l]++;       // ע�� 
							if (SXQ3115[l] > 7)
							{
								SXQ3115[l] = 0;
							}
							SXQ3455[l]++;       // ע�� 
						}
					}
					if ((l == 1) || (l == 6))
					{
						taskDelay(DelayTime);
					}
				}
			}
		}
		if (((((SXQ3416 + 2) % 4) == 0) && (SXQ1935 == 0)) || ((SXQ1935 != 0) && ((SXQ1935 % 4) == 3)))  // ע�� 
		{
			// ע�� 
			l = 2;
			if ((SXQ2833[l] != SXQ2440[l]) &&    // ע�� 
				((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ע�� 
				if (SXQ1521[l] == 0)     // ע�� 
				{
					memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

					if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ע�� 
					{
						SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ע�� 
						SXQ1304[l] = 0; // ע�� 
						SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 

						SXQ1242[l] = 1; // ע�� 
					}
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ע�� 
				}
				SXQ2833[l] = SXQ3746;
				SXQ2401[l] = 1;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if ((SXQ2833[l] != SXQ2440[l]) &&       // ע�� 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

				// ע�� 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if ((SXQ2833[l] == SXQ2440[l]) &&       // ע�� 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ע�� 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if (SXQ1521[l] == 0)
			{
				SXQ1194[l].SXQ4071 += 4;
				if (SXQ1194[l].SXQ4071 >= 60)    // ע�� 
				{
					SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ע�� 
					SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
					SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
					SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
						SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
					}
					SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ע�� 
					SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ע�� 
					SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ע�� 
					SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ע�� 
					SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ע�� 
					SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ע�� 
					SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
					SXQ3365 = 15;       // ע�� 

					// ע�� 
					SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
					// ע�� 
					SXQ1194[l].SXQ4071 = 0;     // ע�� 
					SXQ3115[l]++;       // ע�� 
					if (SXQ3115[l] > 7)
					{
						SXQ3115[l] = 0;
					}
					SXQ3455[l]++;       // ע�� 
				}
			}
			taskDelay(10);

			// ע�� 
			if ((SXQ2834[1] != SXQ2441[1]) &&    // ע�� 
				((SXQ1222[1] == 0) || (SXQ1222[1] == SXQ2034[SXQ2834[1]][1][4])))        // ע�� 
			{
				SXQ3746 = SXQ2834[1];
				SXQ2034[SXQ3746][1][3] = SXQ3114[1] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][1], SXQ2295[SXQ3746][1]);
				if (SXQ1222[1] == 0)     // ע�� 
				{
					SXQ1222[1] = SXQ2034[SXQ3746][1][4];        // ע�� 
					SXQ1057[1] = 0;     // ע�� 
					SXQ685[1] = SXQ464(SXQ1222[1]);     // ע�� 
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ע�� 
				}
				SXQ2834[1] = SXQ3746;
				SXQ2402[1] = 1;
				SXQ957[1].SXQ4071 = 0;  // ע�� 
				SXQ3114[1]++;   // ע�� 
				if (SXQ3114[1] > 7)
				{
					SXQ3114[1] = 0;
				}
				SXQ3155[1]++;   // ע�� 
			}
			else if ((SXQ2834[1] != SXQ2441[1]) &&       // ע�� 
				(SXQ1222[1] != 0) && (SXQ1057[1] < SXQ685[1]))      // ע�� 
			{
				SXQ3746 = SXQ2834[1];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][1][3] = SXQ3114[1] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][1], SXQ2295[SXQ3746][1]);
				SXQ2402[1]++;
				SXQ957[1].SXQ4071 = 0;  // ע�� 
				SXQ3114[1]++;   // ע�� 
				if (SXQ3114[1] > 7)
				{
					SXQ3114[1] = 0;
				}
				SXQ3155[1]++;   // ע�� 
			}
			else if ((SXQ2834[1] == SXQ2441[1]) &&       // ע�� 
				(SXQ1222[1] != 0) && (SXQ1057[1] < SXQ685[1]))      // ע�� 
			{
				SXQ3746 = SXQ2834[1];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][1][3] = SXQ3114[1] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][1], SXQ2295[SXQ3746][1]);
				SXQ2402[1]++;
				SXQ957[1].SXQ4071 = 0;  // ע�� 
				SXQ3114[1]++;   // ע�� 
				if (SXQ3114[1] > 7)
				{
					SXQ3114[1] = 0;
				}
				SXQ3155[1]++;   // ע�� 
			}
			else
			{
				SXQ957[1].SXQ4071 += 4;
				if (SXQ957[1].SXQ4071 >= 100)    // ע�� 
				{
					SXQ2526.SXQ1158.SXQ2741 = 0x41;     // ע�� 
					SXQ2526.SXQ1158.SXQ2744 = 4;        // ע�� 
					SXQ2526.SXQ1158.SXQ3713 = 0;        // ע�� 
					SXQ2526.SXQ1158.SXQ3463 = SXQ3114[1] << 5;  // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ע�� 
					}
					SXQ2526.SXQ1158.SXQ2413 = SXQ957[1].SXQ2413;        // ע�� 
					SXQ2526.SXQ1158.SXQ998 = SXQ957[1].SXQ998;  // ע�� 
					SXQ2526.SXQ1158.SXQ3417 = 0;        // ע�� 
					SXQ3365 = 9;        // ע�� 
					// ע�� 
					SXQ1913(SXQ2385, (char *)SXQ2526.SXQ4047, SXQ3365);

					SXQ437[1]++;        // ע�� 

					SXQ957[1].SXQ4071 = 0;      // ע�� 
					SXQ3114[1]++;       // ע�� 
					if (SXQ3114[1] > 7)
					{
						SXQ3114[1] = 0;
					}
					SXQ3155[1]++;       // ע�� 
				}
			}

			taskDelay(10);

			// ע�� 
			for (l = 3; l < 12; l++)
			{
				if ((l == 3) || (l == 7) || (l == 9))
				{
					if ((SXQ2833[l] != SXQ2440[l]) &&    // ע�� 
						((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ע�� 
						if (SXQ1521[l] == 0)     // ע�� 
						{
							memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

							if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ע�� 
							{
								SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ע�� 
								SXQ1304[l] = 0; // ע�� 
								SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 

								SXQ1242[l] = 1; // ע�� 
							}
						}
						SXQ3746++;
						if (SXQ3746 >= 10)
						{
							SXQ3746 = 0;        // ע�� 
						}
						SXQ2833[l] = SXQ3746;
						SXQ2401[l] = 1;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if ((SXQ2833[l] != SXQ2440[l]) &&       // ע�� 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

						// ע�� 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if ((SXQ2833[l] == SXQ2440[l]) &&       // ע�� 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ע�� 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if (SXQ1521[l] == 0)
					{
						SXQ1194[l].SXQ4071 += 4;
						if (SXQ1194[l].SXQ4071 >= 60)    // ע�� 
						{
							SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ע�� 
							SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
							SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
							SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ע�� 
							for (i = 0; i < 2; i++)
							{
								SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
								SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
							}
							SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ע�� 
							SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ע�� 
							SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ע�� 
							SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ע�� 
							SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ע�� 
							SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ע�� 
							SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
							SXQ3365 = 15;       // ע�� 

							// ע�� 
							SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
							// ע�� 
							SXQ1194[l].SXQ4071 = 0;     // ע�� 
							SXQ3115[l]++;       // ע�� 
							if (SXQ3115[l] > 7)
							{
								SXQ3115[l] = 0;
							}
							SXQ3455[l]++;       // ע�� 
						}
					}
					if ((l == 3) || (l == 7))
					{
						taskDelay(DelayTime);
					}
				}
			}
		}
		if (((((SXQ3416 + 3) % 4) == 0) && (SXQ1935 == 0)) || ((SXQ1935 != 0) && ((SXQ1935 % 4) == 1)))  // ע�� 
		{
			// ע�� 
			l = 4;
			if ((SXQ2833[l] != SXQ2440[l]) &&    // ע�� 
				((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ע�� 
				if (SXQ1521[l] == 0)     // ע�� 
				{
					memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
					if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ע�� 
					{
						SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ע�� 
						SXQ1304[l] = 0; // ע�� 
						SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 
						SXQ1242[l] = 1; // ע�� 
					}
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ע�� 
				}
				SXQ2833[l] = SXQ3746;
				SXQ2401[l] = 1;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if ((SXQ2833[l] != SXQ2440[l]) &&       // ע�� 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ע�� 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if ((SXQ2833[l] == SXQ2440[l]) &&       // ע�� 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ע�� 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ע�� 
				SXQ3115[l]++;   // ע�� 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ע�� 
			}
			else if (SXQ1521[l] == 0)
			{
				SXQ1194[l].SXQ4071 += 4;
				if (SXQ1194[l].SXQ4071 >= 60)    // ע�� 
				{
					SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ע�� 
					SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
					SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
					SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
						SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
					}
					SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ע�� 
					SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ע�� 
					SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ע�� 
					SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ע�� 
					SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ע�� 
					SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ע�� 
					SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
					SXQ3365 = 15;       // ע�� 

					// ע�� 
					SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
					// ע�� 
					SXQ1194[l].SXQ4071 = 0;     // ע�� 
					SXQ3115[l]++;       // ע�� 
					if (SXQ3115[l] > 7)
					{
						SXQ3115[l] = 0;
					}
					SXQ3455[l]++;       // ע�� 
				}
			}

			taskDelay(10);

			// ע�� 
			if ((SXQ2834[2] != SXQ2441[2]) &&    // ע�� 
				((SXQ1222[2] == 0) || (SXQ1222[2] == SXQ2034[SXQ2834[2]][2][4])))        // ע�� 
			{
				SXQ3746 = SXQ2834[2];
				SXQ2034[SXQ3746][2][3] = SXQ3114[2] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][2], SXQ2295[SXQ3746][2]);
				if (SXQ1222[2] == 0)     // ע�� 
				{
					SXQ1222[2] = SXQ2034[SXQ3746][2][4];        // ע�� 
					SXQ1057[2] = 0;     // ע�� 
					SXQ685[2] = SXQ464(SXQ1222[2]);     // ע�� 
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ע�� 
				}
				SXQ2834[2] = SXQ3746;
				SXQ2402[2] = 1;
				SXQ957[2].SXQ4071 = 0;  // ע�� 
				SXQ3114[2]++;   // ע�� 
				if (SXQ3114[2] > 7)
				{
					SXQ3114[2] = 0;
				}
				SXQ3155[2]++;   // ע�� 
			}
			else if ((SXQ2834[2] != SXQ2441[2]) &&       // ע�� 
				(SXQ1222[2] != 0) && (SXQ1057[2] < SXQ685[2]))      // ע�� 
			{
				SXQ3746 = SXQ2834[2];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][2][3] = SXQ3114[2] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][2], SXQ2295[SXQ3746][2]);
				SXQ2402[2]++;
				SXQ957[2].SXQ4071 = 0;  // ע�� 
				SXQ3114[2]++;   // ע�� 
				if (SXQ3114[2] > 7)
				{
					SXQ3114[2] = 0;
				}
				SXQ3155[2]++;   // ע�� 
			}
			else if ((SXQ2834[2] == SXQ2441[2]) &&       // ע�� 
				(SXQ1222[2] != 0) && (SXQ1057[2] < SXQ685[2]))      // ע�� 
			{
				SXQ3746 = SXQ2834[2];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][2][3] = SXQ3114[2] << 5;
				// ע�� 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][2], SXQ2295[SXQ3746][2]);
				SXQ2402[2]++;
				SXQ957[2].SXQ4071 = 0;  // ע�� 
				SXQ3114[2]++;   // ע�� 
				if (SXQ3114[2] > 7)
				{
					SXQ3114[2] = 0;
				}
				SXQ3155[2]++;   // ע�� 
			}
			else
			{
				SXQ957[2].SXQ4071 += 4;
				if (SXQ957[2].SXQ4071 >= 100)    // ע�� 
				{
					SXQ2526.SXQ1158.SXQ2741 = 0x42;     // ע�� 
					SXQ2526.SXQ1158.SXQ2744 = 4;        // ע�� 
					SXQ2526.SXQ1158.SXQ3713 = 0;        // ע�� 
					SXQ2526.SXQ1158.SXQ3463 = SXQ3114[2] << 5;  // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ע�� 
					}
					SXQ2526.SXQ1158.SXQ2413 = SXQ957[2].SXQ2413;        // ע�� 
					SXQ2526.SXQ1158.SXQ998 = SXQ957[2].SXQ998;  // ע�� 
					SXQ2526.SXQ1158.SXQ3417 = 0;        // ע�� 
					SXQ3365 = 9;        // ע�� 
					// ע�� 
					SXQ1913(SXQ2385, (char *)SXQ2526.SXQ4047, SXQ3365);

					SXQ437[2]++;        // ע�� 

					SXQ957[2].SXQ4071 = 0;      // ע�� 
					SXQ3114[2]++;       // ע�� 
					if (SXQ3114[2] > 7)
					{
						SXQ3114[2] = 0;
					}
					SXQ3155[2]++;       // ע�� 
				}
			}

			taskDelay(10);

			// ע�� 
			for (l = 5; l < 12; l++)
			{
				if ((l == 5) || (l == 10) || (l == 11))
				{
					if ((SXQ2833[l] != SXQ2440[l]) &&    // ע�� 
						((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ע�� 
						if (SXQ1521[l] == 0)     // ע�� 
						{
							memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
							if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ע�� 
							{
								SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ע�� 
								SXQ1304[l] = 0; // ע�� 
								SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ע�� 
								SXQ1242[l] = 1; // ע�� 
							}
						}
						SXQ3746++;
						if (SXQ3746 >= 10)
						{
							SXQ3746 = 0;        // ע�� 
						}
						SXQ2833[l] = SXQ3746;
						SXQ2401[l] = 1;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if ((SXQ2833[l] != SXQ2440[l]) &&       // ע�� 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ע�� 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if ((SXQ2833[l] == SXQ2440[l]) &&       // ע�� 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ע�� 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ע�� 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ע�� 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ע�� 
						SXQ3115[l]++;   // ע�� 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ע�� 
					}
					else if (SXQ1521[l] == 0)
					{
						SXQ1194[l].SXQ4071 += 4;
						if (SXQ1194[l].SXQ4071 >= 60)    // ע�� 
						{
							SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ע�� 
							SXQ2769.SXQ1438.SXQ3142 = 4;        // ע�� 
							SXQ2769.SXQ1438.SXQ3111 = 6;        // ע�� 
							SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ע�� 
							for (i = 0; i < 2; i++)
							{
								SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ע�� 
								SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ע�� 
							}
							SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ע�� 
							SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ע�� 
							SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ע�� 
							SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ע�� 
							SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ע�� 
							SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ע�� 
							SXQ2769.SXQ1438.SXQ3417 = 0;        // ע�� 
							SXQ3365 = 15;       // ע�� 

							// ע�� 
							SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
							// ע�� 
							SXQ1194[l].SXQ4071 = 0;     // ע�� 
							SXQ3115[l]++;       // ע�� 
							if (SXQ3115[l] > 7)
							{
								SXQ3115[l] = 0;
							}
							SXQ3455[l]++;       // ע�� 
						}
					}
					if ((l == 5) || (l == 10))
					{
						taskDelay(DelayTime);
					}
				}
			}
		}
		// ע�� 
	}
}

// ע�� 
void SXQ3491::SXQ465(char *SXQ1066, unsigned char SXQ1480)
{
	unsigned int i, j;
	char SXQ1306[50];

	// ע�� 
	for (i = 0; i < 3; i++)
	{
		SXQ1306[i] = SXQ1066[i];
	}

	// ע�� 
	if (SXQ1306[2] == 0x40)
	{
		SXQ1306[2] = 0x1;
	}
	else if (SXQ1306[2] == 0x41)
	{
		SXQ1306[2] = 0x2;
	}
	else if (SXQ1306[2] == 0x42)
	{
		SXQ1306[2] = 0x3;
	}

	j = 4;                      // ע�� 
	for (i = 0; i < SXQ1480; i++)
	{
		if (((unsigned char)SXQ1066[4 + i]) == 0xEE)     // ע�� 
		{
			SXQ1306[j] = 0x9A;
			j++;
			SXQ1306[j] = 0xC0;
			j++;
		}
		else if (((unsigned char)SXQ1066[4 + i]) == 0x9A)        // ע�� 
		{
			SXQ1306[j] = 0x9A;
			j++;
			SXQ1306[j] = 0x9A;
			j++;
		}
		else                    // ע�� 
		{
			SXQ1306[j] = SXQ1066[4 + i];
			j++;
		}
	}

	SXQ1306[3] = j - 4;         // ע�� 

	if (j > 18)
	{
		SXQ1306[0] = 1;         // ע�� 
	}

	memcpy(SXQ1066, SXQ1306, 50);       // ע�� 
}

/* ע��
ע��
ע��
ע��
ע��
ע��
ע�� */
void SXQ3491::SXQ1913(unsigned char SXQ2745, char *SXQ2891, int SXQ3365)
{
	char SXQ1854[50];           // ע�� 
	int SXQ1945;                // ע�� 

	if ((SXQ2745 == 0) || (SXQ2745 == 1))        // ע�� 
	{
		// ע�� 
		SXQ1945 = SXQ1915(CH3_BAIT, SXQ2891, SXQ3365);  // ע�� 
	}
	if (((SXQ2745 == 0) || (SXQ2745 == 2)))      // ע�� 
	{
		SXQ1854[4] = 0;         // ע�� 
		SXQ1854[5] = 69;        // ע�� 
		SXQ1854[6] = SXQ2891[0];        // ע�� 
		SXQ1854[7] = SXQ2891[1];        // ע�� 
		memcpy(SXQ1854 + 8, SXQ2891 + 4, (int)SXQ2891[1]);      // ע�� 

		// ע�� 
		if (((unsigned char)SXQ2891[4] == HSXQ038) && ((unsigned char)SXQ2891[5] == HSXQ038))
		{
			// ע�� 
			if (SXQ2891[0] == 0x40)
			{
				SXQ358[0]++;
				if (SXQ358[0] >= 10)
				{
					SXQ358[0] = 0;
					msgQSend(SXQ1146, SXQ1854, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);
				}
			}
			else if (SXQ2891[0] == 0x41)
			{
				SXQ358[1]++;
				if (SXQ358[1] >= 10)
				{
					SXQ358[1] = 0;
					msgQSend(SXQ1146, SXQ1854, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);
				}
			}
			else if (SXQ2891[0] == 0x42)
			{
				SXQ358[2]++;
				if (SXQ358[2] >= 10)
				{
					SXQ358[2] = 0;
					msgQSend(SXQ1146, SXQ1854, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);
				}
			}
		}
		else
		{
			msgQSend(SXQ1146, SXQ1854, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);       // ע�� 
		}
	}
}

/* ע��
ע��
ע��
ע��
ע��
ע�� */
unsigned short SXQ3491::SXQ698(unsigned char SXQ2396, union _SXQ2769 SXQ2769)
{
	unsigned short SXQ1509;     // ע�� 
	unsigned char SXQ4423;
	unsigned char SXQ3475;      // ע�� 
	int i, k, m;

	switch (SXQ2396)
	{
	case HSXQ001:       /* ע�� 1)sAsEs7s4101 9 bytes */
		SXQ1509 = 0xffff;   // ע�� 
		break;
	case HSXQ002:    /* ע�� 1s1sBs7s4103 13 bytes */
		SXQ1509 = 10;       // ע�� 
		break;
	case HSXQ003:   /* ע�� s9sFsEsEs7s4105 11 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ004:      /* ע�� 4s6sAs0s7s4107 9 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ005:   /* ע�� s6s5s7s7s6s7s4109 8 bytes */
		SXQ1509 = 1500;     // ע�� 
		break;
	case HSXQ006:    /* ע�� 6s6s1s0s5s7s4111 7 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ007:     /* ע�� 2s0sBsDs7s4113 45 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ008:       /* ע�� 4sD/sDs4sDs7s4115 9 bytes */
		SXQ3475 = SXQ2769.SXQ1439.SXQ2741 - 0x60;   // ע�� 

		if (SXQ3475 < 12)    // ע�� 
		{
			SXQ1243[SXQ3475][0] = 0;
			SXQ1243[SXQ3475][1] = 0;

			k = 0;
			for (i = 0; i < 4; i++)
			{
				SXQ4423 = SXQ2769.SXQ1439.SXQ4423[i];       // ע�� 

				if ((SXQ4423 & 0x03) == 0x03)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0x0c) == 0x0c)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 1;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0x30) == 0x30)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 2;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0xc0) == 0xc0)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 3;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}
			}
		}
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ009:  /* ע�� 5/sDs5s7s4117 10 bytes */
		SXQ3475 = SXQ2769.SXQ2341.SXQ2741 - 0x60;   // ע�� 

		if (SXQ3475 < 12)    // ע�� 
		{
			SXQ1243[SXQ3475][0] = 0;
			SXQ1243[SXQ3475][1] = 0;
			k = 0;
			for (i = 0; i < 4; i++)
			{
				SXQ4423 = SXQ2769.SXQ2341.SXQ4423[i];       // ע�� 

				if ((SXQ4423 & 0x03) == 0x03)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0x0c) == 0x0c)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 1;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0x30) == 0x30)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 2;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0xc0) == 0xc0)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 3;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}
			}
		}
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ010:     /* ע�� 1s7s3s1s7s4119 7 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ011:  /* ע�� 5s5s2s7s4121 11 bytes */
		SXQ3475 = SXQ2769.SXQ761.SXQ2741 - 0x60;    // ע�� 
		if (SXQ3475 < 12)    // ע�� 
		{
			SXQ1243[SXQ3475][0] = 0;
			SXQ1243[SXQ3475][1] = 0;
			k = 0;
			for (i = 0; i < 4; i++)
			{
				SXQ4423 = SXQ2769.SXQ761.SXQ4423[i];        // ע�� 

				if ((SXQ4423 & 0x03) == 0x03)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0x0c) == 0x0c)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 1;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0x30) == 0x30)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 2;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}

				if ((SXQ4423 & 0xc0) == 0xc0)        // ע�� 
				{
					m = SXQ3475 * 8 + i * 4 + 3;
					SXQ1243[SXQ3475][k] = m + 1;    // ע�� 
					k++;
					if (k >= 2)
					{
						break;      // ע�� 
					}
				}
			}
			SXQ1509 = 0;    // ע�� 
		}
		SXQ1509 = 0;        // ע�� 
		break;
	case HSXQ012:    /* ע�� 1s4s7s4123 45sAs7s2 */
		SXQ1509 = 0;        // ע�� 
		break;
	case HSXQ013:    /* ע�� s4sAsBs5s7s4129 11 bytes */
		SXQ1509 = 0;        // ע�� 
		if ((SXQ2769.SXQ943.SXQ2856 == 0x70) && (SXQ2769.SXQ943.SXQ2504 == 0x70))
		{
			SXQ1509 = 0;    // ע�� 
		}
		break;
	case HSXQ014:        /* ע�� s0sAs7s4133 9 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ015:      /* ע�� s5s3sCs7s4135 11 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ016:    /* ע�� 15)s6sEs7s4137 11 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ017:
		SXQ1509 = 0;        // ע�� 
		break;
	default:
		SXQ1509 = 0;        // ע�� 
		break;
	}
	return SXQ1509;
}

/* ע��
ע��
ע��
ע��
ע��
ע�� */
unsigned short SXQ3491::SXQ464(unsigned char SXQ2396)
{
	unsigned short SXQ1509;     // ע�� 

	switch (SXQ2396)
	{
	case HSXQ038:      /* ע�� 1)sAsEs7s4171  7 bytes */
		SXQ1509 = 0xffff;   // ע�� 
		break;
	case HSXQ039:   /* ע�� s6s1s1sBs7s4173 9 bytes */
		SXQ1509 = 10;       // ע�� 
		break;
	case HSXQ040:  /* ע�� BsFs5sCs9sFsEsE175 8 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ041:     /* ע�� s5s6sAs0s7s4177 7 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ042:    /* ע�� s2s0sBsDs7s4179 19 bytes */
		SXQ1509 = 40;       // ע�� 
		break;
	case HSXQ043:   /* ע�� s9s1sFsEsEs7s4181 9 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ044:   // ע�� 
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ045:    /* ע�� sB/sDs8sBs7s4185 8 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ046:        /* ע�� FsBsFs7s4187 8 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ047:   /* ע�� 6s4sAsBs5s7s4189    8 bytes */
		SXQ1509 = 60;       // ע�� 
		break;
	case HSXQ048:       /* ע�� sFs0sAs7s4193 7 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	case HSXQ049:   /* ע�� /*(11)s6sEs7s4197 8 bytes */
		SXQ1509 = 30;       // ע�� 
		break;
	default:
		SXQ1509 = 0;        // ע�� 
		break;
	}

	return SXQ1509;
}

/* ע��
ע��
ע��
ע��
ע��
ע��
ע��
ע�� */
unsigned char SXQ3491::SXQ1910(unsigned char SXQ2124, unsigned char SXQ2125, unsigned char SXQ2396, unsigned char *SXQ4047)
{
	unsigned char SXQ3722;      // ע�� 
	unsigned char SXQ4427;      // ע�� 
	union _SXQ2768 SXQ2768;
	unsigned int m, k;

	SXQ3722 = 0;                // ע�� 
	switch (SXQ2124)
	{
	case HSXQ018:    /* ע�� )sAsEs4s4s1sF102 9 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if ((SXQ2396 == HSXQ001) && (SXQ1317[SXQ4427] == OK) && (SXQ2125 == HSXQ018))   // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ019: /* ע�� s1sBsDs8s1sF104 28 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;
		if ((SXQ2396 == HSXQ002) && (SXQ2125 == HSXQ019))     // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ020:   /* ע�� s3sCsDs8s1sF106 11 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if ((SXQ2396 == HSXQ003) && (SXQ2125 == HSXQ020) && (SXQ4047[6] == SXQ4047[9]))    // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ021:   /* ע�� 6sAs0s3sCs1sF108 30 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if ((SXQ2396 == HSXQ004) && (SXQ2125 == HSXQ021))     // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ023: /* ע�� s6s1s0s5s3sCs1sF112 8 bytes */
		if (SXQ2396 == HSXQ006)        // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ024:  /* ע�� sDs3sCsDs8s1sF114 11 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if ((SXQ2396 == HSXQ007) && (SXQ2125 == HSXQ024))   // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ025:    /* ע�� D/sDs4sDs3sCs1sF116 13 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if (SXQ2396 == HSXQ008)       // ע�� 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ760.SXQ3148; // ע�� 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if (SXQ1243[SXQ4427][k] == (m + 1))  // ע�� 
						{
							SXQ1243[SXQ4427][k] = 0;
							SXQ1029[m] = 0; // ע�� 
							break;
						}
					}
				}
				if (SXQ2768.SXQ760.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ760.SXQ3149;     // ע�� 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if (SXQ1243[SXQ4427][k] == (m + 1))      // ע�� 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ע�� 
								break;
							}
						}
					}
				}

				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ע�� 
				}
			}
			else if (SXQ2396 == HSXQ009)     // ע�� 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ760.SXQ3148; // ע�� 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if ((SXQ1243[SXQ4427][k] == (m + 1)) && (SXQ2768.SXQ760.SXQ2104 == 0x70))    // ע�� 
						{
							SXQ1243[SXQ4427][k] = 0;
							SXQ1029[m] = 0; // ע�� 
							break;
						}
					}
				}
				if (SXQ2768.SXQ760.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ760.SXQ3149;     // ע�� 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if ((SXQ1243[SXQ4427][k] == (m + 1)) && (SXQ2768.SXQ760.SXQ2105 == 0x70))        // ע�� 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ע�� 
								break;
							}
						}
					}

				}
				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ע�� 
				}
			}
		}
		break;
	case HSXQ026:       /* ע�� /sDs5s3sCs1sF118 13 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if (SXQ2396 == HSXQ009)  // ע�� 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ1440.SXQ3148;        // ע�� 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if (SXQ1243[SXQ4427][k] == (m + 1))  // ע�� 
						{
							if (((SXQ2768.SXQ1440.SXQ2069 == 0x1A) && (SXQ2768.SXQ1440.SXQ2104 == 0x07))     // ע�� 
								|| (SXQ2768.SXQ1440.SXQ2069 == 0xA1))        // ע�� 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ע�� 
								break;
							}
						}
					}
				}
				if (SXQ2768.SXQ1440.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ1440.SXQ3149;    // ע�� 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if (SXQ1243[SXQ4427][k] == (m + 1))      // ע�� 
							{
								if (((SXQ2768.SXQ1440.SXQ2069 == 0x1A) && (SXQ2768.SXQ1440.SXQ2105 == 0x07)) // ע�� 
									|| (SXQ2768.SXQ1440.SXQ2069 == 0xA1))    // ע�� 
								{
									SXQ1243[SXQ4427][k] = 0;
									SXQ1029[m] = 0; // ע�� 
									break;
								}
							}
						}
					}

				}

				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ע�� 
				}
			}
		}
		break;
	case HSXQ027:      /* ע�� 8s9/s5sCs9s1sF120 16 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if (SXQ2396 == HSXQ011)  // ע�� 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ946.SXQ3148; // ע�� 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if (SXQ1243[SXQ4427][k] == (m + 1))  // ע�� 
						{
							SXQ1243[SXQ4427][k] = 0;
							SXQ1029[m] = 0; // ע�� 
							break;
						}
					}
				}
				if (SXQ2768.SXQ946.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ946.SXQ3149;     // ע�� 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if (SXQ1243[SXQ4427][k] == (m + 1))      // ע�� 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ע�� 
								break;
							}
						}
					}

				}

				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ע�� 
				}
			}
		}
		break;
	case HSXQ028:  /* ע�� s7s3s1s6s1s1sF122 7 bytes */
		if (SXQ2396 == HSXQ010) // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ029: /* ע�� 7s4s4s4s1sF124 8sAs7s2 */
		break;
	case HSXQ030:     /* ע�� /*sCs9s1sDs1s7126 11 bytes */
		if (SXQ2396 == HSXQ012)        // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ031:      /* ע�� 4s3s8/s5sCs1sF128 9 bytes */
		if (SXQ2396 == HSXQ012)        // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ032: /* ע�� 4sAsBs5s3sCs1sF130 15 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if ((SXQ2396 == HSXQ013) && (SXQ2125 == HSXQ032)) // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ033:    /* ע�� s5sCs5s6s1sF132 18 bytes */
		break;
	case HSXQ034:     /* ע�� 7s4s4s4s1sF134 9 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ע�� 
		if (SXQ4427 < 12)    // ע�� 
		{
			if ((SXQ2396 == HSXQ014) && (SXQ2125 == HSXQ034)) // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ035:   /* ע�� 36s8s8sFs7s7s4s9 45 bytes */
		if (SXQ2396 == HSXQ015)  // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ036: /* ע�� s6s6sEs4s4s1sF138 11 bytes */
		if (SXQ2396 == HSXQ016)        // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ037:
		if (SXQ2396 == HSXQ017) // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ050:   /* ע�� 1)sAsEs4s4s1sF172 7 bytes */
		SXQ4427 = SXQ4047[0] - 0x40;        // ע�� 
		if (SXQ4427 < 3)
		{
			if ((SXQ2396 == HSXQ038) && (SXQ1069[SXQ4427] == OK))        // ע�� 
			{
				SXQ3722 = 1;        // ע�� 
			}
		}
		break;
	case HSXQ051:        /* ע�� 1s1sBsDs8s1sF174 14 bytes */
		if (SXQ2396 == HSXQ039)       // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ052:  /* ע�� sEs3sCsDs8s1sF176 8 bytes */
		if (SXQ2396 == HSXQ040)      // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ053:  /* ע�� As6sAs0s3sCs1sF178 8 bytes */
		if (SXQ2396 == HSXQ041) // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ054: /* ע�� sBsDs3sCsDs8s1sF180 8 bytes */
		if (SXQ2396 == HSXQ042)        // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ055:   /* ע�� sEs3sCs4s4s1sF182 9 bytes */
		if (SXQ2396 == HSXQ043)       // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ056:
		if (SXQ2396 == HSXQ044)       // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ057:     /* ע�� B/sDs8sBs1186sF 9 bytes */
		if (SXQ2396 == HSXQ045)        // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ058:     /* ע�� s1sFs4s4s1sF188 9 bytes */
		if (SXQ2396 == HSXQ046)    // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ059:    /* ע�� sBs5s3sCs1sF190 13 bytes */
		if (SXQ2396 == HSXQ047)       // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ060:   /* ע�� s6s5sCs5s6s1sF192 9 bytes */
		break;
	case HSXQ061:    /* ע�� s7s4s4s4s1sF194 7 bytes */
		if (SXQ2396 == HSXQ048)   // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	case HSXQ062:        /* ע�� s5s6s6sEs4s4s1sF198 8 bytes */
		if (SXQ2396 == HSXQ049)       // ע�� 
		{
			SXQ3722 = 1;    // ע�� 
		}
		break;
	default:
		break;
	}
	if ((SXQ3722 == 0) && (SXQ2125 != 0))
	{
		switch (SXQ2125)
		{
		case HSXQ022:    /* ע�� s6s1/sCs2s6s1s1sF110 12 bytes */
			SXQ4427 = SXQ4047[0] - 0x60;    // ע�� 
			if (SXQ4427 < 12)        // ע�� 
			{
				if (SXQ2396 == HSXQ005)       // ע�� 
				{
					memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
					if ((SXQ2768.SXQ408.SXQ2067 == 0x70) || (SXQ2768.SXQ408.SXQ2067 == 0xA1) || (SXQ2768.SXQ408.SXQ2067 == 0x77))    // ע�� 
					{
						SXQ3722 = 1;        // ע�� 
					}
				}
			}
			break;
		case HSXQ033:        /* ע�� Fs5sCs5s6s1sF132 18 bytes */
			break;
		default:
			break;
		}
	}
	return SXQ3722;
}

/* ע��
ע��
ע��
ע�� */
STATUS SXQ3491::SXQ1917(int SXQ3680)    // ע�� 
{
	if (SXQ3680 == 0)
	{
		// ע�� 
		SXQ3362[0] = open("/PEBsio0", O_RDWR, 0);       // ע�� 
		SXQ3362[1] = open("/PEBsio1", O_RDWR, 0);       // ע�� 
		SXQ3362[2] = open("/PEBsio2", O_RDWR, 0);       // ע�� 
		SXQ3362[3] = open("/PEBsio3", O_RDWR, 0);       // ע�� 
		if ((SXQ3362[0] >= 0) && (SXQ3362[1] >= 0) && (SXQ3362[2] >= 0) && (SXQ3362[3] >= 0))    // ע�� 
		{
			return OK;          // ע�� 
		}
		else
		{
			return ERROR;       // ע�� 
		}
	}
	else
	{
		return ERROR;           // ע�� 
	}
}

/* ע��
ע��
ע��
ע�� */
STATUS SXQ3491::SXQ1637(int SXQ3680)    // ע�� 
{
	int i;                      // ע�� 
	STATUS SXQ3698;

	if (SXQ3680 == 0)
	{
		// ע�� 
		for (i = 0; i < 4; i++)
		{
			SXQ3698 = close(SXQ3362[i]);        // ע�� 
			if (SXQ3698 != OK)
			{
				break;
			}
		}
	}
	else
	{
		return ERROR;           // ע�� 
	}

	return SXQ3698;
}

/* ע��
ע��
ע��
ע�� */
int SXQ3491::SXQ1915(unsigned char SXQ3207, char *SXQ2547, int SXQ3365)
{
	int SXQ2695;                // ע�� 
	unsigned char SXQ1803[60];

	if ((SXQ3207 >= 4) || (SXQ3365 > 60))        // ע�� 
	{
		return ERROR;
	}

	memcpy(SXQ1803, SXQ2547, SXQ3365);

	SXQ2695 = write(SXQ3362[SXQ3207], (char *)SXQ2547, SXQ3365);        // ע�� 

	if ((SXQ2695 == -1) && (SXQ3207 == 0))
	{
		// ע�� 
		taskDelay(1);
		SXQ2695 = write(SXQ3362[SXQ3207], (char *)SXQ1803, SXQ3365);    // ע�� 
	}

	return SXQ2695;
}

/* ע��
ע��
ע��
ע�� */
int SXQ3491::SXQ1912(unsigned char SXQ3207, char *SXQ2547, int SXQ2680)
{
	int SXQ3050;                // ע�� 

	if (SXQ3207 >= 4)            // ע�� 
	{
		return ERROR;
	}

	SXQ3050 = read(SXQ3362[SXQ3207], (char *)SXQ2547, SXQ2680); // ע�� 

	return SXQ3050;
}

// ע�� 
void SXQ3491::SXQ780(void)
{
	STATUS SXQ3698;             // ע�� 
	int SXQ3365;                // ע�� 
	int SXQ1945;                // ע�� 
	unsigned char SXQ2741;      // ע�� 
	unsigned char SXQ1795[60];  // ע�� 
	union _SXQ2769 SXQ1298;     // ע�� 
	unsigned char SXQ4423;
	int i;

	SXQ1563 = 0;                // ע�� 

	SXQ499 = msgQCreate(MAX_MSG_SHEET, MSG_SIZE_SCC, MSG_Q_FIFO);
	SXQ595 = msgQCreate(MAX_MSG_DEAL, MSG_SIZE_SCC, MSG_Q_FIFO);

	taskDelay(1000);            // ע�� 

	while (true)
	{
		// ע�� 
		SXQ3698 = msgQReceive(SXQ595, (char *)SXQ1795, MSG_SIZE_SCC, WAIT_FOREVER);

		// ע�� 
		do
		{
			SXQ3698 = msgQReceive(SXQ499, (char *)SXQ1795, MSG_SIZE_SCC, NO_WAIT);
			if (SXQ3698 != ERROR)        // ע�� 
			{
				SXQ3365 = 0;    // ע�� 
				if ((SXQ1795[1] == HSXQ012) && (SXQ1795[2] > 0) && (SXQ1795[2] <= 12))     // ע�� 
				{
					SXQ2741 = 0x60 + SXQ1795[2] - 1;    // ע�� 

					SXQ1298.SXQ1679.SXQ2741 = SXQ2741;  // ע�� 
					SXQ1298.SXQ1679.SXQ3142 = 0;        // ע�� 
					SXQ1298.SXQ1679.SXQ3111 = 40;       // ע�� 
					SXQ1298.SXQ1679.SXQ3463 = 0;        // ע�� 
					for (i = 0; i < 2; i++)
					{
						SXQ1298.SXQ1679.SXQ2752[i] = HSXQ012;     // ע�� 
					}
					// ע�� 
					memcpy(SXQ1298.SXQ4047 + 6, SXQ1795 + 3, 36);       // ע�� 
					// ע�� 
					SXQ1298.SXQ1679.SXQ2420 = 0;
					for (i = 0; i < 36; i++)
					{
						SXQ1298.SXQ1679.SXQ2420 += SXQ1298.SXQ4047[i + 6];
					}
					SXQ1298.SXQ1679.SXQ3417 = 0;        // ע�� 
					// ע�� 
					SXQ4423 = SXQ1298.SXQ1679.SXQ4423;
					if (((SXQ1298.SXQ1679.SXQ3451 & 0x3f) < 32) && ((SXQ4423 & 0x0f) == ((SXQ4423 & 0xf0) / 0x10)))      /* ע�� ET.SXQ1679.SXQ3451 & 0x3f)<32) && ((SXQ4423&0x0f)==((SXQ4423&0xf0)/0x10))) /*sCs9s0s0s1s9s8sCsA0-31 */
					{
						SXQ4423 = SXQ4423 & 0x0f;       // ע�� 
						SXQ4423 = SXQ4423 + (SXQ1795[2] - 1) * 8;       // ע�� 

						SXQ1251[SXQ4423] = SXQ1298.SXQ1679.SXQ3451 & 0x3f;      // ע�� 
					}
					SXQ3365 = 45;       // ע�� 

					// ע�� 
					if (SXQ1563 < 12)
					{
						SXQ3092[SXQ1563].SXQ3450 = SXQ2741 - 0x60;
						SXQ3092[SXQ1563].SXQ3365 = SXQ3365;     // ע�� 
						memcpy(SXQ3092[SXQ1563].SXQ1603, SXQ1298.SXQ4047, SXQ3365);
						SXQ1563++;      // ע�� 
					}
				}
			}
		} while (SXQ3698 != ERROR);        // ע�� 

		// ע�� 
		if (SXQ1563 > 0)
		{
			// ע�� 
			for (i = 0; i < SXQ1563; i++)
			{
				SXQ1194[SXQ3092[i].SXQ3450].SXQ4071 = 0;        // ע�� 

				SXQ3092[i].SXQ1603[3] = SXQ3115[SXQ3092[i].SXQ3450] << 5;
				SXQ3115[SXQ3092[i].SXQ3450]++;  // ע�� 
				if (SXQ3115[SXQ3092[i].SXQ3450] > 7)
				{
					SXQ3115[SXQ3092[i].SXQ3450] = 0;
				}
				// ע�� 
				SXQ1945 = SXQ1915(CH0_LAU, SXQ3092[i].SXQ1603, SXQ3092[i].SXQ3365);
				// ע�� 
				taskDelay(8);
			}
			SXQ1563 = 0;        // ע�� 
		}
	}
}








