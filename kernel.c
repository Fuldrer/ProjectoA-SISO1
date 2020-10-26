
 extern void putInMemory (int segment, int address, char character);

int main()
{
    int i;
    char titulo[21];
    char titulo2[48];
    char titulo3[25];
    titulo[0] = 'S';
    titulo[1] = 'I';
    titulo[2] = 'S';
    titulo[3] = 'T';
    titulo[4] = 'E';
    titulo[5] = 'M';
    titulo[6] = 'A';
    titulo[7] = 'S';
    titulo[8] = ' ';
    titulo[9] = 'O';
    titulo[10] = 'P';
    titulo[11] = 'E';
    titulo[12] = 'R';
    titulo[13] = 'A';
    titulo[14] = 'T';
    titulo[15] = 'I';
    titulo[16] = 'V';
    titulo[17] = 'O';
    titulo[18] = 'S';
    titulo[19] = ' ';
    titulo[20] = 'I';

    titulo2[0] = 'U';
    titulo2[1] = 'N';
    titulo2[2] = 'I';
    titulo2[3] = 'V';
    titulo2[4] = 'E';
    titulo2[5] = 'R';
    titulo2[6] = 'S';
    titulo2[7] = 'I';
    titulo2[8] = 'D';
    titulo2[9] = 'A';
    titulo2[10] = 'D';
    titulo2[11] = ' ';
    titulo2[12] = 'T';
    titulo2[13] = 'E';
    titulo2[14] = 'C';
    titulo2[15] = 'N';
    titulo2[16] = 'O';
    titulo2[17] = 'L';
    titulo2[18] = 'O';
    titulo2[19] = 'G';
    titulo2[20] = 'I';
    titulo2[21] = 'C';
    titulo2[22] = 'A';
    titulo2[23] = ' ';
    titulo2[24] = 'C';
    titulo2[25] = 'E';
    titulo2[26] = 'N';
    titulo2[27] = 'T';
    titulo2[28] = 'R';
    titulo2[29] = 'O';
    titulo2[30] = 'A';
    titulo2[31] = 'M';
    titulo2[32] = 'E';
    titulo2[33] = 'R';
    titulo2[34] = 'I';
    titulo2[35] = 'C';
    titulo2[36] = 'A';
    titulo2[37] = 'N';
    titulo2[38] = 'A';
    titulo2[39] = ' ';
    titulo2[40] = '(';
    titulo2[41] = 'U';
    titulo2[42] = 'N';
    titulo2[43] = 'I';
    titulo2[44] = 'T';
    titulo2[45] = 'E';
    titulo2[46] = 'C';
    titulo2[47] = ')';

    for(i = 0; i < 110 ; i++)
    {
        if(i<21)
        {
            putInMemory(0xB000, 0x8000 + (2*i), ' ');    
        }
        else if(i<42)
        {
            putInMemory(0xB000, 0x8000 + (2*i), titulo[i-21]);
        }
        else if(i<62)
        {
             putInMemory(0xB000, 0x8000 + (2*i), ' ');
        }
        else if(i < 80)
        {
            putInMemory(0xB000, 0x8000 + (2*i), ' ');
        }
        else
        {
            putInMemory(0xB000, 0x8000 + (2*i), titulo2[i-62]);
        }
        putInMemory(0xB000, 0x8000, 0x7);
    }
    putInMemory(0xB000, 0x8140, 'H');
    putInMemory(0xB000, 0x8141, 0x7);
    putInMemory(0xB000, 0x8142, 'O');
    putInMemory(0xB000, 0x8143, 0x7);
    putInMemory(0xB000, 0x8144, 'L');
    putInMemory(0xB000, 0x8145, 0x7);
    putInMemory(0xB000, 0x8146, 'A');
    putInMemory(0xB000, 0x8147, 0x7);
    putInMemory(0xB000, 0x8148, ' ');
    putInMemory(0xB000, 0x8149, 0x7);
    putInMemory(0xB000, 0x814A, 'M');
    putInMemory(0xB000, 0x814B, 0x7);
    putInMemory(0xB000, 0x814C, 'U');
    putInMemory(0xB000, 0x814D, 0x7);
    putInMemory(0xB000, 0x814E, 'N');
    putInMemory(0xB000, 0x814F, 0x7);
    putInMemory(0xB000, 0x8150, 'D');
    putInMemory(0xB000, 0x8151, 0x7);
    putInMemory(0xB000, 0x8152, 'O');
    putInMemory(0xB000, 0x8153, 0x7);
    return 0;
}
