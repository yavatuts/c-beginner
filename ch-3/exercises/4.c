printf("Enter characters as any as you want!\n");
    while(1) {
        char color = getch();
        switch(color) {
            case 'r':
            case 'R':
                printf("Color is Red!\n");
                break;
            case 'g':
            case 'G':
                printf("Color is Green!\n");
                break;
            case 'b':
            case 'B':
                printf("Color is Blue!\n");
                break;
            case 'y':
            case 'Y':
                printf("Color is Yellow!\n");
                break;
            case 'w':
            case 'W':
                printf("Color is White!\n");
                break;
            default:
                printf("Other colors!\n");
        }
    }