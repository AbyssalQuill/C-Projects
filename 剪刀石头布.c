#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice, computer_choice;
    int player_score = 0, computer_score = 0;
    char play_again;
    
    // 初始化随机数生成器
    srand(time(NULL));
    
    printf("欢迎来到剪刀石头布游戏！\n");
    printf("游戏规则：\n");
    printf("1 - 石头\n");
    printf("2 - 剪刀\n");
    printf("3 - 布\n");
    printf("先得3分者获胜！\n\n");
    
    do {
        while(player_score < 3 && computer_score < 3) {
            // 获取玩家选择
            printf("请出拳 (1-石头, 2-剪刀, 3-布): ");
            
            // 更健壮的输入验证
            if(scanf("%d", &player_choice) != 1) {
                // 清空输入缓冲区
                while(getchar() != '\n');
                printf("输入错误！请输入数字 1、2 或 3。\n");
                continue;
            }
            
            // 验证输入范围
            if(player_choice < 1 || player_choice > 3) {
                printf("无效输入，请输入 1、2 或 3！\n");
                // 清空输入缓冲区
                while(getchar() != '\n');
                continue;
            }
            
            // 生成电脑随机选择
            computer_choice = rand() % 3 + 1;
            
            // 显示双方选择
            printf("你出了: ");
            switch(player_choice) {
                case 1: printf("石头\n"); break;
                case 2: printf("剪刀\n"); break;
                case 3: printf("布\n"); break;
            }
            
            printf("电脑出了: ");
            switch(computer_choice) {
                case 1: printf("石头\n"); break;
                case 2: printf("剪刀\n"); break;
                case 3: printf("布\n"); break;
            }
            
            // 判断胜负
            if(player_choice == computer_choice) {
                printf("平局！\n");
            } else if((player_choice == 1 && computer_choice == 2) || 
                     (player_choice == 2 && computer_choice == 3) || 
                     (player_choice == 3 && computer_choice == 1)) {
                printf("你赢了！\n");
                player_score++;
            } else {
                printf("电脑赢了！\n");
                computer_score++;
            }
            
            printf("当前比分: 你 %d - %d 电脑\n\n", player_score, computer_score);
        }
        
        // 显示最终结果
        if(player_score == 3) {
            printf("恭喜你获得最终胜利！\n");
        } else {
            printf("电脑获得了最终胜利！\n");
        }
        
        // 询问是否再玩一次
        printf("是否再玩一次？(y/n): ");
        
        // 清空输入缓冲区
        while(getchar() != '\n');
        
        // 读取字符并验证
        play_again = getchar();
        
        if(play_again == 'y' || play_again == 'Y') {
            player_score = 0;
            computer_score = 0;
            printf("\n开始新游戏！\n");
        } else if(play_again != 'n' && play_again != 'N') {
            printf("输入错误，将退出游戏。\n");
            break;
        }
        
    } while(play_again == 'y' || play_again == 'Y');
    
    printf("感谢游玩！再见！\n");
    return 0;
}