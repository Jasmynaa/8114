////5.2.11��(����)һ�������е�������в�����200��
//------ά��8114�ġ�A - 1 - 2 - 2 һ�������е�������в�����200�С�

/* ע��
ע��
ע��
ע��
ע��
ע��
ע��
ע�� */
unsigned char SXQ1910(unsigned char SXQ2124, unsigned char SXQ2125, unsigned char SXQ2396, unsigned char *SXQ4047)
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
