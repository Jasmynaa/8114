//5.2.10¡¡(½¨Òé)Ò»¸öÎÄ¼þÖÐµÄÓï¾ä×ÜÐÐ²»³¬¹ý2000ÐÐ
//------Î¬³Ö8114µÄ¡°A - 1 - 2 - 1 Ò»¸öÎÄ¼þÖÐµÄÓï¾ä×ÜÐÐ²»³¬¹ý2000ÐÐ¡±

//5.2.10¡¡(½¨Òé)Ò»¸öÎÄ¼þÖÐµÄÓï¾ä×ÜÐÐ²»³¬¹ý2000ÐÐ
//------Î¬³Ö8114µÄ¡°A - 1 - 2 - 1 Ò»¸öÎÄ¼þÖÐµÄÓï¾ä×ÜÐÐ²»³¬¹ý2000ÐÐ¡±

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */

#define DelayTime 20            // ×¢ÊÍ

int SXQ3362[4];                 // ×¢ÊÍ 

/* ×¢ÊÍ ** */
extern char SXQ1317[12];        /* ×¢ÊÍ
								×¢ÊÍ
								×¢ÊÍ
								×¢ÊÍ
								×¢ÊÍ
								×¢ÊÍ
								×¢ÊÍ */
extern char SXQ1069[3];         /* ×¢ÊÍ ; /*s7s7sBsFsE3s6s1s5s6sEsFs6s1s8 */
/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
extern unsigned char SXQ437[3]; // ×¢ÊÍ 
extern unsigned char SXQ2090[12];       // ×¢ÊÍ 
extern unsigned char SXQ3455[12];       // ×¢ÊÍ 
extern unsigned char SXQ3155[3];        // ×¢ÊÍ 

extern unsigned char SXQ1242[12];       /* ×¢ÊÍ 2s6s2s4s1s4s6s7s4s1s1s6s1sA0-s0sC1-s3s8s1s1 */
extern unsigned char SXQ985[3]; /* ×¢ÊÍ ; /*3s6s1s5s6s7s4s1s1s6s1sA0-s0sC1-s3s8s1s1 */

unsigned char SXQ2385;          // ×¢ÊÍ 

/* ×¢ÊÍ ** */
extern int SXQ3385;             /* ×¢ÊÍ /* main task mtask ID */
extern SEM_ID SXQ1421;          // ×¢ÊÍ 

MSG_Q_ID SXQ1408;               /* ×¢ÊÍ 12s6s1s4s6s4sEs0s1sFsEs1 */
MSG_Q_ID SXQ1146;               /* ×¢ÊÍ sA3s6s1s5s6s4sEs0s1sFsEs1 */

MSG_Q_ID SXQ340;                /* ×¢ÊÍ
								×¢ÊÍ */
MSG_Q_ID SXQ499;                // ×¢ÊÍ 
MSG_Q_ID SXQ595;                // ×¢ÊÍ 

extern unsigned int SXQ1935;             // ×¢ÊÍ 

// ×¢ÊÍ 
SXQ3491::SXQ3491()
{
	unsigned char i, j;         // ×¢ÊÍ 

	/* ×¢ÊÍ ** */
	for (i = 0; i < 12; i++)
	{
		SXQ3736[i] = 0;         // ×¢ÊÍ 
		// ×¢ÊÍ 
		SXQ2440[i] = 0;
		SXQ2833[i] = 0;
		SXQ2401[i] = 0;
		SXQ1521[i] = 0;         // ×¢ÊÍ 
		SXQ1304[i] = 0;         // ×¢ÊÍ 
		SXQ855[i] = 0;          // ×¢ÊÍ 
		for (j = 0; j < 2; j++)
		{
			SXQ1243[i][j] = 0;  // ×¢ÊÍ 
		}

		// ×¢ÊÍ 
		SXQ1194[i].SXQ2413 = 0; // ×¢ÊÍ 
		SXQ1194[i].SXQ998 = 0;  // ×¢ÊÍ 
		SXQ1194[i].SXQ4071 = 0; // ×¢ÊÍ 
		SXQ1194[i].SXQ2889 = 0; // ×¢ÊÍ 
		SXQ1194[i].SXQ2896 = 0; // ×¢ÊÍ 

		// ×¢ÊÍ 
		SXQ1090[i].SXQ3419 = 0;

		for (j = 0; j < 60; j++)
		{
			SXQ1800[i][j] = 0;
			SXQ1799[i][j] = 0;
		}
		SXQ2465[i] = 0;         // ×¢ÊÍ 
	}

	for (i = 0; i < 3; i++)
	{
		// ×¢ÊÍ 
		SXQ2441[i] = 0;
		SXQ2834[i] = 0;
		SXQ2402[i] = 0;

		SXQ1222[i] = 0;         // ×¢ÊÍ 
		SXQ1057[i] = 0;         // ×¢ÊÍ 
		SXQ685[i] = 0;          // ×¢ÊÍ 

		// ×¢ÊÍ 
		SXQ957[i].SXQ2413 = 0;  // ×¢ÊÍ 
		SXQ957[i].SXQ998 = 0;   // ×¢ÊÍ 
		SXQ957[i].SXQ4071 = 0;  // ×¢ÊÍ 

		SXQ358[i] = 0;          // ×¢ÊÍ 

		for (j = 0; j < 30; j++)
		{
			SXQ1550[i][j] = 0;
		}

		SXQ2097[i] = 0;         // ×¢ÊÍ 
	}

	for (i = 0; i < 96; i++)     // ×¢ÊÍ 
	{
		SXQ1251[i] = 0xFF;
		SXQ1029[i] = 0;         // ×¢ÊÍ 
	}
	SXQ2385 = 0;                // ×¢ÊÍ 
}

// ×¢ÊÍ 
SXQ3491::~SXQ3491()
{
	// ×¢ÊÍ 
	// ×¢ÊÍ 
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
unsigned char SXQ3491::SXQ1122(unsigned char *SXQ4013, unsigned char *SXQ3390, int SXQ3365)
{
	int i;                      // ×¢ÊÍ 
	unsigned char SXQ3722;      // ×¢ÊÍ 

	SXQ3722 = 0;                // ×¢ÊÍ 
	for (i = 0; i < SXQ3365; i++)
	{
		if (SXQ4013[i] != SXQ3390[i])
		{
			SXQ3722 = 1;        // ×¢ÊÍ 
			break;
		}
	}
	return SXQ3722;
}

/* ×¢ÊÍ ** */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ ** */
void SXQ3491::SXQ962(void)      // ×¢ÊÍ 
{
	unsigned char SXQ1795[60];

	// ×¢ÊÍ 
	int SXQ1420;
	struct fd_set SXQ3389;      // ×¢ÊÍ 

	/* ×¢ÊÍ ** */
	SXQ1408 = msgQCreate(MAX_MSG_LAU, MSG_SIZE_LAU, MSG_Q_FIFO);

	taskDelay(1000);            // ×¢ÊÍ 

	while (true)
	{
		/* ×¢ÊÍ **** */
		/* ×¢ÊÍ 5sA     */
		/* ×¢ÊÍ F                       */
		/* ×¢ÊÍ **** */
		FD_ZERO(&SXQ3389);      // ×¢ÊÍ 
		FD_SET(SXQ3362[0], &SXQ3389);   // ×¢ÊÍ 

		SXQ1420 = select(SXQ3362[0] + 1, &SXQ3389, NULL, NULL, NULL);   // ×¢ÊÍ 

		if (SXQ1420 > 0)         // ×¢ÊÍ 
		{
			if (FD_ISSET(SXQ3362[0], &SXQ3389))  // ×¢ÊÍ 
			{
				if (SXQ1912(CH0_LAU, (char *)SXQ1795, MaxCH0) > 0)       // ×¢ÊÍ 
				{
					SXQ700(SXQ1795);
				}
			}
		}
	}
}

void SXQ3491::SXQ963(void)      // ×¢ÊÍ 
{
	unsigned char SXQ1795[60];

	// ×¢ÊÍ 
	int SXQ1420;
	struct fd_set SXQ3389;      // ×¢ÊÍ 

	taskDelay(1000);            // ×¢ÊÍ 

	while (true)
	{
		/* ×¢ÊÍ **** */
		/* ×¢ÊÍ 5sA     */
		/* ×¢ÊÍ F                       */
		/* ×¢ÊÍ **** */
		FD_ZERO(&SXQ3389);      // ×¢ÊÍ 
		FD_SET(SXQ3362[1], &SXQ3389);   // ×¢ÊÍ 

		SXQ1420 = select(SXQ3362[1] + 1, &SXQ3389, NULL, NULL, NULL);   // ×¢ÊÍ 

		if (SXQ1420 > 0)         // ×¢ÊÍ 
		{
			if (FD_ISSET(SXQ3362[1], &SXQ3389))  // ×¢ÊÍ 
			{
				if (SXQ1912(CH1_DROP, (char *)SXQ1795, MaxCH1) > 0)      // ×¢ÊÍ 
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

	// ×¢ÊÍ 
	int SXQ1420;
	struct fd_set SXQ3389;      // ×¢ÊÍ 

	/* ×¢ÊÍ *** */
	SXQ1146 = msgQCreate(MAX_MSG_BAIT, MSG_SIZE_BAIT, MSG_Q_FIFO);

	taskDelay(1000);            // ×¢ÊÍ 

	while (true)
	{
		/* ×¢ÊÍ **** */
		/* ×¢ÊÍ 5sA     */
		/* ×¢ÊÍ F                       */
		/* ×¢ÊÍ **** */
		FD_ZERO(&SXQ3389);      // ×¢ÊÍ 
		FD_SET(SXQ3362[3], &SXQ3389);   // ×¢ÊÍ 

		SXQ1420 = select(SXQ3362[3] + 1, &SXQ3389, NULL, NULL, NULL);   // ×¢ÊÍ 

		if (SXQ1420 > 0)         // ×¢ÊÍ 
		{
			if (FD_ISSET(SXQ3362[3], &SXQ3389))  // ×¢ÊÍ 
			{
				if (SXQ1912(CH3_BAIT, (char *)SXQ1795, MaxCH3) > 0)      // ×¢ÊÍ 
				{
					SXQ1120(SXQ1795);   // ×¢ÊÍ 
					// ×¢ÊÍ 
					if ((SXQ1795[0] >= 0x40) && (SXQ1795[0] <= 0x42))    // ×¢ÊÍ 
					{
						// ×¢ÊÍ 
						if ((SXQ1795[4] == HSXQ050) && (SXQ1795[5] == HSXQ050) && (SXQ2385 == 0))  // ×¢ÊÍ 
						{
							SXQ2385 = 1;        // ×¢ÊÍ 
						}
					}
				}
			}
		}
	}
}

/* ×¢ÊÍ ** */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ ** */
void SXQ3491::SXQ700(unsigned char *SXQ1795)
{
	static unsigned char SXQ1035[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };  // ×¢ÊÍ 

	int i, j, k, l;             // ×¢ÊÍ 

	unsigned char SXQ3450;      // ×¢ÊÍ 
	unsigned char SXQ3727;      // ×¢ÊÍ 
	int SXQ4367;                // ×¢ÊÍ 
	unsigned char SXQ2785, SXQ2783;     // ×¢ÊÍ 
	unsigned char SXQ3722 = 0;  // ×¢ÊÍ 

	unsigned char SXQ3141[60];  // ×¢ÊÍ 
	unsigned char SXQ3110[60];  // ×¢ÊÍ 
	int SXQ3364, SXQ3360;       // ×¢ÊÍ 

	struct _SXQ2728 SXQ2728;    // ×¢ÊÍ 

	// ×¢ÊÍ 
	SXQ3450 = SXQ1795[0] - 0x60;        // ×¢ÊÍ 

	/* ×¢ÊÍ
	×¢ÊÍ
	×¢ÊÍ
	×¢ÊÍ */

	if (SXQ3450 < 12)            // ×¢ÊÍ 
	{
		SXQ3455[SXQ3450] = 0;   // ×¢ÊÍ 

		// ×¢ÊÍ 
		SXQ3727 = SXQ1795[3] & 7;       // ×¢ÊÍ 

		// ×¢ÊÍ 
		if ((SXQ1317[SXQ3450] == OK) && (SXQ3727 != 7))  // ×¢ÊÍ 
		{
			SXQ1035[SXQ3450]++; // ×¢ÊÍ 
		}
		if (SXQ3727 == 7)        // ×¢ÊÍ 
		{
			SXQ1317[SXQ3450] = OK;      // ×¢ÊÍ 
			SXQ1035[SXQ3450] = 0;       // ×¢ÊÍ 
		}
		else if ((SXQ1035[SXQ3450] >= 3) || (SXQ1317[SXQ3450] == ERROR)) // ×¢ÊÍ 
		{
			if ((SXQ3727 == 1) || (SXQ3727 == 5))        // ×¢ÊÍ 
			{
				SXQ1317[SXQ3450] = 1;   // ×¢ÊÍ 
			}
			else if ((SXQ3727 == 2) || (SXQ3727 == 6))   // ×¢ÊÍ 
			{
				SXQ1317[SXQ3450] = 2;   // ×¢ÊÍ 
			}
			else
			{
				SXQ1317[SXQ3450] = 3;   // ×¢ÊÍ 
			}
		}

		// ×¢ÊÍ 
		if ((SXQ1795[1] > 1) && (SXQ1795[1] <= 14) && (SXQ1795[4] == SXQ1795[5]))
			// ×¢ÊÍ 
		{
			memcpy(SXQ3141, SXQ1795 + 4, SXQ1795[1]);
			SXQ3141[0] = SXQ1795[1];    // ×¢ÊÍ 
			SXQ3364 = SXQ1795[1];       // ×¢ÊÍ 
		}
		else
		{
			SXQ3364 = 0;        // ×¢ÊÍ 
			SXQ3141[1] = 0;     // ×¢ÊÍ 
		}

		if ((SXQ1795[1] <= 14) && (SXQ1795[2] > 1) && (SXQ1795[2] <= 40) && ((SXQ1795[1] + SXQ1795[2]) <= 40))
		{
			SXQ4367 = SXQ1795[1];
			if (SXQ1795[SXQ4367 + 4] == SXQ1795[SXQ4367 + 5])    // ×¢ÊÍ 
			{
				memcpy(SXQ3110, SXQ1795 + SXQ4367 + 4, SXQ1795[2]);
				SXQ3110[0] = SXQ1795[2];        // ×¢ÊÍ 
				SXQ3360 = SXQ1795[2];   // ×¢ÊÍ 
			}
			else                // ×¢ÊÍ 
			{
				SXQ3360 = 0;    // ×¢ÊÍ 
				SXQ3110[1] = 0; // ×¢ÊÍ 
			}
		}
		else
		{
			SXQ3360 = 0;        // ×¢ÊÍ 
			SXQ3110[1] = 0;     // ×¢ÊÍ 
		}

		if ((SXQ3364 != 0) || (SXQ3360 != 0))
		{
			// ×¢ÊÍ 
			if (SXQ1521[SXQ3450] != HSXQ012)       // ×¢ÊÍ 
			{
				SXQ3722 = SXQ1910(SXQ3110[1], SXQ3141[1], SXQ1521[SXQ3450], SXQ1795);
			}

			if (SXQ3722 == 1)    // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ1521[SXQ3450] = 0;   // ×¢ÊÍ 
				SXQ1304[SXQ3450] = 0;   // ×¢ÊÍ 
				SXQ855[SXQ3450] = 0;    // ×¢ÊÍ 
				SXQ1242[SXQ3450] = 0;   // ×¢ÊÍ 
			}

			// ×¢ÊÍ 
			SXQ2785 = SXQ1122(SXQ3141, SXQ1800[SXQ3450], SXQ3364);      // ×¢ÊÍ 
			if ((SXQ2785 == 1) || (SXQ1795[4] == HSXQ032) || (SXQ1795[4] == HSXQ019))  // ×¢ÊÍ 
			{
				memcpy(SXQ1800[SXQ3450], SXQ3141, SXQ3364);     // ×¢ÊÍ 
				SXQ2785 = 1;
			}

			SXQ2783 = SXQ1122(SXQ3110, SXQ1799[SXQ3450], SXQ3360);      // ×¢ÊÍ 
			if ((SXQ2783 == 1) || (SXQ3110[1] == HSXQ031) || (SXQ3110[1] == HSXQ019) || ((SXQ3360 > 0) && (SXQ3110[1] == HSXQ032)))        // ×¢ÊÍ 
			{
				memcpy(SXQ1799[SXQ3450], SXQ3110, SXQ3360);     // ×¢ÊÍ 
				SXQ2783 = 1;
			}

			if ((SXQ2785 == 0) && (SXQ2783 == 0) && ((SXQ3141[1] == HSXQ018) || (SXQ3110[1] == HSXQ018)))    // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ3727 = SXQ1795[3] & 7;       // ×¢ÊÍ 
				if (SXQ2465[SXQ3450] != SXQ3727) // ×¢ÊÍ 
				{
					if (SXQ3141[1] == HSXQ018)
					{
						SXQ2785 = 1;
					}
					if (SXQ3110[1] == HSXQ018)
					{
						SXQ2783 = 1;
					}
					SXQ2465[SXQ3450] = SXQ3727; // ×¢ÊÍ 
				}
			}

			if (((SXQ2785 == 1) || (SXQ2783 == 1)) && (SXQ3141[1] == SXQ3110[1]))        // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ2728.SXQ3107[0] = 0; // ×¢ÊÍ 
				SXQ2728.SXQ3107[1] = SXQ3141[1];        // ×¢ÊÍ 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ×¢ÊÍ 
				if ((SXQ2785 == 1) && (SXQ2783 == 0))
				{
					SXQ2728.SXQ3107[3] = 1;     // ×¢ÊÍ 
				}
				else if ((SXQ2785 == 0) && (SXQ2783 == 1))
				{
					SXQ2728.SXQ3107[3] = 2;     // ×¢ÊÍ 
				}
				else
				{
					SXQ2728.SXQ3107[3] = 3;     // ×¢ÊÍ 
				}

				// ×¢ÊÍ 
				if ((SXQ2785 == 1) && (SXQ3364 > 2))     // ×¢ÊÍ 
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3141 + 2, SXQ3364 - 2);      // ×¢ÊÍ 
				}
				if ((SXQ2783 == 1) && (SXQ3360 > 2) && (SXQ2728.SXQ3107[3] == 3))
				{
					memcpy(SXQ2728.SXQ3107 + SXQ3364 + 2, SXQ3110 + 2, SXQ3360 - 2);    // ×¢ÊÍ 
				}
				else if ((SXQ2783 == 1) && (SXQ3360 > 2) && (SXQ2728.SXQ3107[3] == 2))
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3110 + 2, SXQ3360 - 2);      // ×¢ÊÍ 
				}

				if ((SXQ3141[1] == HSXQ018) && (SXQ3364 == 3) && (SXQ3360 == 3))
				{
					SXQ2090[SXQ3450] = 1;       // ×¢ÊÍ 
				}

				/* ×¢ÊÍ ****** */
				SXQ2728.SXQ2767 = tickGet();    // ×¢ÊÍ 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ×¢ÊÍ 
			}
			else if ((SXQ2785 == 1) && (SXQ2783 == 1))   // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ2728.SXQ3107[0] = 0; // ×¢ÊÍ 
				SXQ2728.SXQ3107[1] = SXQ3141[1];        // ×¢ÊÍ 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ×¢ÊÍ 
				SXQ2728.SXQ3107[3] = 1; // ×¢ÊÍ 
				if ((SXQ2785 == 1) && (SXQ3364 > 2))     // ×¢ÊÍ 
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3141 + 2, SXQ3364 - 2);      // ×¢ÊÍ 
				}
				/* ×¢ÊÍ ****** */
				SXQ2728.SXQ2767 = tickGet();    // ×¢ÊÍ 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ×¢ÊÍ 

				// ×¢ÊÍ 
				SXQ2728.SXQ3107[1] = SXQ3110[1];        // ×¢ÊÍ 
				SXQ2728.SXQ3107[3] = 2; // ×¢ÊÍ 
				if ((SXQ2783 == 1) && (SXQ3360 > 2))
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3110 + 2, SXQ3360 - 2);      // ×¢ÊÍ 
				}
				/* ×¢ÊÍ ****** */
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ×¢ÊÍ 
			}
			else if ((SXQ2785 == 1) && (SXQ2783 == 0))   // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ2728.SXQ3107[0] = 0; // ×¢ÊÍ 
				SXQ2728.SXQ3107[1] = SXQ3141[1];        // ×¢ÊÍ 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ×¢ÊÍ 
				SXQ2728.SXQ3107[3] = 1; // ×¢ÊÍ 
				if ((SXQ2785 == 1) && (SXQ3364 > 2))     // ×¢ÊÍ 
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3141 + 2, SXQ3364 - 2);      // ×¢ÊÍ 
				}
				/* ×¢ÊÍ ****** */
				SXQ2728.SXQ2767 = tickGet();    // ×¢ÊÍ 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ×¢ÊÍ 
			}
			else if ((SXQ2785 == 0) && (SXQ2783 == 1))   // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ2728.SXQ3107[0] = 0; // ×¢ÊÍ 
				SXQ2728.SXQ3107[1] = SXQ3110[1];        // ×¢ÊÍ 
				SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ×¢ÊÍ 
				SXQ2728.SXQ3107[3] = 2; // ×¢ÊÍ 
				if ((SXQ2783 == 1) && (SXQ3360 > 2))
				{
					memcpy(SXQ2728.SXQ3107 + 4, SXQ3110 + 2, SXQ3360 - 2);      // ×¢ÊÍ 
				}

				/* ×¢ÊÍ ****** */
				SXQ2728.SXQ2767 = tickGet();    // ×¢ÊÍ 
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);   // ×¢ÊÍ 
			}
		}
	}
}

/* ×¢ÊÍ ** */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ ** */
void SXQ3491::SXQ568(unsigned char *SXQ1795)
{
	int i;                      // ×¢ÊÍ 

	unsigned char SXQ3450;      // ×¢ÊÍ 
	unsigned char SXQ3453;      // ×¢ÊÍ 
	unsigned char SXQ4427;      // ×¢ÊÍ 

	struct _SXQ2728 SXQ2728;    // ×¢ÊÍ 
	unsigned long SXQ2159;      // ×¢ÊÍ 
	unsigned short SXQ2165;

	union _SXQ4439
	{
		unsigned long SXQ2767;
		unsigned char SXQ4047[4];
	}
	SXQ4439;

	unsigned int SXQ1578;

	// ×¢ÊÍ 

	SXQ3450 = SXQ1795[0] - 0x60;        // ×¢ÊÍ 

	if (SXQ3450 < 12)            // ×¢ÊÍ 
	{
		SXQ2728.SXQ2767 = tickGet();    // ×¢ÊÍ 
		SXQ2728.SXQ3107[0] = 0; // ×¢ÊÍ 
		SXQ2728.SXQ3107[1] = 126;       // ×¢ÊÍ 
		SXQ2728.SXQ3107[2] = SXQ3450 + 1;       // ×¢ÊÍ 
		switch (SXQ1795[1])
		{
		case 0x99:         // ×¢ÊÍ 
			SXQ4427 = 1;
			break;
		case 0xA5:         // ×¢ÊÍ 
			SXQ4427 = 2;
			break;
		case 0xAA:         // ×¢ÊÍ 
			SXQ4427 = 3;
			break;
		case 0xCC:         // ×¢ÊÍ 
			SXQ4427 = 4;
			break;
		case 0x33:         // ×¢ÊÍ 
			SXQ4427 = 5;
			break;
		case 0x66:         // ×¢ÊÍ 
			SXQ4427 = 6;
			break;
		case 0xD6:         // ×¢ÊÍ 
			SXQ4427 = 7;
			break;
		case 0x7E:         // ×¢ÊÍ 
			SXQ4427 = 8;
			break;
		default:           // ×¢ÊÍ 
			SXQ4427 = 0;
			break;
		}
		if (SXQ4427 != 0)
		{
			SXQ3453 = SXQ3450 * 8 + SXQ4427 - 1;        // ×¢ÊÍ 
			SXQ2728.SXQ3107[3] = SXQ3453;       // ×¢ÊÍ 
			SXQ2728.SXQ3107[4] = SXQ1251[SXQ3453];      // ×¢ÊÍ 
			// ×¢ÊÍ 
			if (SXQ1090[SXQ3450].SXQ3419 == 1)   // ×¢ÊÍ 
			{
				SXQ1578 = SXQ1090[SXQ3450].SXQ2513;     // ×¢ÊÍ 
			}
			else
			{
				SXQ1578 = 0;    // ×¢ÊÍ 
			}

			if ((SXQ2728.SXQ2767 - SXQ1578) > 500)       // ×¢ÊÍ 
			{
				SXQ2159 = (long)((float)(SXQ1795[2] * 0x100 + SXQ1795[3]) * 0.3315 + (float)SXQ1795[4] / 0.281 + 0.369);        // ×¢ÊÍ 
				SXQ2165 = (unsigned short)SXQ2159;
				memcpy(&(SXQ2728.SXQ3107[5]), &SXQ2165, 2);
				if (SXQ2159 < 2000)      // ×¢ÊÍ 
				{
					SXQ4439.SXQ2767 = SXQ2728.SXQ2767 - SXQ2159;        // ×¢ÊÍ 
				}
				else            // ×¢ÊÍ 
				{
					SXQ4439.SXQ2767 = SXQ2728.SXQ2767 - 300;    // ×¢ÊÍ 
				}
				for (i = 0; i < 4; i++)  // ×¢ÊÍ 
				{
					SXQ2728.SXQ3107[i + 7] = SXQ4439.SXQ4047[i];
				}
				/* ×¢ÊÍ ***** */
				msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_LAU, 0, MSG_PRI_NORMAL);
			}
			// ×¢ÊÍ 
			// ×¢ÊÍ 
			// ×¢ÊÍ 
			SXQ1090[SXQ3450].SXQ3419 = 1;
			SXQ1090[SXQ3450].SXQ2513 = SXQ2728.SXQ2767;
		}
	}
}

/* ×¢ÊÍ ** */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ ** */
void SXQ3491::SXQ1120(unsigned char *SXQ1795)
{
	int i, j;                   // ×¢ÊÍ 
	static unsigned char SXQ1034[3] = { 0, 0, 0 };      // ×¢ÊÍ 

	unsigned char SXQ3101;      // ×¢ÊÍ 
	unsigned char SXQ3727;      // ×¢ÊÍ 
	int SXQ4367;

	// ×¢ÊÍ 

	struct _SXQ2728 SXQ2728;    // ×¢ÊÍ 
	union _SXQ2525 SXQ2525;     // ×¢ÊÍ 

	unsigned char SXQ4047[30];  // ×¢ÊÍ 
	unsigned char SXQ3722;      // ×¢ÊÍ 

	// ×¢ÊÍ 
	SXQ3101 = SXQ1795[0] - 0x40;

	if (SXQ3101 < 3)             // ×¢ÊÍ 
	{
		SXQ3155[SXQ3101] = 0;   // ×¢ÊÍ 

		// ×¢ÊÍ 
		SXQ3727 = SXQ1795[3] & 7;       // ×¢ÊÍ 

		if ((SXQ1069[SXQ3101] == OK) && (SXQ3727 != 5))  // ×¢ÊÍ 
		{
			SXQ1034[SXQ3101]++; // ×¢ÊÍ 
		}
		if (SXQ3727 == 5)        // ×¢ÊÍ 
		{
			SXQ1069[SXQ3101] = OK;      // ×¢ÊÍ 
			SXQ1034[SXQ3101] = 0;       // ×¢ÊÍ 
		}
		else if (SXQ1034[SXQ3101] >= 3)  // ×¢ÊÍ 
		{
			SXQ1069[SXQ3101] = 3;       // ×¢ÊÍ 
		}

		// ×¢ÊÍ 
		if ((SXQ1795[1] > 1) && (SXQ1795[1] < 24) && (SXQ1795[4] == SXQ1795[5]))
			// ×¢ÊÍ 
		{
			memcpy(SXQ4047, SXQ1795 + 4, SXQ1795[1]);
			SXQ4047[0] = SXQ1795[1];    // ×¢ÊÍ 
			SXQ4367 = SXQ1795[1];       // ×¢ÊÍ 
		}
		else
		{
			SXQ4367 = 0;        // ×¢ÊÍ 
		}

		if (SXQ4367 != 0)        // ×¢ÊÍ 
		{
			// ×¢ÊÍ 
			SXQ3722 = 0;
			SXQ3722 = SXQ1122(SXQ4047, SXQ1550[SXQ3101], SXQ4367);      // ×¢ÊÍ 

			if ((SXQ3722 == 1) || (SXQ4047[1] == HSXQ051) || (SXQ4047[1] == HSXQ060))   // ×¢ÊÍ 
			{
				memcpy(SXQ1550[SXQ3101], SXQ1795, SXQ4367);     // ×¢ÊÍ 
				memcpy(SXQ2525.SXQ4047, SXQ1795, SXQ4367 + 5);  // ×¢ÊÍ 

				// ×¢ÊÍ 
				SXQ3722 = SXQ1910(SXQ4047[1], 0, SXQ1222[SXQ3101], SXQ1795);
				if (SXQ3722 == 1)        // ×¢ÊÍ 
				{
					// ×¢ÊÍ 
					SXQ1222[SXQ3101] = 0;       // ×¢ÊÍ 
					SXQ1057[SXQ3101] = 0;       // ×¢ÊÍ 
					SXQ685[SXQ3101] = 0;        // ×¢ÊÍ 
				}

				// ×¢ÊÍ 
				SXQ2728.SXQ3107[0] = 0; // ×¢ÊÍ 
				SXQ2728.SXQ3107[1] = SXQ4047[1];        // ×¢ÊÍ 
				SXQ2728.SXQ3107[2] = SXQ3101 + 1;       // ×¢ÊÍ 
				if (((SXQ3722 == 1) || (SXQ4047[1] == HSXQ051) || (SXQ4047[1] == HSXQ060)) && (SXQ4367 > 2))    // ×¢ÊÍ 
				{
					memcpy(SXQ2728.SXQ3107 + 3, SXQ4047 + 2, SXQ4367 - 2);      // ×¢ÊÍ 
				}
				/* ×¢ÊÍ ****** */
				SXQ2728.SXQ2767 = tickGet();    // ×¢ÊÍ 
				msgQSend(SXQ1146, (char *)&SXQ2728, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);  // ×¢ÊÍ 
			}
		}
	}
}

/* ×¢ÊÍ ** */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ                 */
/* ×¢ÊÍ ** */
void SXQ3491::SXQ2002(void)
{
	int l, i, k;                // ×¢ÊÍ 

	unsigned char SXQ3444, SXQ3746;     // ×¢ÊÍ 
	union _SXQ2769 SXQ2769;     // ×¢ÊÍ 
	union _SXQ2526 SXQ2526;     // ×¢ÊÍ 
	unsigned char SXQ4423;      // ×¢ÊÍ 
	short SXQ2712;              // ×¢ÊÍ 
	unsigned char SXQ4427;      // ×¢ÊÍ 
	struct _SXQ2728 SXQ2728;    // ×¢ÊÍ 

	unsigned char SXQ1795[60];  // ×¢ÊÍ 
	unsigned char SXQ1491[20];  // ×¢ÊÍ 

	int SXQ3416 = 0;            // ×¢ÊÍ 

	int SXQ3365;                // ×¢ÊÍ 
	int SXQ1945;                // ×¢ÊÍ 
	unsigned char SXQ2741;      // ×¢ÊÍ 
	unsigned char SXQ2294[10][12];      // ×¢ÊÍ 
	unsigned char SXQ2295[10][3];       // ×¢ÊÍ 
	unsigned char SXQ3114[3];   // ×¢ÊÍ 

	for (l = 0; l < 12; l++)
	{
		SXQ3115[l] = 1;         // ×¢ÊÍ 
	}

	for (l = 0; l < 3; l++)
	{
		SXQ3114[l] = 1;         // ×¢ÊÍ 
	}

	/* ×¢ÊÍ ** */
	SXQ340 = msgQCreate(MAX_MSG_SCC, MSG_SIZE_SCC, MSG_Q_FIFO);

	/* ×¢ÊÍ ** */
	SXQ2769.SXQ1678.SXQ2741 = All_Lau;  // ×¢ÊÍ 
	SXQ2769.SXQ1678.SXQ3142 = 2;        // ×¢ÊÍ 
	SXQ2769.SXQ1678.SXQ3111 = 2;        // ×¢ÊÍ 
	SXQ2769.SXQ1678.SXQ3463 = 0;        // ×¢ÊÍ 

	for (i = 0; i < 2; i++)
	{
		SXQ2769.SXQ1678.SXQ2753[i] = HSXQ001;        // ×¢ÊÍ 
		SXQ2769.SXQ1678.SXQ2752[i] = HSXQ001;        // ×¢ÊÍ 
	}

	SXQ2769.SXQ1678.SXQ3417 = 0;        // ×¢ÊÍ 

	SXQ3365 = 9;                // ×¢ÊÍ 

	// ×¢ÊÍ 
	SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);       // ×¢ÊÍ 

	for (l = 0; l < 12; l++)
	{
		SXQ3444 = SXQ2440[l];
		SXQ2294[SXQ3444][l] = SXQ3365;  // ×¢ÊÍ 
		SXQ2033[SXQ3444][l][0] = 0x60 + l;      // ×¢ÊÍ 
		for (i = 1; i < SXQ3365; i++)
		{
			SXQ2033[SXQ3444][l][i] = SXQ2769.SXQ4047[i];        // ×¢ÊÍ 
		}
		SXQ3444++;
		SXQ2440[l] = SXQ3444;
		SXQ2833[l] = SXQ2440[l];
		SXQ2401[l]++;           // ×¢ÊÍ 
		SXQ3115[l]++;           // ×¢ÊÍ 
		SXQ1521[l] = HSXQ001;
		SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 
	}

	/* ×¢ÊÍ ** */
	SXQ2526.SXQ1423.SXQ2741 = All_Bait; // ×¢ÊÍ 
	SXQ2526.SXQ1423.SXQ2744 = 2;        // ×¢ÊÍ 
	SXQ2526.SXQ1423.SXQ3713 = 0;        // ×¢ÊÍ 
	SXQ2526.SXQ1423.SXQ3463 = 0;        // ×¢ÊÍ 

	for (i = 0; i < 2; i++)
	{
		SXQ2526.SXQ1423.SXQ2395[i] = HSXQ038;       // ×¢ÊÍ 
	}

	SXQ2526.SXQ1423.SXQ3417 = 0;        // ×¢ÊÍ 

	SXQ3365 = 7;                // ×¢ÊÍ 

	// ×¢ÊÍ 
	SXQ1945 = SXQ1915(CH3_BAIT, (char *)SXQ2526.SXQ4047, SXQ3365);      // ×¢ÊÍ 

	for (l = 0; l < 3; l++)
	{
		SXQ3444 = SXQ2441[l];
		SXQ2295[SXQ3444][l] = SXQ3365;  // ×¢ÊÍ 
		SXQ2034[SXQ3444][l][0] = 0x40 + l;      // ×¢ÊÍ 
		for (i = 1; i < 24; i++)
		{
			SXQ2034[SXQ3444][l][i] = SXQ2526.SXQ4047[i];        // ×¢ÊÍ 
		}
		SXQ3444++;
		SXQ2441[l] = SXQ3444;
		SXQ2834[l] = SXQ2441[l];
		SXQ3114[l]++;           // ×¢ÊÍ 
		SXQ1222[l] = HSXQ038;
		SXQ685[l] = SXQ464(SXQ1222[l]); // ×¢ÊÍ 
	}

	SXQ3416 = 0;                // ×¢ÊÍ 
	while (true)
	{
		// ×¢ÊÍ 
		semTake(SXQ1421, WAIT_FOREVER);
		SXQ3416++;

		// ×¢ÊÍ 
		for (l = 0; l < 12; l++) // ×¢ÊÍ 
		{
			if (SXQ1521[l] != 0) // ×¢ÊÍ 
			{
				SXQ1304[l]++;   // ×¢ÊÍ 
				if (SXQ1304[l] > SXQ855[l])      // ×¢ÊÍ 
				{
					// ×¢ÊÍ 
					SXQ2728.SXQ3107[0] = 0;     // ×¢ÊÍ 
					SXQ2728.SXQ3107[1] = SXQ1521[l];    // ×¢ÊÍ 
					SXQ2728.SXQ3107[2] = l + 1; // ×¢ÊÍ 
					SXQ2728.SXQ3107[3] = (unsigned char)ERROR;  // ×¢ÊÍ 
					/* ×¢ÊÍ ******* */
					SXQ2728.SXQ2767 = tickGet();        // ×¢ÊÍ 
					msgQSend(SXQ1408, (char *)&SXQ2728, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);      // ×¢ÊÍ 

					// ×¢ÊÍ 
					SXQ1521[l] = 0;     // ×¢ÊÍ 
					SXQ1304[l] = 0;     // ×¢ÊÍ 
					SXQ855[l] = 0;      // ×¢ÊÍ 
					SXQ1242[l] = 0;     // ×¢ÊÍ 
				}
			}
		}

		for (l = 0; l < 3; l++)  // ×¢ÊÍ 
		{
			if (SXQ1222[l] != 0) // ×¢ÊÍ 
			{
				SXQ1057[l]++;   // ×¢ÊÍ 
				if (SXQ1057[l] > SXQ685[l])      // ×¢ÊÍ 
				{
					// ×¢ÊÍ 
					SXQ2728.SXQ3107[0] = 0;     // ×¢ÊÍ 
					SXQ2728.SXQ3107[1] = SXQ1222[l];    // ×¢ÊÍ 
					SXQ2728.SXQ3107[2] = l + 1; // ×¢ÊÍ 
					SXQ2728.SXQ3107[3] = (unsigned char)ERROR;  // ×¢ÊÍ 
					/* ×¢ÊÍ ******* */
					SXQ2728.SXQ2767 = tickGet();        // ×¢ÊÍ 
					msgQSend(SXQ1146, (char *)&SXQ2728, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);      // ×¢ÊÍ 

					// ×¢ÊÍ 
					SXQ1222[l] = 0;     // ×¢ÊÍ 
					SXQ1057[l] = 0;     // ×¢ÊÍ 
					SXQ685[l] = 0;      // ×¢ÊÍ 
				}
			}
		}

		// ×¢ÊÍ 
		while (msgQReceive(SXQ340, (char *)SXQ1795, MSG_SIZE_SCC, 3 /*NO_WAIT */) != ERROR)     //s2sCs5s6s0s0sE
		{
			if (SXQ1795[1] == 250)       // ×¢ÊÍ 
			{
				switch (SXQ1795[2])
				{
				case 1:    // ×¢ÊÍ 
					memcpy(&SXQ2712, SXQ1795 + 4, 2);
					SXQ1194[SXQ1795[3] - 1].SXQ2889 = (char)(SXQ2712 / 3);
					memcpy(&SXQ2712, SXQ1795 + 6, 2);
					SXQ1194[SXQ1795[3] - 1].SXQ2896 = (char)(SXQ2712 / 3);
					break;
				default:
					break;
				}
			}
			else if (SXQ1795[1] == 70)   // ×¢ÊÍ 
			{
				// ×¢ÊÍ 
				SXQ1491[0] = SXQ1795[2];        // ×¢ÊÍ 
				SXQ1491[1] = SXQ1795[3];        // ×¢ÊÍ 
				SXQ1491[2] = 0; // ×¢ÊÍ 
				SXQ1491[3] = 0x05;      // ×¢ÊÍ 
				memcpy(SXQ1491 + 4, SXQ1795 + 4, (int)SXQ1795[3]);      // ×¢ÊÍ 

				SXQ1120(SXQ1491);       // ×¢ÊÍ 

				// ×¢ÊÍ 
				if ((SXQ1795[4] == HSXQ050) && (SXQ1795[5] == HSXQ050) && (SXQ2385 == 0))  // ×¢ÊÍ 
				{
					SXQ2385 = 2;        // ×¢ÊÍ 
				}
			}
			else                // ×¢ÊÍ 
			{
				SXQ3365 = 0;    // ×¢ÊÍ 
				/* ×¢ÊÍ ****** */
				if (((SXQ1795[1] >= 101) && (SXQ1795[1] <= 139) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 12)) || (SXQ1795[2] == 0x6F)))   // ×¢ÊÍ 
					|| ((SXQ1795[1] >= 171) && (SXQ1795[1] <= 199) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 3)) || (SXQ1795[2] == 0x4F))) // ×¢ÊÍ 
					)
				{
					if ((SXQ1795[1] >= 101) && (SXQ1795[1] <= 139) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 12)) || (SXQ1795[2] == 0x6F)))        // ×¢ÊÍ 
					{
						if (SXQ1795[2] != 0x6F)
						{
							SXQ2741 = 0x60 + SXQ1795[2] - 1;    // ×¢ÊÍ 
						}
						else
						{
							SXQ2741 = SXQ1795[2];       // ×¢ÊÍ 
						}
					}
					else if ((SXQ1795[1] >= 171) && (SXQ1795[1] <= 199) && (((SXQ1795[2] > 0) && (SXQ1795[2] <= 3)) || (SXQ1795[2] == 0x4F)))    // ×¢ÊÍ 
					{
						if (SXQ1795[2] != 0x4F)
						{
							SXQ2741 = 0x40 + SXQ1795[2] - 1;    // ×¢ÊÍ 
						}
						else
						{
							SXQ2741 = SXQ1795[2];       // ×¢ÊÍ 
						}
					}

					/* ×¢ÊÍ ******* */
					switch (SXQ1795[1])
					{
					case HSXQ001:       /* ×¢ÊÍ /*(1)sAsEs7s4101 9 bytes */
						SXQ2769.SXQ1678.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1678.SXQ3142 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1678.SXQ3111 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1678.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1678.SXQ2753[i] = HSXQ001;        // ×¢ÊÍ 
							SXQ2769.SXQ1678.SXQ2752[i] = HSXQ001;        // ×¢ÊÍ 
						}
						SXQ2769.SXQ1678.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 9;        // ×¢ÊÍ 
						break;
					case HSXQ002:    /* ×¢ÊÍ s6s1s1sBs7s4103 13 bytes */
						SXQ2769.SXQ1438.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
						}
						SXQ2769.SXQ1438.SXQ2050 = SXQ1795[3];       // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ797 = SXQ1795[4];        // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ2051 = SXQ1795[3];       // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ798 = SXQ1795[4];        // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ2889 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ2896 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 15;       // ×¢ÊÍ 
						break;
					case HSXQ003:   /* ×¢ÊÍ 5sCs9sFsEsEs7s4105 11 bytes */
						SXQ2769.SXQ758.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2769.SXQ758.SXQ3142 = 3; // ×¢ÊÍ 
						SXQ2769.SXQ758.SXQ3111 = 3; // ×¢ÊÍ 
						SXQ2769.SXQ758.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ758.SXQ2753[i] = HSXQ003;     // ×¢ÊÍ 
							SXQ2769.SXQ758.SXQ2752[i] = HSXQ003;     // ×¢ÊÍ 
						}
						SXQ2769.SXQ758.ucWorkmode1 = SXQ1795[3];    // ×¢ÊÍ 
						SXQ2769.SXQ758.ucWorkmode2 = SXQ1795[3];    // ×¢ÊÍ 
						SXQ2769.SXQ758.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ2413 = SXQ1795[3];  // ×¢ÊÍ 
							SXQ1194[SXQ4427].SXQ998 = 1;    // ×¢ÊÍ 
						}
						SXQ3365 = 11;       // ×¢ÊÍ 
						break;
					case HSXQ004:      /* ×¢ÊÍ s1s4s6sAs0s7s4107 9 bytes */
						SXQ2769.SXQ1437.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1437.SXQ3142 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1437.SXQ3111 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1437.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1437.SXQ2753[i] = HSXQ004;       // ×¢ÊÍ 
							SXQ2769.SXQ1437.SXQ2752[i] = HSXQ004;       // ×¢ÊÍ 
						}
						SXQ2769.SXQ1437.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ998 = 2;    // ×¢ÊÍ 
						}
						SXQ3365 = 9;        // ×¢ÊÍ 
						break;
					case HSXQ005:   /* ×¢ÊÍ 1s4s6s5s7s7s6s7s4109 8 bytes */
						SXQ2769.SXQ754.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2769.SXQ754.SXQ3142 = 3; // ×¢ÊÍ 
						SXQ2769.SXQ754.SXQ3111 = 0; // ×¢ÊÍ 
						SXQ2769.SXQ754.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ754.SXQ2753[i] = HSXQ005;     // ×¢ÊÍ 
						}
						if (SXQ1795[3] == 1)
						{
							SXQ2769.SXQ754.SXQ2067 = 0x7;   // ×¢ÊÍ 
						}
						else        // ×¢ÊÍ 
						{
							SXQ2769.SXQ754.SXQ2067 = 0x70;  // ×¢ÊÍ 
							// ×¢ÊÍ 
							SXQ4427 = SXQ1795[2] - 1;
							if (SXQ4427 < 12)
							{
								// ×¢ÊÍ 
								if (SXQ1521[SXQ4427] == 109)
								{
									// ×¢ÊÍ 
									SXQ1521[SXQ4427] = 0;   // ×¢ÊÍ 
									SXQ1304[SXQ4427] = 0;   // ×¢ÊÍ 
									SXQ855[SXQ4427] = 0;    // ×¢ÊÍ 
									SXQ1242[SXQ4427] = 0;   // ×¢ÊÍ 
								}
							}
						}
						SXQ2769.SXQ754.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 8;        // ×¢ÊÍ 
						break;
					case HSXQ006:    /* ×¢ÊÍ s7s6s6s1s0s5s7s4111 7 bytes */
						SXQ2769.SXQ942.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2769.SXQ942.SXQ3142 = 0; // ×¢ÊÍ 
						SXQ2769.SXQ942.SXQ3111 = 2; // ×¢ÊÍ 
						SXQ2769.SXQ942.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ942.SXQ2752[i] = HSXQ006;      // ×¢ÊÍ 
						}
						SXQ2769.SXQ942.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ007:     /* ×¢ÊÍ s6s2s0sBsDs7s4113 45 bytes */
						SXQ2769.SXQ1171.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1171.SXQ3142 = 6;        // ×¢ÊÍ 
						SXQ2769.SXQ1171.SXQ3111 = 32;       // ×¢ÊÍ 
						SXQ2769.SXQ1171.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1171.SXQ2753[i] = HSXQ007;      // ×¢ÊÍ 
							SXQ2769.SXQ1171.SXQ2752[i] = HSXQ007;      // ×¢ÊÍ 
						}
						memcpy(SXQ2769.SXQ4047 + 12, SXQ1795 + 3, 30);      // ×¢ÊÍ 
						// ×¢ÊÍ 
						SXQ2769.SXQ1171.SXQ1956 = SXQ2769.SXQ1171.SXQ1957;  /* ×¢ÊÍ itTrans.SXQ1957;/*s1s4s6sAs1s0sE,sEs3s7s9s2sCsAs6s8sAs3.s5sD:s2s6,-10800-10800 */
						SXQ2769.SXQ1171.SXQ926 = SXQ2769.SXQ1171.SXQ927;    /* ×¢ÊÍ ErectAngle1=SXQ2769.SXQ1171.SXQ927;/* s1s4s6s7s6s2,s5sD:s2s6s6,-600-6600 */
						SXQ2769.SXQ1171.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ998 = 3;    // ×¢ÊÍ 
							// ×¢ÊÍ 
							SXQ1194[SXQ4427].SXQ2889 = SXQ2769.SXQ1171.SXQ2889;
							SXQ1194[SXQ4427].SXQ2896 = SXQ2769.SXQ1171.SXQ2896;
						}
						SXQ3365 = 43;       // ×¢ÊÍ 
						break;
					case HSXQ008:       /* ×¢ÊÍ sFs4sD/sDs4sDs7s4115 9 bytes */
						SXQ2769.SXQ1439.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1439.SXQ3142 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ1439.SXQ3111 = 7;        // ×¢ÊÍ 
						SXQ2769.SXQ1439.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1439.SXQ2752[i] = HSXQ008;        // ×¢ÊÍ 
						}
						SXQ2769.SXQ1439.SXQ2438 = SXQ1795[3];       // ×¢ÊÍ 
						for (i = 0; i < 4; i++)
						{
							SXQ2769.SXQ1439.SXQ4423[i] = SXQ1795[4 + i];    /* ×¢ÊÍ +i];/*sCs9s9sDs7sCsFs1sCs9s0s4sD;s5sBsBs9s0s1sCs9s6s4s1sCs9 */
						}
						SXQ2769.SXQ1439.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 12;       // ×¢ÊÍ 
						break;
					case HSXQ009:  /* ×¢ÊÍ s0s5/sDs5s7s4117 10 bytes */
						SXQ2769.SXQ2341.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ2341.SXQ3142 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ2341.SXQ3111 = 10;       // ×¢ÊÍ 
						SXQ2769.SXQ2341.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ2341.SXQ2752[i] = HSXQ009;   // ×¢ÊÍ 
						}
						SXQ2769.SXQ2341.SXQ2069 = SXQ1795[3];       // ×¢ÊÍ 
						SXQ2769.SXQ2341.SXQ2438 = SXQ1795[4];       /* ×¢ÊÍ
																	×¢ÊÍ
																	×¢ÊÍ */
						for (i = 0; i < 4; i++)
						{
							SXQ2769.SXQ2341.SXQ4423[i] = SXQ1795[5 + i];    /* ×¢ÊÍ ;/*sCs9s9sDs7sCsFs1sCs9s0s4sD;s5sBsBs9s0s1sCs9s6s4s1sCs9 */
						}
						SXQ2769.SXQ2341.SXQ1816 = SXQ1795[9];
						SXQ2769.SXQ2341.SXQ1817 = SXQ1795[10];

						SXQ2769.SXQ2341.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 15;       // ×¢ÊÍ 
						break;
					case HSXQ010:     /* ×¢ÊÍ 0)s1s7s3s1s7s4119 7 bytes */
						SXQ2769.SXQ1963.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1963.SXQ3142 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ1963.SXQ3111 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1963.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1963.SXQ2752[i] = HSXQ010;      // ×¢ÊÍ 
						}
						SXQ2769.SXQ1963.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ011:  /* ×¢ÊÍ 9s0s5s5s2s7s4121 8 bytes */
						SXQ2769.SXQ761.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2769.SXQ761.SXQ3142 = 0; // ×¢ÊÍ 
						SXQ2769.SXQ761.SXQ3111 = 6; // ×¢ÊÍ 
						SXQ2769.SXQ761.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ761.SXQ2752[i] = HSXQ011;    // ×¢ÊÍ 
						}
						for (i = 0; i < 4; i++)
						{
							SXQ2769.SXQ761.SXQ4423[i] = SXQ1795[3 + i];     // ×¢ÊÍ 
						}
						SXQ2769.SXQ761.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 11;       // ×¢ÊÍ 
						break;
					case HSXQ012:    /* ×¢ÊÍ s9s1s4s7s4123 45sAs7s2 */
						SXQ2769.SXQ1679.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1679.SXQ3142 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ1679.SXQ3111 = 40;       // ×¢ÊÍ 
						SXQ2769.SXQ1679.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1679.SXQ2752[i] = HSXQ012;     // ×¢ÊÍ 
						}
						// ×¢ÊÍ 
						memcpy(SXQ2769.SXQ4047 + 6, SXQ1795 + 3, 36);       // ×¢ÊÍ 
						// ×¢ÊÍ 
						SXQ2769.SXQ1679.SXQ2420 = 0;
						for (i = 0; i < 36; i++)
						{
							SXQ2769.SXQ1679.SXQ2420 += SXQ2769.SXQ4047[i + 6];
						}
						SXQ2769.SXQ1679.SXQ3417 = 0;        // ×¢ÊÍ 
						// ×¢ÊÍ 
						SXQ4423 = SXQ2769.SXQ1679.SXQ4423;
						if (((SXQ2769.SXQ1679.SXQ3451 & 0x3f) < 32) && ((SXQ4423 & 0x0f) == ((SXQ4423 & 0xf0) / 0x10)))      /* ×¢ÊÍ tSXQ4664LauComm.SXQ3451&0x3f)<32) && ((SXQ4423&0x0f)==((SXQ4423&0xf0)/0x10))) /*sCs9s0s0s1s9s8sCsA0-31 */
						{
							SXQ4423 = SXQ4423 & 0x0f;       // ×¢ÊÍ 
							SXQ4423 = SXQ4423 + (SXQ1795[2] - 1) * 8;       // ×¢ÊÍ 

							SXQ1251[SXQ4423] = SXQ2769.SXQ1679.SXQ3451 & 0x3f;      // ×¢ÊÍ 
						}
						SXQ3365 = 45;       // ×¢ÊÍ 
						break;
					case HSXQ013:    /* ×¢ÊÍ 4s6s4sAsBs5s7s4129 11 bytes */
						SXQ2769.SXQ943.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2769.SXQ943.SXQ3142 = 3; // ×¢ÊÍ 
						SXQ2769.SXQ943.SXQ3111 = 4; // ×¢ÊÍ 
						SXQ2769.SXQ943.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ943.SXQ2753[i] = HSXQ013;      // ×¢ÊÍ 
							SXQ2769.SXQ943.SXQ2752[i] = HSXQ013;      // ×¢ÊÍ 
						}
						SXQ2769.SXQ943.SXQ2856 = SXQ1795[3];        // ×¢ÊÍ 
						SXQ2769.SXQ943.SXQ2504 = SXQ1795[4];        // ×¢ÊÍ 
						SXQ2769.SXQ943.SXQ2505 = SXQ1795[5];        // ×¢ÊÍ 
						SXQ2769.SXQ943.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 12;       // ×¢ÊÍ 
						break;
					case HSXQ014:        /* ×¢ÊÍ BsFs0sAs7s4133 9 bytes */
						SXQ2769.SXQ1977.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1977.SXQ3142 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1977.SXQ3111 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1977.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1977.SXQ2753[i] = HSXQ014; // ×¢ÊÍ 
							SXQ2769.SXQ1977.SXQ2752[i] = HSXQ014; // ×¢ÊÍ 
						}
						SXQ2769.SXQ1977.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 12)
						{
							SXQ1194[SXQ4427].SXQ2413 = 0;   // ×¢ÊÍ 
							SXQ1194[SXQ4427].SXQ998 = 0;    // ×¢ÊÍ 
						}
						else if (SXQ1795[2] == 0x6F)
						{
							for (i = 0; i < 12; i++)
							{
								SXQ1194[i].SXQ2413 = 0;     // ×¢ÊÍ 
								SXQ1194[i].SXQ998 = 0;      // ×¢ÊÍ 
							}
						}
						SXQ3365 = 9;        // ×¢ÊÍ 
						break;
					case HSXQ015:      /* ×¢ÊÍ 1s0s5s3sCs7s4135 11 bytes */
						SXQ2769.SXQ2366.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ2366.SXQ3142 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ2366.SXQ3111 = 3;        // ×¢ÊÍ 
						SXQ2769.SXQ2366.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ2366.SXQ2752[i] = HSXQ015;       // ×¢ÊÍ 
						}
						SXQ2769.SXQ2366.SXQ3416 = SXQ1795[3];       // ×¢ÊÍ 
						SXQ2769.SXQ2366.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 8;        // ×¢ÊÍ 
						break;
					case HSXQ016:    /* ×¢ÊÍ /*(15)s6sEs7s4137 11 bytes */
						SXQ2769.SXQ941.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2769.SXQ941.SXQ3142 = 3; // ×¢ÊÍ 
						SXQ2769.SXQ941.SXQ3111 = 3; // ×¢ÊÍ 
						SXQ2769.SXQ941.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ941.SXQ2753[i] = HSXQ016;      // ×¢ÊÍ 
							SXQ2769.SXQ941.SXQ2752[i] = HSXQ016;      // ×¢ÊÍ 
						}
						SXQ2769.SXQ941.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ2769.SXQ941.SXQ663 = SXQ1795[3]; // ×¢ÊÍ 
						SXQ2769.SXQ941.SXQ664 = SXQ1795[3]; // ×¢ÊÍ 
						SXQ3365 = 11;       // ×¢ÊÍ 
						break;
					case HSXQ017:
						SXQ2769.SXQ1173.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2769.SXQ1173.SXQ3142 = 2;        // ×¢ÊÍ 
						SXQ2769.SXQ1173.SXQ3111 = 0;        // ×¢ÊÍ 
						SXQ2769.SXQ1173.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2769.SXQ1173.SXQ2753[i] = HSXQ017;      // ×¢ÊÍ 
						}
						SXQ2769.SXQ1173.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ038:      /* ×¢ÊÍ /*(1)sAsEs7s4171  7 bytes */
						SXQ2526.SXQ1423.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2526.SXQ1423.SXQ2744 = 2;        // ×¢ÊÍ 
						SXQ2526.SXQ1423.SXQ3713 = 0;        // ×¢ÊÍ 
						SXQ2526.SXQ1423.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1423.SXQ2395[i] = HSXQ038;       // ×¢ÊÍ 
						}
						SXQ2526.SXQ1423.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ039:   /* ×¢ÊÍ Cs8s6s1s1sBs7s4173 9 bytes */
						SXQ2526.SXQ1158.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2526.SXQ1158.SXQ2744 = 4;        // ×¢ÊÍ 
						SXQ2526.SXQ1158.SXQ3713 = 0;        // ×¢ÊÍ 
						SXQ2526.SXQ1158.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ×¢ÊÍ 
						}
						SXQ2526.SXQ1158.SXQ2413 = SXQ1795[3];       // ×¢ÊÍ 
						SXQ2526.SXQ1158.SXQ998 = SXQ1795[4];        // ×¢ÊÍ 
						// ×¢ÊÍ 
						SXQ2526.SXQ1158.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ3365 = 9;        // ×¢ÊÍ 
						break;
					case HSXQ040:  /* ×¢ÊÍ 3)sBsFs5sCs9sFsEsE175 8 bytes */
						SXQ2526.SXQ605.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ605.SXQ2744 = 3; // ×¢ÊÍ 
						SXQ2526.SXQ605.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ605.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ605.SXQ2395[i] = HSXQ040;    // ×¢ÊÍ 
						}
						SXQ2526.SXQ605.SXQ2413 = SXQ1795[3];        // ×¢ÊÍ 
						SXQ2526.SXQ605.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ2413 = SXQ1795[3];   // ×¢ÊÍ 
							SXQ957[SXQ4427].SXQ998 = 1;     // ×¢ÊÍ 
						}
						SXQ3365 = 8;        // ×¢ÊÍ 
						break;
					case HSXQ041:     /* ×¢ÊÍ )s1s5s6sAs0s7s4177 7 bytes */
						SXQ2526.SXQ1157.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2526.SXQ1157.SXQ2744 = 2;        // ×¢ÊÍ 
						SXQ2526.SXQ1157.SXQ3713 = 0;        // ×¢ÊÍ 
						SXQ2526.SXQ1157.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1157.SXQ2395[i] = HSXQ041;      // ×¢ÊÍ 
						}
						SXQ2526.SXQ1157.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ998 = 2;     // ×¢ÊÍ 
						}
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ042:    /* ×¢ÊÍ Bs6s2s0sBsDs7s4179 19 bytes */
						SXQ2526.SXQ928.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ928.SXQ2744 = 14;        // ×¢ÊÍ 
						SXQ2526.SXQ928.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ928.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ928.SXQ2395[i] = HSXQ042;      // ×¢ÊÍ 
						}
						memcpy(SXQ2526.SXQ4047 + 6, SXQ1795 + 3, 12);       // ×¢ÊÍ 
						// ×¢ÊÍ 
						SXQ2526.SXQ928.SXQ2420 = 0;
						for (i = 0; i < 10; i++)
						{
							SXQ2526.SXQ928.SXQ2420 += SXQ2526.SXQ4047[i + 6];
						}
						SXQ2526.SXQ928.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ998 = 3;     // ×¢ÊÍ 
						}
						SXQ3365 = 19;       // ×¢ÊÍ 
						break;
					case HSXQ043:   /* ×¢ÊÍ /s9s9s1sFsEsEs7s4181 9 bytes */
						SXQ2526.SXQ746.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ746.SXQ2744 = 4; // ×¢ÊÍ 
						SXQ2526.SXQ746.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ746.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ746.SXQ2395[i] = HSXQ043;     // ×¢ÊÍ 
						}
						SXQ2526.SXQ746.SXQ1515 = SXQ1795[3];        // ×¢ÊÍ 
						SXQ2526.SXQ746.SXQ3418 = SXQ1795[4];        // ×¢ÊÍ 
						SXQ2526.SXQ746.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ998 = 4;     // ×¢ÊÍ 
						}
						SXQ3365 = 9;        // ×¢ÊÍ 
						break;
					case HSXQ044:   // ×¢ÊÍ 
						SXQ2526.SXQ741.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ741.SXQ2744 = 2; // ×¢ÊÍ 
						SXQ2526.SXQ741.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ741.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ741.SXQ2395[i] = HSXQ044;     // ×¢ÊÍ 
						}
						SXQ2526.SXQ741.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ045:    /* ×¢ÊÍ 0s8sB/sDs8sBs7s4185 8 bytes */
						SXQ2526.SXQ930.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ930.SXQ2744 = 3; // ×¢ÊÍ 
						SXQ2526.SXQ930.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ930.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ930.SXQ2395[i] = HSXQ045;      // ×¢ÊÍ 
						}
						SXQ2526.SXQ930.SXQ2069 = SXQ1795[3];        // ×¢ÊÍ 
						SXQ2526.SXQ930.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							if (SXQ1795[3] == 0x7)   // ×¢ÊÍ 
							{
								SXQ957[SXQ4427].SXQ998 = 5; // ×¢ÊÍ 
							}
							else
							{
								SXQ957[SXQ4427].SXQ998 = 4; // ×¢ÊÍ 
							}
						}
						SXQ3365 = 8;        // ×¢ÊÍ 
						break;
					case HSXQ046:        /* ×¢ÊÍ s1sFsBsFs7s4187 8 bytes */
						SXQ2526.SXQ1960.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2526.SXQ1960.SXQ2744 = 3;        // ×¢ÊÍ 
						SXQ2526.SXQ1960.SXQ3713 = 0;        // ×¢ÊÍ 
						SXQ2526.SXQ1960.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1960.SXQ2395[i] = HSXQ046; // ×¢ÊÍ 
						}
						SXQ2526.SXQ1960.SXQ2068 = SXQ1795[3];       // ×¢ÊÍ 
						SXQ2526.SXQ1960.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							if (SXQ1795[3] == 0x7)   // ×¢ÊÍ 
							{
								SXQ957[SXQ4427].SXQ998 = 6; // ×¢ÊÍ 
							}
							else
							{
								SXQ957[SXQ4427].SXQ998 = 5; // ×¢ÊÍ 
							}
						}
						SXQ3365 = 8;        // ×¢ÊÍ 
						break;
					case HSXQ047:   /* ×¢ÊÍ s5s6s4sAsBs5s7s4189         8 bytes */
						SXQ2526.SXQ743.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ743.SXQ2744 = 2; // ×¢ÊÍ 
						SXQ2526.SXQ743.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ743.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ743.SXQ2395[i] = HSXQ047;     // ×¢ÊÍ 
						}
						SXQ2526.SXQ743.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ048:       /* ×¢ÊÍ )sBsFs0sAs7s4193 7 bytes */
						SXQ2526.SXQ1671.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
						SXQ2526.SXQ1671.SXQ2744 = 2;        // ×¢ÊÍ 
						SXQ2526.SXQ1671.SXQ3713 = 0;        // ×¢ÊÍ 
						SXQ2526.SXQ1671.SXQ3463 = 0;        // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ1671.SXQ2395[i] = HSXQ048;        // ×¢ÊÍ 
						}
						SXQ2526.SXQ1671.SXQ3417 = 0;        // ×¢ÊÍ 
						SXQ4427 = SXQ1795[2] - 1;   // ×¢ÊÍ 
						if (SXQ4427 < 3)
						{
							SXQ957[SXQ4427].SXQ2413 = SXQ1795[3];   // ×¢ÊÍ 
							SXQ957[SXQ4427].SXQ998 = 0;     // ×¢ÊÍ 
						}
						else if (SXQ1795[2] == 0x4F)
						{
							for (i = 0; i < 3; i++)
							{
								SXQ957[i].SXQ2413 = 0;      // ×¢ÊÍ 
								SXQ957[i].SXQ998 = 0;       // ×¢ÊÍ 
							}
						}
						SXQ3365 = 7;        // ×¢ÊÍ 
						break;
					case HSXQ049:   /* ×¢ÊÍ k: /*(11)s6sEs7s4197 8 bytes */
						SXQ2526.SXQ742.SXQ2741 = SXQ2741;   // ×¢ÊÍ 
						SXQ2526.SXQ742.SXQ2744 = 3; // ×¢ÊÍ 
						SXQ2526.SXQ742.SXQ3713 = 0; // ×¢ÊÍ 
						SXQ2526.SXQ742.SXQ3463 = 0; // ×¢ÊÍ 
						for (i = 0; i < 2; i++)
						{
							SXQ2526.SXQ742.SXQ2395[i] = HSXQ049;     // ×¢ÊÍ 
						}
						SXQ2526.SXQ742.SXQ811 = SXQ1795[3]; // ×¢ÊÍ 
						SXQ2526.SXQ742.SXQ3417 = 0; // ×¢ÊÍ 
						SXQ3365 = 8;        // ×¢ÊÍ 
						break;
					default:
						SXQ3365 = 0;        // ×¢ÊÍ 
						break;
					}

					if (SXQ3365 > 0)     // ×¢ÊÍ 
					{
						// ×¢ÊÍ 
						switch (SXQ2741)        // ×¢ÊÍ 
						{
						case All_Lau:      // ×¢ÊÍ 
							for (l = 0; l < 12; l++)
							{
								SXQ3444 = SXQ2440[l];
								SXQ2033[SXQ3444][l][0] = 0x60 + l;  // ×¢ÊÍ 
								for (i = 1; i < SXQ3365; i++)
								{
									SXQ2033[SXQ3444][l][i] = SXQ2769.SXQ4047[i];
								}
								SXQ2294[SXQ3444][l] = SXQ3365;      // ×¢ÊÍ 
								SXQ3444++;
								if (SXQ3444 >= 10)
								{
									SXQ3444 = 0;    // ×¢ÊÍ 
								}
								SXQ2440[l] = SXQ3444;
							}
							break;
						case All_Bait:     // ×¢ÊÍ 
							for (l = 0; l < 3; l++)
							{
								SXQ3444 = SXQ2441[l];
								SXQ2034[SXQ3444][l][0] = 0x40 + l;  // ×¢ÊÍ 
								for (i = 1; i < SXQ3365; i++)
								{
									SXQ2034[SXQ3444][l][i] = SXQ2526.SXQ4047[i];
								}
								SXQ2295[SXQ3444][l] = SXQ3365;      // ×¢ÊÍ 
								SXQ3444++;
								if (SXQ3444 >= 10)
								{
									SXQ3444 = 0;    // ×¢ÊÍ 
								}
								SXQ2441[l] = SXQ3444;
							}
							break;
						case 0x60: // ×¢ÊÍ 
						case 0x61: // ×¢ÊÍ 
						case 0x62: // ×¢ÊÍ 
						case 0x63: // ×¢ÊÍ 
						case 0x64: // ×¢ÊÍ 
						case 0x65: // ×¢ÊÍ 
						case 0x66: // ×¢ÊÍ 
						case 0x67: // ×¢ÊÍ 
						case 0x68: // ×¢ÊÍ 
						case 0x69: // ×¢ÊÍ 
						case 0x6a: // ×¢ÊÍ 
						case 0x6b: // ×¢ÊÍ 
							l = SXQ2741 - 0x60;
							if ((SXQ2769.SXQ1439.SXQ2752[0] == HSXQ008) || (SXQ2769.SXQ1963.SXQ2752[0] == HSXQ010) || (SXQ2769.SXQ1679.SXQ2752[0] == HSXQ012))
								// ×¢ÊÍ 
							{
								if (SXQ1521[l] == HSXQ009)   // ×¢ÊÍ 
								{
									// ×¢ÊÍ 
									SXQ3746 = SXQ2833[l];
									SXQ3444 = SXQ2440[l];
									memcpy(SXQ2033[SXQ3746][l], SXQ2769.SXQ4047, SXQ3365);
									SXQ2294[SXQ3746][l] = SXQ3365;  // ×¢ÊÍ 
									if (SXQ3746 == SXQ3444)
									{
										SXQ3444++;
										if (SXQ3444 >= 10)
										{
											SXQ3444 = 0;    // ×¢ÊÍ 
										}
										if (SXQ3746 == 0)
										{
											SXQ3746 = 10;
										}
										SXQ3746--;
									}
									memcpy(SXQ2033[SXQ3444][l], SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
									SXQ2294[SXQ3444][l] = SXQ2294[SXQ3746][l];      // ×¢ÊÍ 
									// ×¢ÊÍ 
									SXQ1521[l] = 0; // ×¢ÊÍ 
									SXQ1304[l] = 0; // ×¢ÊÍ 
									SXQ855[l] = 0;  // ×¢ÊÍ 
									SXQ1242[l] = 0; // ×¢ÊÍ 
								}
								else if ((SXQ1521[l] == 0) && (SXQ2833[l] != SXQ2440[l]) && (SXQ2033[SXQ2833[l]][l][4] == HSXQ009))
								{
									// ×¢ÊÍ 
									SXQ3746 = SXQ2833[l];
									SXQ3444 = SXQ2440[l];
									memcpy(SXQ2033[SXQ3444][l], SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
									SXQ2294[SXQ3444][l] = SXQ2294[SXQ3746][l];      // ×¢ÊÍ 
									memcpy(SXQ2033[SXQ3746][l], SXQ2769.SXQ4047, SXQ3365);
									SXQ2294[SXQ3746][l] = SXQ3365;  // ×¢ÊÍ 
								}
								else
								{
									SXQ3444 = SXQ2440[l];
									memcpy(SXQ2033[SXQ3444][l], SXQ2769.SXQ4047, SXQ3365);
									SXQ2294[SXQ3444][l] = SXQ3365;  // ×¢ÊÍ 
								}
							}
							else
							{
								SXQ3444 = SXQ2440[l];
								memcpy(SXQ2033[SXQ3444][l], SXQ2769.SXQ4047, SXQ3365);
								SXQ2294[SXQ3444][l] = SXQ3365;      // ×¢ÊÍ 
							}
							SXQ3444++;
							if (SXQ3444 >= 10)
							{
								SXQ3444 = 0;        // ×¢ÊÍ 
							}
							SXQ2440[l] = SXQ3444;
							break;
						case 0x40: // ×¢ÊÍ 
						case 0x41: // ×¢ÊÍ 
						case 0x42: // ×¢ÊÍ 
							l = SXQ2741 - 0x40;
							SXQ3444 = SXQ2441[l];
							memcpy(SXQ2034[SXQ3444][l], SXQ2526.SXQ4047, SXQ3365);
							SXQ2295[SXQ3444][l] = SXQ3365;  // ×¢ÊÍ 
							SXQ3444++;
							if (SXQ3444 >= 10)
							{
								SXQ3444 = 0;        // ×¢ÊÍ 
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

		/* ×¢ÊÍ **** */
		/* ×¢ÊÍ                                 */
		/* ×¢ÊÍ **** */
		if (((((SXQ3416 + 1) % 4) == 0) && (SXQ1935 == 0)) || ((SXQ1935 != 0) && ((SXQ1935 % 4) == 2)))  // ×¢ÊÍ 
		{
			// ×¢ÊÍ 
			l = 0;
			if ((SXQ2833[l] != SXQ2440[l]) &&    // ×¢ÊÍ 
				((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

				// ×¢ÊÍ 
				if (SXQ1521[l] == 0)     // ×¢ÊÍ 
				{
					memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
					if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ×¢ÊÍ 
					{
						SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ×¢ÊÍ 
						SXQ1304[l] = 0; // ×¢ÊÍ 
						SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 
						SXQ1242[l] = 1; // ×¢ÊÍ 
					}
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ×¢ÊÍ 
				}
				SXQ2833[l] = SXQ3746;
				SXQ2401[l] = 1;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2833[l] != SXQ2440[l]) &&       // ×¢ÊÍ 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

				// ×¢ÊÍ 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2833[l] == SXQ2440[l]) &&       // ×¢ÊÍ 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ×¢ÊÍ 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if (SXQ1521[l] == 0)
			{
				SXQ1194[l].SXQ4071 += 4;
				if (SXQ1194[l].SXQ4071 >= 60)    // ×¢ÊÍ 
				{
					SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
					}
					SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
					SXQ3365 = 15;       // ×¢ÊÍ 

					// ×¢ÊÍ 
					SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
					// ×¢ÊÍ 

					SXQ1194[l].SXQ4071 = 0;     // ×¢ÊÍ 
					SXQ3115[l]++;       // ×¢ÊÍ 
					if (SXQ3115[l] > 7)
					{
						SXQ3115[l] = 0;
					}
					SXQ3455[l]++;       // ×¢ÊÍ 
				}
			}
			taskDelay(10);

			// ×¢ÊÍ 
			if ((SXQ2834[0] != SXQ2441[0]) &&    // ×¢ÊÍ 
				((SXQ1222[0] == 0) || (SXQ1222[0] == SXQ2034[SXQ2834[0]][0][4])))        // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[0];
				SXQ2034[SXQ3746][0][3] = SXQ3114[0] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][0], SXQ2295[SXQ3746][0]);
				if (SXQ1222[0] == 0)     // ×¢ÊÍ 
				{
					SXQ1222[0] = SXQ2034[SXQ3746][0][4];        // ×¢ÊÍ 
					SXQ1057[0] = 0;     // ×¢ÊÍ 
					SXQ685[0] = SXQ464(SXQ1222[0]);     // ×¢ÊÍ 
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ×¢ÊÍ 
				}
				SXQ2834[0] = SXQ3746;
				SXQ2402[0] = 1;
				SXQ957[0].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[0]++;   // ×¢ÊÍ 
				if (SXQ3114[0] > 7)
				{
					SXQ3114[0] = 0;
				}
				SXQ3155[0]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2834[0] != SXQ2441[0]) &&       // ×¢ÊÍ 
				(SXQ1222[0] != 0) && (SXQ1057[0] < SXQ685[0]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[0];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][0][3] = SXQ3114[0] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][0], SXQ2295[SXQ3746][0]);
				SXQ2402[0]++;
				SXQ957[0].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[0]++;   // ×¢ÊÍ 
				if (SXQ3114[0] > 7)
				{
					SXQ3114[0] = 0;
				}
				SXQ3155[0]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2834[0] == SXQ2441[0]) &&       // ×¢ÊÍ 
				(SXQ1222[0] != 0) && (SXQ1057[0] < SXQ685[0]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[0];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][0][3] = SXQ3114[0] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][0], SXQ2295[SXQ3746][0]);
				SXQ2402[0]++;
				SXQ957[0].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[0]++;   // ×¢ÊÍ 
				if (SXQ3114[0] > 7)
				{
					SXQ3114[0] = 0;
				}
				SXQ3155[0]++;   // ×¢ÊÍ 
			}
			else
			{
				SXQ957[0].SXQ4071 += 4;
				if (SXQ957[0].SXQ4071 >= 100)    // ×¢ÊÍ 
				{
					SXQ2526.SXQ1158.SXQ2741 = 0x40;     // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ2744 = 4;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3713 = 0;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3463 = SXQ3114[0] << 5;  // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ×¢ÊÍ 
					}
					SXQ2526.SXQ1158.SXQ2413 = SXQ957[0].SXQ2413;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ998 = SXQ957[0].SXQ998;  // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3417 = 0;        // ×¢ÊÍ 
					SXQ3365 = 9;        // ×¢ÊÍ 
					// ×¢ÊÍ 
					SXQ1913(SXQ2385, (char *)SXQ2526.SXQ4047, SXQ3365);

					SXQ437[0]++;        // ×¢ÊÍ 

					SXQ957[0].SXQ4071 = 0;      // ×¢ÊÍ 
					SXQ3114[0]++;       // ×¢ÊÍ 
					if (SXQ3114[0] > 7)
					{
						SXQ3114[0] = 0;
					}
					SXQ3155[0]++;       // ×¢ÊÍ 
				}
			}

			taskDelay(10);

			// ×¢ÊÍ 
			for (l = 1; l < 12; l++)
			{
				if ((l == 1) || (l == 6) || (l == 8))
				{
					if ((SXQ2833[l] != SXQ2440[l]) &&    // ×¢ÊÍ 
						((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

						// ×¢ÊÍ 
						if (SXQ1521[l] == 0)     // ×¢ÊÍ 
						{
							memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
							if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ×¢ÊÍ 
							{
								SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ×¢ÊÍ 
								SXQ1304[l] = 0; // ×¢ÊÍ 
								SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 
								SXQ1242[l] = 1; // ×¢ÊÍ 
							}
						}
						SXQ3746++;
						if (SXQ3746 >= 10)
						{
							SXQ3746 = 0;        // ×¢ÊÍ 
						}
						SXQ2833[l] = SXQ3746;
						SXQ2401[l] = 1;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if ((SXQ2833[l] != SXQ2440[l]) &&       // ×¢ÊÍ 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

						// ×¢ÊÍ 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if ((SXQ2833[l] == SXQ2440[l]) &&       // ×¢ÊÍ 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ×¢ÊÍ 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if (SXQ1521[l] == 0)
					{
						SXQ1194[l].SXQ4071 += 4;
						if (SXQ1194[l].SXQ4071 >= 60)    // ×¢ÊÍ 
						{
							SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ×¢ÊÍ 
							for (i = 0; i < 2; i++)
							{
								SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
								SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
							}
							SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
							SXQ3365 = 15;       // ×¢ÊÍ 

							// ×¢ÊÍ 
							SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
							// ×¢ÊÍ 

							SXQ1194[l].SXQ4071 = 0;     // ×¢ÊÍ 
							SXQ3115[l]++;       // ×¢ÊÍ 
							if (SXQ3115[l] > 7)
							{
								SXQ3115[l] = 0;
							}
							SXQ3455[l]++;       // ×¢ÊÍ 
						}
					}
					if ((l == 1) || (l == 6))
					{
						taskDelay(DelayTime);
					}
				}
			}
		}
		if (((((SXQ3416 + 2) % 4) == 0) && (SXQ1935 == 0)) || ((SXQ1935 != 0) && ((SXQ1935 % 4) == 3)))  // ×¢ÊÍ 
		{
			// ×¢ÊÍ 
			l = 2;
			if ((SXQ2833[l] != SXQ2440[l]) &&    // ×¢ÊÍ 
				((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ×¢ÊÍ 
				if (SXQ1521[l] == 0)     // ×¢ÊÍ 
				{
					memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

					if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ×¢ÊÍ 
					{
						SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ×¢ÊÍ 
						SXQ1304[l] = 0; // ×¢ÊÍ 
						SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 

						SXQ1242[l] = 1; // ×¢ÊÍ 
					}
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ×¢ÊÍ 
				}
				SXQ2833[l] = SXQ3746;
				SXQ2401[l] = 1;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2833[l] != SXQ2440[l]) &&       // ×¢ÊÍ 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

				// ×¢ÊÍ 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2833[l] == SXQ2440[l]) &&       // ×¢ÊÍ 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ×¢ÊÍ 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if (SXQ1521[l] == 0)
			{
				SXQ1194[l].SXQ4071 += 4;
				if (SXQ1194[l].SXQ4071 >= 60)    // ×¢ÊÍ 
				{
					SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
					}
					SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
					SXQ3365 = 15;       // ×¢ÊÍ 

					// ×¢ÊÍ 
					SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
					// ×¢ÊÍ 
					SXQ1194[l].SXQ4071 = 0;     // ×¢ÊÍ 
					SXQ3115[l]++;       // ×¢ÊÍ 
					if (SXQ3115[l] > 7)
					{
						SXQ3115[l] = 0;
					}
					SXQ3455[l]++;       // ×¢ÊÍ 
				}
			}
			taskDelay(10);

			// ×¢ÊÍ 
			if ((SXQ2834[1] != SXQ2441[1]) &&    // ×¢ÊÍ 
				((SXQ1222[1] == 0) || (SXQ1222[1] == SXQ2034[SXQ2834[1]][1][4])))        // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[1];
				SXQ2034[SXQ3746][1][3] = SXQ3114[1] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][1], SXQ2295[SXQ3746][1]);
				if (SXQ1222[1] == 0)     // ×¢ÊÍ 
				{
					SXQ1222[1] = SXQ2034[SXQ3746][1][4];        // ×¢ÊÍ 
					SXQ1057[1] = 0;     // ×¢ÊÍ 
					SXQ685[1] = SXQ464(SXQ1222[1]);     // ×¢ÊÍ 
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ×¢ÊÍ 
				}
				SXQ2834[1] = SXQ3746;
				SXQ2402[1] = 1;
				SXQ957[1].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[1]++;   // ×¢ÊÍ 
				if (SXQ3114[1] > 7)
				{
					SXQ3114[1] = 0;
				}
				SXQ3155[1]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2834[1] != SXQ2441[1]) &&       // ×¢ÊÍ 
				(SXQ1222[1] != 0) && (SXQ1057[1] < SXQ685[1]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[1];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][1][3] = SXQ3114[1] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][1], SXQ2295[SXQ3746][1]);
				SXQ2402[1]++;
				SXQ957[1].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[1]++;   // ×¢ÊÍ 
				if (SXQ3114[1] > 7)
				{
					SXQ3114[1] = 0;
				}
				SXQ3155[1]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2834[1] == SXQ2441[1]) &&       // ×¢ÊÍ 
				(SXQ1222[1] != 0) && (SXQ1057[1] < SXQ685[1]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[1];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][1][3] = SXQ3114[1] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][1], SXQ2295[SXQ3746][1]);
				SXQ2402[1]++;
				SXQ957[1].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[1]++;   // ×¢ÊÍ 
				if (SXQ3114[1] > 7)
				{
					SXQ3114[1] = 0;
				}
				SXQ3155[1]++;   // ×¢ÊÍ 
			}
			else
			{
				SXQ957[1].SXQ4071 += 4;
				if (SXQ957[1].SXQ4071 >= 100)    // ×¢ÊÍ 
				{
					SXQ2526.SXQ1158.SXQ2741 = 0x41;     // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ2744 = 4;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3713 = 0;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3463 = SXQ3114[1] << 5;  // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ×¢ÊÍ 
					}
					SXQ2526.SXQ1158.SXQ2413 = SXQ957[1].SXQ2413;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ998 = SXQ957[1].SXQ998;  // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3417 = 0;        // ×¢ÊÍ 
					SXQ3365 = 9;        // ×¢ÊÍ 
					// ×¢ÊÍ 
					SXQ1913(SXQ2385, (char *)SXQ2526.SXQ4047, SXQ3365);

					SXQ437[1]++;        // ×¢ÊÍ 

					SXQ957[1].SXQ4071 = 0;      // ×¢ÊÍ 
					SXQ3114[1]++;       // ×¢ÊÍ 
					if (SXQ3114[1] > 7)
					{
						SXQ3114[1] = 0;
					}
					SXQ3155[1]++;       // ×¢ÊÍ 
				}
			}

			taskDelay(10);

			// ×¢ÊÍ 
			for (l = 3; l < 12; l++)
			{
				if ((l == 3) || (l == 7) || (l == 9))
				{
					if ((SXQ2833[l] != SXQ2440[l]) &&    // ×¢ÊÍ 
						((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ×¢ÊÍ 
						if (SXQ1521[l] == 0)     // ×¢ÊÍ 
						{
							memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

							if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ×¢ÊÍ 
							{
								SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ×¢ÊÍ 
								SXQ1304[l] = 0; // ×¢ÊÍ 
								SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 

								SXQ1242[l] = 1; // ×¢ÊÍ 
							}
						}
						SXQ3746++;
						if (SXQ3746 >= 10)
						{
							SXQ3746 = 0;        // ×¢ÊÍ 
						}
						SXQ2833[l] = SXQ3746;
						SXQ2401[l] = 1;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if ((SXQ2833[l] != SXQ2440[l]) &&       // ×¢ÊÍ 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);

						// ×¢ÊÍ 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if ((SXQ2833[l] == SXQ2440[l]) &&       // ×¢ÊÍ 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ×¢ÊÍ 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if (SXQ1521[l] == 0)
					{
						SXQ1194[l].SXQ4071 += 4;
						if (SXQ1194[l].SXQ4071 >= 60)    // ×¢ÊÍ 
						{
							SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ×¢ÊÍ 
							for (i = 0; i < 2; i++)
							{
								SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
								SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
							}
							SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
							SXQ3365 = 15;       // ×¢ÊÍ 

							// ×¢ÊÍ 
							SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
							// ×¢ÊÍ 
							SXQ1194[l].SXQ4071 = 0;     // ×¢ÊÍ 
							SXQ3115[l]++;       // ×¢ÊÍ 
							if (SXQ3115[l] > 7)
							{
								SXQ3115[l] = 0;
							}
							SXQ3455[l]++;       // ×¢ÊÍ 
						}
					}
					if ((l == 3) || (l == 7))
					{
						taskDelay(DelayTime);
					}
				}
			}
		}
		if (((((SXQ3416 + 3) % 4) == 0) && (SXQ1935 == 0)) || ((SXQ1935 != 0) && ((SXQ1935 % 4) == 1)))  // ×¢ÊÍ 
		{
			// ×¢ÊÍ 
			l = 4;
			if ((SXQ2833[l] != SXQ2440[l]) &&    // ×¢ÊÍ 
				((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ×¢ÊÍ 
				if (SXQ1521[l] == 0)     // ×¢ÊÍ 
				{
					memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
					if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ×¢ÊÍ 
					{
						SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ×¢ÊÍ 
						SXQ1304[l] = 0; // ×¢ÊÍ 
						SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 
						SXQ1242[l] = 1; // ×¢ÊÍ 
					}
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ×¢ÊÍ 
				}
				SXQ2833[l] = SXQ3746;
				SXQ2401[l] = 1;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2833[l] != SXQ2440[l]) &&       // ×¢ÊÍ 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ×¢ÊÍ 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2833[l] == SXQ2440[l]) &&       // ×¢ÊÍ 
				(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2833[l];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
				// ×¢ÊÍ 
				SXQ2401[l]++;
				SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
				SXQ3115[l]++;   // ×¢ÊÍ 
				if (SXQ3115[l] > 7)
				{
					SXQ3115[l] = 0;
				}
				SXQ3455[l]++;   // ×¢ÊÍ 
			}
			else if (SXQ1521[l] == 0)
			{
				SXQ1194[l].SXQ4071 += 4;
				if (SXQ1194[l].SXQ4071 >= 60)    // ×¢ÊÍ 
				{
					SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
						SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
					}
					SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ×¢ÊÍ 
					SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
					SXQ3365 = 15;       // ×¢ÊÍ 

					// ×¢ÊÍ 
					SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
					// ×¢ÊÍ 
					SXQ1194[l].SXQ4071 = 0;     // ×¢ÊÍ 
					SXQ3115[l]++;       // ×¢ÊÍ 
					if (SXQ3115[l] > 7)
					{
						SXQ3115[l] = 0;
					}
					SXQ3455[l]++;       // ×¢ÊÍ 
				}
			}

			taskDelay(10);

			// ×¢ÊÍ 
			if ((SXQ2834[2] != SXQ2441[2]) &&    // ×¢ÊÍ 
				((SXQ1222[2] == 0) || (SXQ1222[2] == SXQ2034[SXQ2834[2]][2][4])))        // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[2];
				SXQ2034[SXQ3746][2][3] = SXQ3114[2] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][2], SXQ2295[SXQ3746][2]);
				if (SXQ1222[2] == 0)     // ×¢ÊÍ 
				{
					SXQ1222[2] = SXQ2034[SXQ3746][2][4];        // ×¢ÊÍ 
					SXQ1057[2] = 0;     // ×¢ÊÍ 
					SXQ685[2] = SXQ464(SXQ1222[2]);     // ×¢ÊÍ 
				}
				SXQ3746++;
				if (SXQ3746 >= 10)
				{
					SXQ3746 = 0;        // ×¢ÊÍ 
				}
				SXQ2834[2] = SXQ3746;
				SXQ2402[2] = 1;
				SXQ957[2].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[2]++;   // ×¢ÊÍ 
				if (SXQ3114[2] > 7)
				{
					SXQ3114[2] = 0;
				}
				SXQ3155[2]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2834[2] != SXQ2441[2]) &&       // ×¢ÊÍ 
				(SXQ1222[2] != 0) && (SXQ1057[2] < SXQ685[2]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[2];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][2][3] = SXQ3114[2] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][2], SXQ2295[SXQ3746][2]);
				SXQ2402[2]++;
				SXQ957[2].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[2]++;   // ×¢ÊÍ 
				if (SXQ3114[2] > 7)
				{
					SXQ3114[2] = 0;
				}
				SXQ3155[2]++;   // ×¢ÊÍ 
			}
			else if ((SXQ2834[2] == SXQ2441[2]) &&       // ×¢ÊÍ 
				(SXQ1222[2] != 0) && (SXQ1057[2] < SXQ685[2]))      // ×¢ÊÍ 
			{
				SXQ3746 = SXQ2834[2];
				if (SXQ3746 == 0)
				{
					SXQ3746 = 10;
				}
				SXQ3746--;
				SXQ2034[SXQ3746][2][3] = SXQ3114[2] << 5;
				// ×¢ÊÍ 
				SXQ1913(SXQ2385, (char *)SXQ2034[SXQ3746][2], SXQ2295[SXQ3746][2]);
				SXQ2402[2]++;
				SXQ957[2].SXQ4071 = 0;  // ×¢ÊÍ 
				SXQ3114[2]++;   // ×¢ÊÍ 
				if (SXQ3114[2] > 7)
				{
					SXQ3114[2] = 0;
				}
				SXQ3155[2]++;   // ×¢ÊÍ 
			}
			else
			{
				SXQ957[2].SXQ4071 += 4;
				if (SXQ957[2].SXQ4071 >= 100)    // ×¢ÊÍ 
				{
					SXQ2526.SXQ1158.SXQ2741 = 0x42;     // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ2744 = 4;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3713 = 0;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3463 = SXQ3114[2] << 5;  // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ2526.SXQ1158.SXQ2395[i] = HSXQ039;    // ×¢ÊÍ 
					}
					SXQ2526.SXQ1158.SXQ2413 = SXQ957[2].SXQ2413;        // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ998 = SXQ957[2].SXQ998;  // ×¢ÊÍ 
					SXQ2526.SXQ1158.SXQ3417 = 0;        // ×¢ÊÍ 
					SXQ3365 = 9;        // ×¢ÊÍ 
					// ×¢ÊÍ 
					SXQ1913(SXQ2385, (char *)SXQ2526.SXQ4047, SXQ3365);

					SXQ437[2]++;        // ×¢ÊÍ 

					SXQ957[2].SXQ4071 = 0;      // ×¢ÊÍ 
					SXQ3114[2]++;       // ×¢ÊÍ 
					if (SXQ3114[2] > 7)
					{
						SXQ3114[2] = 0;
					}
					SXQ3155[2]++;       // ×¢ÊÍ 
				}
			}

			taskDelay(10);

			// ×¢ÊÍ 
			for (l = 5; l < 12; l++)
			{
				if ((l == 5) || (l == 10) || (l == 11))
				{
					if ((SXQ2833[l] != SXQ2440[l]) &&    // ×¢ÊÍ 
						((SXQ1521[l] == 0) || (SXQ1521[l] == SXQ2033[SXQ2833[l]][l][4])))        // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ×¢ÊÍ 
						if (SXQ1521[l] == 0)     // ×¢ÊÍ 
						{
							memcpy(SXQ2769.SXQ4047, SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
							if (SXQ2033[SXQ3746][l][4] != HSXQ012) // ×¢ÊÍ 
							{
								SXQ1521[l] = SXQ2033[SXQ3746][l][4];    // ×¢ÊÍ 
								SXQ1304[l] = 0; // ×¢ÊÍ 
								SXQ855[l] = SXQ698(SXQ1521[l], SXQ2769);        // ×¢ÊÍ 
								SXQ1242[l] = 1; // ×¢ÊÍ 
							}
						}
						SXQ3746++;
						if (SXQ3746 >= 10)
						{
							SXQ3746 = 0;        // ×¢ÊÍ 
						}
						SXQ2833[l] = SXQ3746;
						SXQ2401[l] = 1;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if ((SXQ2833[l] != SXQ2440[l]) &&       // ×¢ÊÍ 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ×¢ÊÍ 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if ((SXQ2833[l] == SXQ2440[l]) &&       // ×¢ÊÍ 
						(SXQ1521[l] != 0) && (SXQ1304[l] < SXQ855[l]))      // ×¢ÊÍ 
					{
						SXQ3746 = SXQ2833[l];
						if (SXQ3746 == 0)
						{
							SXQ3746 = 10;
						}
						SXQ3746--;
						SXQ2033[SXQ3746][l][3] = SXQ3115[l] << 5;
						// ×¢ÊÍ 
						SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2033[SXQ3746][l], SXQ2294[SXQ3746][l]);
						// ×¢ÊÍ 
						SXQ2401[l]++;
						SXQ1194[l].SXQ4071 = 0; // ×¢ÊÍ 
						SXQ3115[l]++;   // ×¢ÊÍ 
						if (SXQ3115[l] > 7)
						{
							SXQ3115[l] = 0;
						}
						SXQ3455[l]++;   // ×¢ÊÍ 
					}
					else if (SXQ1521[l] == 0)
					{
						SXQ1194[l].SXQ4071 += 4;
						if (SXQ1194[l].SXQ4071 >= 60)    // ×¢ÊÍ 
						{
							SXQ2769.SXQ1438.SXQ2741 = 0x60 + l; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3142 = 4;        // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3111 = 6;        // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3463 = SXQ3115[l] << 5;  // ×¢ÊÍ 
							for (i = 0; i < 2; i++)
							{
								SXQ2769.SXQ1438.SXQ2753[i] = HSXQ002;     // ×¢ÊÍ 
								SXQ2769.SXQ1438.SXQ2752[i] = HSXQ002;     // ×¢ÊÍ 
							}
							SXQ2769.SXQ1438.SXQ2050 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ797 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2051 = SXQ1194[l].SXQ2413;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ798 = SXQ1194[l].SXQ998; // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2889 = SXQ1194[l].SXQ2889;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ2896 = SXQ1194[l].SXQ2896;       // ×¢ÊÍ 
							SXQ2769.SXQ1438.SXQ3417 = 0;        // ×¢ÊÍ 
							SXQ3365 = 15;       // ×¢ÊÍ 

							// ×¢ÊÍ 
							SXQ1945 = SXQ1915(CH0_LAU, (char *)SXQ2769.SXQ4047, SXQ3365);
							// ×¢ÊÍ 
							SXQ1194[l].SXQ4071 = 0;     // ×¢ÊÍ 
							SXQ3115[l]++;       // ×¢ÊÍ 
							if (SXQ3115[l] > 7)
							{
								SXQ3115[l] = 0;
							}
							SXQ3455[l]++;       // ×¢ÊÍ 
						}
					}
					if ((l == 5) || (l == 10))
					{
						taskDelay(DelayTime);
					}
				}
			}
		}
		// ×¢ÊÍ 
	}
}

// ×¢ÊÍ 
void SXQ3491::SXQ465(char *SXQ1066, unsigned char SXQ1480)
{
	unsigned int i, j;
	char SXQ1306[50];

	// ×¢ÊÍ 
	for (i = 0; i < 3; i++)
	{
		SXQ1306[i] = SXQ1066[i];
	}

	// ×¢ÊÍ 
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

	j = 4;                      // ×¢ÊÍ 
	for (i = 0; i < SXQ1480; i++)
	{
		if (((unsigned char)SXQ1066[4 + i]) == 0xEE)     // ×¢ÊÍ 
		{
			SXQ1306[j] = 0x9A;
			j++;
			SXQ1306[j] = 0xC0;
			j++;
		}
		else if (((unsigned char)SXQ1066[4 + i]) == 0x9A)        // ×¢ÊÍ 
		{
			SXQ1306[j] = 0x9A;
			j++;
			SXQ1306[j] = 0x9A;
			j++;
		}
		else                    // ×¢ÊÍ 
		{
			SXQ1306[j] = SXQ1066[4 + i];
			j++;
		}
	}

	SXQ1306[3] = j - 4;         // ×¢ÊÍ 

	if (j > 18)
	{
		SXQ1306[0] = 1;         // ×¢ÊÍ 
	}

	memcpy(SXQ1066, SXQ1306, 50);       // ×¢ÊÍ 
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
void SXQ3491::SXQ1913(unsigned char SXQ2745, char *SXQ2891, int SXQ3365)
{
	char SXQ1854[50];           // ×¢ÊÍ 
	int SXQ1945;                // ×¢ÊÍ 

	if ((SXQ2745 == 0) || (SXQ2745 == 1))        // ×¢ÊÍ 
	{
		// ×¢ÊÍ 
		SXQ1945 = SXQ1915(CH3_BAIT, SXQ2891, SXQ3365);  // ×¢ÊÍ 
	}
	if (((SXQ2745 == 0) || (SXQ2745 == 2)))      // ×¢ÊÍ 
	{
		SXQ1854[4] = 0;         // ×¢ÊÍ 
		SXQ1854[5] = 69;        // ×¢ÊÍ 
		SXQ1854[6] = SXQ2891[0];        // ×¢ÊÍ 
		SXQ1854[7] = SXQ2891[1];        // ×¢ÊÍ 
		memcpy(SXQ1854 + 8, SXQ2891 + 4, (int)SXQ2891[1]);      // ×¢ÊÍ 

		// ×¢ÊÍ 
		if (((unsigned char)SXQ2891[4] == HSXQ038) && ((unsigned char)SXQ2891[5] == HSXQ038))
		{
			// ×¢ÊÍ 
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
			msgQSend(SXQ1146, SXQ1854, MSG_SIZE_BAIT, 0, MSG_PRI_NORMAL);       // ×¢ÊÍ 
		}
	}
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
unsigned short SXQ3491::SXQ698(unsigned char SXQ2396, union _SXQ2769 SXQ2769)
{
	unsigned short SXQ1509;     // ×¢ÊÍ 
	unsigned char SXQ4423;
	unsigned char SXQ3475;      // ×¢ÊÍ 
	int i, k, m;

	switch (SXQ2396)
	{
	case HSXQ001:       /* ×¢ÊÍ 1)sAsEs7s4101 9 bytes */
		SXQ1509 = 0xffff;   // ×¢ÊÍ 
		break;
	case HSXQ002:    /* ×¢ÊÍ 1s1sBs7s4103 13 bytes */
		SXQ1509 = 10;       // ×¢ÊÍ 
		break;
	case HSXQ003:   /* ×¢ÊÍ s9sFsEsEs7s4105 11 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ004:      /* ×¢ÊÍ 4s6sAs0s7s4107 9 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ005:   /* ×¢ÊÍ s6s5s7s7s6s7s4109 8 bytes */
		SXQ1509 = 1500;     // ×¢ÊÍ 
		break;
	case HSXQ006:    /* ×¢ÊÍ 6s6s1s0s5s7s4111 7 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ007:     /* ×¢ÊÍ 2s0sBsDs7s4113 45 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ008:       /* ×¢ÊÍ 4sD/sDs4sDs7s4115 9 bytes */
		SXQ3475 = SXQ2769.SXQ1439.SXQ2741 - 0x60;   // ×¢ÊÍ 

		if (SXQ3475 < 12)    // ×¢ÊÍ 
		{
			SXQ1243[SXQ3475][0] = 0;
			SXQ1243[SXQ3475][1] = 0;

			k = 0;
			for (i = 0; i < 4; i++)
			{
				SXQ4423 = SXQ2769.SXQ1439.SXQ4423[i];       // ×¢ÊÍ 

				if ((SXQ4423 & 0x03) == 0x03)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0x0c) == 0x0c)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 1;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0x30) == 0x30)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 2;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0xc0) == 0xc0)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 3;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}
			}
		}
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ009:  /* ×¢ÊÍ 5/sDs5s7s4117 10 bytes */
		SXQ3475 = SXQ2769.SXQ2341.SXQ2741 - 0x60;   // ×¢ÊÍ 

		if (SXQ3475 < 12)    // ×¢ÊÍ 
		{
			SXQ1243[SXQ3475][0] = 0;
			SXQ1243[SXQ3475][1] = 0;
			k = 0;
			for (i = 0; i < 4; i++)
			{
				SXQ4423 = SXQ2769.SXQ2341.SXQ4423[i];       // ×¢ÊÍ 

				if ((SXQ4423 & 0x03) == 0x03)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0x0c) == 0x0c)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 1;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0x30) == 0x30)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 2;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0xc0) == 0xc0)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 3;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}
			}
		}
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ010:     /* ×¢ÊÍ 1s7s3s1s7s4119 7 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ011:  /* ×¢ÊÍ 5s5s2s7s4121 11 bytes */
		SXQ3475 = SXQ2769.SXQ761.SXQ2741 - 0x60;    // ×¢ÊÍ 
		if (SXQ3475 < 12)    // ×¢ÊÍ 
		{
			SXQ1243[SXQ3475][0] = 0;
			SXQ1243[SXQ3475][1] = 0;
			k = 0;
			for (i = 0; i < 4; i++)
			{
				SXQ4423 = SXQ2769.SXQ761.SXQ4423[i];        // ×¢ÊÍ 

				if ((SXQ4423 & 0x03) == 0x03)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0x0c) == 0x0c)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 1;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0x30) == 0x30)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 2;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}

				if ((SXQ4423 & 0xc0) == 0xc0)        // ×¢ÊÍ 
				{
					m = SXQ3475 * 8 + i * 4 + 3;
					SXQ1243[SXQ3475][k] = m + 1;    // ×¢ÊÍ 
					k++;
					if (k >= 2)
					{
						break;      // ×¢ÊÍ 
					}
				}
			}
			SXQ1509 = 0;    // ×¢ÊÍ 
		}
		SXQ1509 = 0;        // ×¢ÊÍ 
		break;
	case HSXQ012:    /* ×¢ÊÍ 1s4s7s4123 45sAs7s2 */
		SXQ1509 = 0;        // ×¢ÊÍ 
		break;
	case HSXQ013:    /* ×¢ÊÍ s4sAsBs5s7s4129 11 bytes */
		SXQ1509 = 0;        // ×¢ÊÍ 
		if ((SXQ2769.SXQ943.SXQ2856 == 0x70) && (SXQ2769.SXQ943.SXQ2504 == 0x70))
		{
			SXQ1509 = 0;    // ×¢ÊÍ 
		}
		break;
	case HSXQ014:        /* ×¢ÊÍ s0sAs7s4133 9 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ015:      /* ×¢ÊÍ s5s3sCs7s4135 11 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ016:    /* ×¢ÊÍ 15)s6sEs7s4137 11 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ017:
		SXQ1509 = 0;        // ×¢ÊÍ 
		break;
	default:
		SXQ1509 = 0;        // ×¢ÊÍ 
		break;
	}
	return SXQ1509;
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
unsigned short SXQ3491::SXQ464(unsigned char SXQ2396)
{
	unsigned short SXQ1509;     // ×¢ÊÍ 

	switch (SXQ2396)
	{
	case HSXQ038:      /* ×¢ÊÍ 1)sAsEs7s4171  7 bytes */
		SXQ1509 = 0xffff;   // ×¢ÊÍ 
		break;
	case HSXQ039:   /* ×¢ÊÍ s6s1s1sBs7s4173 9 bytes */
		SXQ1509 = 10;       // ×¢ÊÍ 
		break;
	case HSXQ040:  /* ×¢ÊÍ BsFs5sCs9sFsEsE175 8 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ041:     /* ×¢ÊÍ s5s6sAs0s7s4177 7 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ042:    /* ×¢ÊÍ s2s0sBsDs7s4179 19 bytes */
		SXQ1509 = 40;       // ×¢ÊÍ 
		break;
	case HSXQ043:   /* ×¢ÊÍ s9s1sFsEsEs7s4181 9 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ044:   // ×¢ÊÍ 
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ045:    /* ×¢ÊÍ sB/sDs8sBs7s4185 8 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ046:        /* ×¢ÊÍ FsBsFs7s4187 8 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ047:   /* ×¢ÊÍ 6s4sAsBs5s7s4189    8 bytes */
		SXQ1509 = 60;       // ×¢ÊÍ 
		break;
	case HSXQ048:       /* ×¢ÊÍ sFs0sAs7s4193 7 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	case HSXQ049:   /* ×¢ÊÍ /*(11)s6sEs7s4197 8 bytes */
		SXQ1509 = 30;       // ×¢ÊÍ 
		break;
	default:
		SXQ1509 = 0;        // ×¢ÊÍ 
		break;
	}

	return SXQ1509;
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
unsigned char SXQ3491::SXQ1910(unsigned char SXQ2124, unsigned char SXQ2125, unsigned char SXQ2396, unsigned char *SXQ4047)
{
	unsigned char SXQ3722;      // ×¢ÊÍ 
	unsigned char SXQ4427;      // ×¢ÊÍ 
	union _SXQ2768 SXQ2768;
	unsigned int m, k;

	SXQ3722 = 0;                // ×¢ÊÍ 
	switch (SXQ2124)
	{
	case HSXQ018:    /* ×¢ÊÍ )sAsEs4s4s1sF102 9 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if ((SXQ2396 == HSXQ001) && (SXQ1317[SXQ4427] == OK) && (SXQ2125 == HSXQ018))   // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ019: /* ×¢ÊÍ s1sBsDs8s1sF104 28 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;
		if ((SXQ2396 == HSXQ002) && (SXQ2125 == HSXQ019))     // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ020:   /* ×¢ÊÍ s3sCsDs8s1sF106 11 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if ((SXQ2396 == HSXQ003) && (SXQ2125 == HSXQ020) && (SXQ4047[6] == SXQ4047[9]))    // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ021:   /* ×¢ÊÍ 6sAs0s3sCs1sF108 30 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if ((SXQ2396 == HSXQ004) && (SXQ2125 == HSXQ021))     // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ023: /* ×¢ÊÍ s6s1s0s5s3sCs1sF112 8 bytes */
		if (SXQ2396 == HSXQ006)        // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ024:  /* ×¢ÊÍ sDs3sCsDs8s1sF114 11 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if ((SXQ2396 == HSXQ007) && (SXQ2125 == HSXQ024))   // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ025:    /* ×¢ÊÍ D/sDs4sDs3sCs1sF116 13 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if (SXQ2396 == HSXQ008)       // ×¢ÊÍ 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ760.SXQ3148; // ×¢ÊÍ 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if (SXQ1243[SXQ4427][k] == (m + 1))  // ×¢ÊÍ 
						{
							SXQ1243[SXQ4427][k] = 0;
							SXQ1029[m] = 0; // ×¢ÊÍ 
							break;
						}
					}
				}
				if (SXQ2768.SXQ760.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ760.SXQ3149;     // ×¢ÊÍ 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if (SXQ1243[SXQ4427][k] == (m + 1))      // ×¢ÊÍ 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ×¢ÊÍ 
								break;
							}
						}
					}
				}

				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ×¢ÊÍ 
				}
			}
			else if (SXQ2396 == HSXQ009)     // ×¢ÊÍ 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ760.SXQ3148; // ×¢ÊÍ 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if ((SXQ1243[SXQ4427][k] == (m + 1)) && (SXQ2768.SXQ760.SXQ2104 == 0x70))    // ×¢ÊÍ 
						{
							SXQ1243[SXQ4427][k] = 0;
							SXQ1029[m] = 0; // ×¢ÊÍ 
							break;
						}
					}
				}
				if (SXQ2768.SXQ760.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ760.SXQ3149;     // ×¢ÊÍ 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if ((SXQ1243[SXQ4427][k] == (m + 1)) && (SXQ2768.SXQ760.SXQ2105 == 0x70))        // ×¢ÊÍ 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ×¢ÊÍ 
								break;
							}
						}
					}

				}
				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ×¢ÊÍ 
				}
			}
		}
		break;
	case HSXQ026:       /* ×¢ÊÍ /sDs5s3sCs1sF118 13 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if (SXQ2396 == HSXQ009)  // ×¢ÊÍ 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ1440.SXQ3148;        // ×¢ÊÍ 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if (SXQ1243[SXQ4427][k] == (m + 1))  // ×¢ÊÍ 
						{
							if (((SXQ2768.SXQ1440.SXQ2069 == 0x1A) && (SXQ2768.SXQ1440.SXQ2104 == 0x07))     // ×¢ÊÍ 
								|| (SXQ2768.SXQ1440.SXQ2069 == 0xA1))        // ×¢ÊÍ 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ×¢ÊÍ 
								break;
							}
						}
					}
				}
				if (SXQ2768.SXQ1440.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ1440.SXQ3149;    // ×¢ÊÍ 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if (SXQ1243[SXQ4427][k] == (m + 1))      // ×¢ÊÍ 
							{
								if (((SXQ2768.SXQ1440.SXQ2069 == 0x1A) && (SXQ2768.SXQ1440.SXQ2105 == 0x07)) // ×¢ÊÍ 
									|| (SXQ2768.SXQ1440.SXQ2069 == 0xA1))    // ×¢ÊÍ 
								{
									SXQ1243[SXQ4427][k] = 0;
									SXQ1029[m] = 0; // ×¢ÊÍ 
									break;
								}
							}
						}
					}

				}

				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ×¢ÊÍ 
				}
			}
		}
		break;
	case HSXQ027:      /* ×¢ÊÍ 8s9/s5sCs9s1sF120 16 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if (SXQ2396 == HSXQ011)  // ×¢ÊÍ 
			{
				memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
				m = SXQ2768.SXQ946.SXQ3148; // ×¢ÊÍ 
				if (m < 96)
				{
					for (k = 0; k < 2; k++)
					{
						if (SXQ1243[SXQ4427][k] == (m + 1))  // ×¢ÊÍ 
						{
							SXQ1243[SXQ4427][k] = 0;
							SXQ1029[m] = 0; // ×¢ÊÍ 
							break;
						}
					}
				}
				if (SXQ2768.SXQ946.SXQ3150 == 0x70)
				{
					m = SXQ2768.SXQ946.SXQ3149;     // ×¢ÊÍ 
					if (m < 96)
					{
						for (k = 0; k < 2; k++)
						{
							if (SXQ1243[SXQ4427][k] == (m + 1))      // ×¢ÊÍ 
							{
								SXQ1243[SXQ4427][k] = 0;
								SXQ1029[m] = 0;     // ×¢ÊÍ 
								break;
							}
						}
					}

				}

				if ((SXQ1243[SXQ4427][0] == 0) && (SXQ1243[SXQ4427][1] == 0))
				{
					SXQ3722 = 1;    // ×¢ÊÍ 
				}
			}
		}
		break;
	case HSXQ028:  /* ×¢ÊÍ s7s3s1s6s1s1sF122 7 bytes */
		if (SXQ2396 == HSXQ010) // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ029: /* ×¢ÊÍ 7s4s4s4s1sF124 8sAs7s2 */
		break;
	case HSXQ030:     /* ×¢ÊÍ /*sCs9s1sDs1s7126 11 bytes */
		if (SXQ2396 == HSXQ012)        // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ031:      /* ×¢ÊÍ 4s3s8/s5sCs1sF128 9 bytes */
		if (SXQ2396 == HSXQ012)        // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ032: /* ×¢ÊÍ 4sAsBs5s3sCs1sF130 15 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if ((SXQ2396 == HSXQ013) && (SXQ2125 == HSXQ032)) // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ033:    /* ×¢ÊÍ s5sCs5s6s1sF132 18 bytes */
		break;
	case HSXQ034:     /* ×¢ÊÍ 7s4s4s4s1sF134 9 bytes */
		SXQ4427 = SXQ4047[0] - 0x60;        // ×¢ÊÍ 
		if (SXQ4427 < 12)    // ×¢ÊÍ 
		{
			if ((SXQ2396 == HSXQ014) && (SXQ2125 == HSXQ034)) // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ035:   /* ×¢ÊÍ 36s8s8sFs7s7s4s9 45 bytes */
		if (SXQ2396 == HSXQ015)  // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ036: /* ×¢ÊÍ s6s6sEs4s4s1sF138 11 bytes */
		if (SXQ2396 == HSXQ016)        // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ037:
		if (SXQ2396 == HSXQ017) // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ050:   /* ×¢ÊÍ 1)sAsEs4s4s1sF172 7 bytes */
		SXQ4427 = SXQ4047[0] - 0x40;        // ×¢ÊÍ 
		if (SXQ4427 < 3)
		{
			if ((SXQ2396 == HSXQ038) && (SXQ1069[SXQ4427] == OK))        // ×¢ÊÍ 
			{
				SXQ3722 = 1;        // ×¢ÊÍ 
			}
		}
		break;
	case HSXQ051:        /* ×¢ÊÍ 1s1sBsDs8s1sF174 14 bytes */
		if (SXQ2396 == HSXQ039)       // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ052:  /* ×¢ÊÍ sEs3sCsDs8s1sF176 8 bytes */
		if (SXQ2396 == HSXQ040)      // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ053:  /* ×¢ÊÍ As6sAs0s3sCs1sF178 8 bytes */
		if (SXQ2396 == HSXQ041) // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ054: /* ×¢ÊÍ sBsDs3sCsDs8s1sF180 8 bytes */
		if (SXQ2396 == HSXQ042)        // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ055:   /* ×¢ÊÍ sEs3sCs4s4s1sF182 9 bytes */
		if (SXQ2396 == HSXQ043)       // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ056:
		if (SXQ2396 == HSXQ044)       // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ057:     /* ×¢ÊÍ B/sDs8sBs1186sF 9 bytes */
		if (SXQ2396 == HSXQ045)        // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ058:     /* ×¢ÊÍ s1sFs4s4s1sF188 9 bytes */
		if (SXQ2396 == HSXQ046)    // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ059:    /* ×¢ÊÍ sBs5s3sCs1sF190 13 bytes */
		if (SXQ2396 == HSXQ047)       // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ060:   /* ×¢ÊÍ s6s5sCs5s6s1sF192 9 bytes */
		break;
	case HSXQ061:    /* ×¢ÊÍ s7s4s4s4s1sF194 7 bytes */
		if (SXQ2396 == HSXQ048)   // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	case HSXQ062:        /* ×¢ÊÍ s5s6s6sEs4s4s1sF198 8 bytes */
		if (SXQ2396 == HSXQ049)       // ×¢ÊÍ 
		{
			SXQ3722 = 1;    // ×¢ÊÍ 
		}
		break;
	default:
		break;
	}
	if ((SXQ3722 == 0) && (SXQ2125 != 0))
	{
		switch (SXQ2125)
		{
		case HSXQ022:    /* ×¢ÊÍ s6s1/sCs2s6s1s1sF110 12 bytes */
			SXQ4427 = SXQ4047[0] - 0x60;    // ×¢ÊÍ 
			if (SXQ4427 < 12)        // ×¢ÊÍ 
			{
				if (SXQ2396 == HSXQ005)       // ×¢ÊÍ 
				{
					memcpy(SXQ2768.SXQ4047, SXQ4047, 50);
					if ((SXQ2768.SXQ408.SXQ2067 == 0x70) || (SXQ2768.SXQ408.SXQ2067 == 0xA1) || (SXQ2768.SXQ408.SXQ2067 == 0x77))    // ×¢ÊÍ 
					{
						SXQ3722 = 1;        // ×¢ÊÍ 
					}
				}
			}
			break;
		case HSXQ033:        /* ×¢ÊÍ Fs5sCs5s6s1sF132 18 bytes */
			break;
		default:
			break;
		}
	}
	return SXQ3722;
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
STATUS SXQ3491::SXQ1917(int SXQ3680)    // ×¢ÊÍ 
{
	if (SXQ3680 == 0)
	{
		// ×¢ÊÍ 
		SXQ3362[0] = open("/PEBsio0", O_RDWR, 0);       // ×¢ÊÍ 
		SXQ3362[1] = open("/PEBsio1", O_RDWR, 0);       // ×¢ÊÍ 
		SXQ3362[2] = open("/PEBsio2", O_RDWR, 0);       // ×¢ÊÍ 
		SXQ3362[3] = open("/PEBsio3", O_RDWR, 0);       // ×¢ÊÍ 
		if ((SXQ3362[0] >= 0) && (SXQ3362[1] >= 0) && (SXQ3362[2] >= 0) && (SXQ3362[3] >= 0))    // ×¢ÊÍ 
		{
			return OK;          // ×¢ÊÍ 
		}
		else
		{
			return ERROR;       // ×¢ÊÍ 
		}
	}
	else
	{
		return ERROR;           // ×¢ÊÍ 
	}
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
STATUS SXQ3491::SXQ1637(int SXQ3680)    // ×¢ÊÍ 
{
	int i;                      // ×¢ÊÍ 
	STATUS SXQ3698;

	if (SXQ3680 == 0)
	{
		// ×¢ÊÍ 
		for (i = 0; i < 4; i++)
		{
			SXQ3698 = close(SXQ3362[i]);        // ×¢ÊÍ 
			if (SXQ3698 != OK)
			{
				break;
			}
		}
	}
	else
	{
		return ERROR;           // ×¢ÊÍ 
	}

	return SXQ3698;
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
int SXQ3491::SXQ1915(unsigned char SXQ3207, char *SXQ2547, int SXQ3365)
{
	int SXQ2695;                // ×¢ÊÍ 
	unsigned char SXQ1803[60];

	if ((SXQ3207 >= 4) || (SXQ3365 > 60))        // ×¢ÊÍ 
	{
		return ERROR;
	}

	memcpy(SXQ1803, SXQ2547, SXQ3365);

	SXQ2695 = write(SXQ3362[SXQ3207], (char *)SXQ2547, SXQ3365);        // ×¢ÊÍ 

	if ((SXQ2695 == -1) && (SXQ3207 == 0))
	{
		// ×¢ÊÍ 
		taskDelay(1);
		SXQ2695 = write(SXQ3362[SXQ3207], (char *)SXQ1803, SXQ3365);    // ×¢ÊÍ 
	}

	return SXQ2695;
}

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
int SXQ3491::SXQ1912(unsigned char SXQ3207, char *SXQ2547, int SXQ2680)
{
	int SXQ3050;                // ×¢ÊÍ 

	if (SXQ3207 >= 4)            // ×¢ÊÍ 
	{
		return ERROR;
	}

	SXQ3050 = read(SXQ3362[SXQ3207], (char *)SXQ2547, SXQ2680); // ×¢ÊÍ 

	return SXQ3050;
}

// ×¢ÊÍ 
void SXQ3491::SXQ780(void)
{
	STATUS SXQ3698;             // ×¢ÊÍ 
	int SXQ3365;                // ×¢ÊÍ 
	int SXQ1945;                // ×¢ÊÍ 
	unsigned char SXQ2741;      // ×¢ÊÍ 
	unsigned char SXQ1795[60];  // ×¢ÊÍ 
	union _SXQ2769 SXQ1298;     // ×¢ÊÍ 
	unsigned char SXQ4423;
	int i;

	SXQ1563 = 0;                // ×¢ÊÍ 

	SXQ499 = msgQCreate(MAX_MSG_SHEET, MSG_SIZE_SCC, MSG_Q_FIFO);
	SXQ595 = msgQCreate(MAX_MSG_DEAL, MSG_SIZE_SCC, MSG_Q_FIFO);

	taskDelay(1000);            // ×¢ÊÍ 

	while (true)
	{
		// ×¢ÊÍ 
		SXQ3698 = msgQReceive(SXQ595, (char *)SXQ1795, MSG_SIZE_SCC, WAIT_FOREVER);

		// ×¢ÊÍ 
		do
		{
			SXQ3698 = msgQReceive(SXQ499, (char *)SXQ1795, MSG_SIZE_SCC, NO_WAIT);
			if (SXQ3698 != ERROR)        // ×¢ÊÍ 
			{
				SXQ3365 = 0;    // ×¢ÊÍ 
				if ((SXQ1795[1] == HSXQ012) && (SXQ1795[2] > 0) && (SXQ1795[2] <= 12))     // ×¢ÊÍ 
				{
					SXQ2741 = 0x60 + SXQ1795[2] - 1;    // ×¢ÊÍ 

					SXQ1298.SXQ1679.SXQ2741 = SXQ2741;  // ×¢ÊÍ 
					SXQ1298.SXQ1679.SXQ3142 = 0;        // ×¢ÊÍ 
					SXQ1298.SXQ1679.SXQ3111 = 40;       // ×¢ÊÍ 
					SXQ1298.SXQ1679.SXQ3463 = 0;        // ×¢ÊÍ 
					for (i = 0; i < 2; i++)
					{
						SXQ1298.SXQ1679.SXQ2752[i] = HSXQ012;     // ×¢ÊÍ 
					}
					// ×¢ÊÍ 
					memcpy(SXQ1298.SXQ4047 + 6, SXQ1795 + 3, 36);       // ×¢ÊÍ 
					// ×¢ÊÍ 
					SXQ1298.SXQ1679.SXQ2420 = 0;
					for (i = 0; i < 36; i++)
					{
						SXQ1298.SXQ1679.SXQ2420 += SXQ1298.SXQ4047[i + 6];
					}
					SXQ1298.SXQ1679.SXQ3417 = 0;        // ×¢ÊÍ 
					// ×¢ÊÍ 
					SXQ4423 = SXQ1298.SXQ1679.SXQ4423;
					if (((SXQ1298.SXQ1679.SXQ3451 & 0x3f) < 32) && ((SXQ4423 & 0x0f) == ((SXQ4423 & 0xf0) / 0x10)))      /* ×¢ÊÍ ET.SXQ1679.SXQ3451 & 0x3f)<32) && ((SXQ4423&0x0f)==((SXQ4423&0xf0)/0x10))) /*sCs9s0s0s1s9s8sCsA0-31 */
					{
						SXQ4423 = SXQ4423 & 0x0f;       // ×¢ÊÍ 
						SXQ4423 = SXQ4423 + (SXQ1795[2] - 1) * 8;       // ×¢ÊÍ 

						SXQ1251[SXQ4423] = SXQ1298.SXQ1679.SXQ3451 & 0x3f;      // ×¢ÊÍ 
					}
					SXQ3365 = 45;       // ×¢ÊÍ 

					// ×¢ÊÍ 
					if (SXQ1563 < 12)
					{
						SXQ3092[SXQ1563].SXQ3450 = SXQ2741 - 0x60;
						SXQ3092[SXQ1563].SXQ3365 = SXQ3365;     // ×¢ÊÍ 
						memcpy(SXQ3092[SXQ1563].SXQ1603, SXQ1298.SXQ4047, SXQ3365);
						SXQ1563++;      // ×¢ÊÍ 
					}
				}
			}
		} while (SXQ3698 != ERROR);        // ×¢ÊÍ 

		// ×¢ÊÍ 
		if (SXQ1563 > 0)
		{
			// ×¢ÊÍ 
			for (i = 0; i < SXQ1563; i++)
			{
				SXQ1194[SXQ3092[i].SXQ3450].SXQ4071 = 0;        // ×¢ÊÍ 

				SXQ3092[i].SXQ1603[3] = SXQ3115[SXQ3092[i].SXQ3450] << 5;
				SXQ3115[SXQ3092[i].SXQ3450]++;  // ×¢ÊÍ 
				if (SXQ3115[SXQ3092[i].SXQ3450] > 7)
				{
					SXQ3115[SXQ3092[i].SXQ3450] = 0;
				}
				// ×¢ÊÍ 
				SXQ1945 = SXQ1915(CH0_LAU, SXQ3092[i].SXQ1603, SXQ3092[i].SXQ3365);
				// ×¢ÊÍ 
				taskDelay(8);
			}
			SXQ1563 = 0;        // ×¢ÊÍ 
		}
	}
}








