#include <stdio.h>
#include "file.h"

int Fujiwara(void)
{
	int i;
	int a;
	
	fflush(stdin);
	printf("hahaha....�悭�������܂ŗ��ꂽ��...\n"
		"����͂Q�O�����N�B����MR.MAX�̌��łW�S�W�N�ԏC�Ƃ�ς񂾁B\n"
		"����Ȏ���|���邩�ȁH�H �����A�n�߂悤.....\n");
	printf("\t1:�X�p�R�������������B\n"
		"\t�Q:�ӂ�B\n"
		"\t�R:���܂𔄂�B\n");
	scanf("%d", &a);
	if(a == 1){
		printf("���䂾�H �䐔�ɂ���Ă͐������Ă����Ă�낤�B"
			"�䐔����͂��悤�I�I >");
		scanf("%d", &i);
		if(i >= 82) {
			printf("���O�Ȃ��Ȃ��킩���Ă���ȁB����͌������Ă�낤�B");
		} else {
			printf("�͂͂́A��k�͂��̔������C�����̈����炾���ɂ���B");
			printf("�����͔��΂��𕂂��ׂȂ���EnterKey�����݂��߂�悤���ɉ�����....\n"
				"to be continude.....");
			return 0;
		}
	}
	return 0;
}