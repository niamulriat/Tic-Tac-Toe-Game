
        if (checkWinner(board)) 
        {
            printBoard(board);
            printf("Player %d wins!\n", player);
            break;
        }

       
        if (isBoardFull(board)) 
        {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }
