////5.2.11¡¡(½¨Òé)Ò»¸öº¯ÊıÖĞµÄÓï¾ä×ÜĞĞ²»³¬¹ı200ĞĞ
//------Î¬³Ö8114µÄ¡°A - 1 - 2 - 2 Ò»¸öº¯ÊıÖĞµÄÓï¾ä×ÜĞĞ²»³¬¹ı200ĞĞ¡±

/* ×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ
×¢ÊÍ */
unsigned char SXQ1910(unsigned char SXQ2124, unsigned char SXQ2125, unsigned char SXQ2396, unsigned char *SXQ4047)
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
