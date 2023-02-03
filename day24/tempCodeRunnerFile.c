  while ((c = fgetc(fp)) != EOF)
        {
            printf("%c", c);
        }
        fclose(fp);
        printf("\n");