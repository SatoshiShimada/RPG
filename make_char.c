#include <stdio.h>
#include "file.h"

int make_charactor(struct player *p)
{
	char buf[1024];
	char *name = p->name;
	int *age = &(p->age);
	int *sex = &(p->sex);
	int *job = &(p->job);

	/* ���O�̓��� */
	printf("���O�������Ăˁ� > ");
	fgets(buf, sizeof(buf), stdin);
	strncpy(name, buf, strlen(buf) - 1);

	printf("%s �����`�A�������O���ˁ�\n", name);

	printf("���΂Ɍ�����H�@�E�t�t�� > ");
	fgets(buf, sizeof(buf), stdin);
	*age = atoi(buf);

	printf("%d�΂Ƃ��i�΁j\n", *age);
	
	printf("�ǂ������Ȃ��H\n 1:�j 2:���̎q > ");
	fgets(buf, sizeof(buf), stdin);
	*sex = atoi(buf);

	printf("�E�Ƃ�������\n"
		"\t1: Elf\n"
		"\t2: Wizard\n"
		"\t3: NEET\n"
		"\t4: �w��\n"
		"\t5: Knight\n"
		"\t6: �����Ă��E�l\n"
		"\t7: �X�[�p�[�n�b�J�[�����i�X�p�R���W�S�䏊���j\n"
		"\t8: ���C�Ȗڂ��������R�i���R ����r...a....�u������I�I�I�I�I�v\n"
		"\t9: �����Ă��i���̂��́j\n"
		"\t10: �e�����������葱���đ��Q�S�N�̓Ɛg�j���ips.����j�B\n"
		"\t11: ��Ј��i�ے��j�̂悤��NEET\n"
		"\t12: �E�T�����ăR���r�j�̓X���ɂȂ������Ǖa�C�������Ă�߂āA����NEET\n"
		"\t0: ������ �q\n");
	fgets(buf, sizeof(buf), stdin);
	*job = atoi(buf);

	return 0;
}