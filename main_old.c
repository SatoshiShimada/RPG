/* explanation : This game has created since 1 June.
 *
 * title       : Happy Story
 * 
 * Writer      : Yusuke Kato
 *               Satosi Simada
 *               Peko_chan
 * 
 * Player      : izumi tyinko-beru
 *               Naoya Tarumi
 * 
 * date        : June. 1,2,
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "file.h"

//int make_charactor(char *name, int *age, int *sex, int *job);


//void main(void)
void main_sub(void)
{
	char name[1000];
	int age, sex, job;
	int story;
	int skill;
	char buf[1024];
	char c;
	
start_game:
    
	system("cls");
	printf("�Q�[�����J�n���܂��B\n");
	//make_charactor(name, &age, &sex, &job);
	
	/*
	double d;
	
	while(1) {
		d = rand();
		printf("%lf\n", d);
	}
	*/
	printf("%d\n", job);
	switch(job) {
	case 7: /* ���� */
		Fujiwara();
		break;
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default: /* ���̑� */
		printf("%s �͖ڂ��o�߂��B�Â������������̃x�b�g�̏�B\n"
		       "�m���Ă���ꏊ�ł͂Ȃ��B\n"
			   "�����Y�L�Y�L���邵�A�L�����B�����B\n\n"
			   "�Ȃɂ����悤���H", name);
		break;
	}
	goto start_game;
	
	printf("�u�I���v\n");
	printf("1: ���ɂł�\n"
	       "2: NEET����\n"
		   "3: �����Ă���H�ׂ�\n"
		   "4: �ׂ̎R�c����̉Ƃ�K���\n" );
	
	scanf("%d", &story);
	
	switch(story) {
	case 1:
	    printf("%s �͗��ɏo��\n"
			   "�G�����ꂽ�I�I\n"
			   "�G�̍U���I�I\n"
			   "%s �͂���Ă��܂���......\n",name, name);
		
		break;
	case 2:
		printf("%s �͕��a�ɕ�炵���B\n",name);
		printf("......GAME OVER......\n\n\n");
		//goto start_game;
		break;
		
	case 3:
		system("cls");
		printf("�����Ă����܂����I�I\n");
		break;
	case 4:
		system("cls");
		printf(" ========================== \n");
		printf("�R�c���񂱂�ɂ���I\n"
		       "%s �͍U�����d�|�����I�I"
		       "�u�Z��I���v\n"
			   "1:�ӂ������[�Ƃ�ˁ[�ǁI�I\n"
			   "2:�W���X�e�B�X�X�����I�I�I�I�I\n"
			   "3:�����Ă���H�ׂ�B\n",name);
		scanf("%d", &skill);
		
		switch(skill) {
		case 1:
			printf("�R�c������u�E�I�I\n"
				   "�R�c�����|�����I�I�I\n");
			break;
		case 2:
			printf("�R�c�����b�E�I�I\n"
				   "�R�c�����|�����I�I�I\n");
			break;
		case 3:
		    printf("�����Ă����R�c����ƕ����������I�I\n"
				   "�R�c���񂪒��ԂɂȂ����I�I�I\n");
			break;
		}
		
		printf("�R�c����u���E�̔��������O�ɂ�낤�I�I�v\n\n\n"
			   "!!Happy End!!!\n");
		printf(" ========================== \n");
		//system("cls");
		printf("Please push any key...\n");
		scanf("%s", name);
		goto start_game;
		
		break;
	}
	
	
	return ;
}


