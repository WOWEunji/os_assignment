#include <stdlib.h>
#include <errno.h>

int main(void)
{
	pid_t pid; //pid_t ����

	pid = fork(); //fork �߻�
	if(pid == -1) { //-1 �̸� fork���� ����
		printf("can't fork, erro\n");
		exit(0);
	}

	if(pid == 0) { //0�̸� �ڽ� ���μ���
		int j;
		for(j = 0; j < 10; j++) {
			printf("child: %d\n", j);
			sleep(1);
		}
		exit(0);
	} else { //�θ����μ���
		int i;
		for(i = 0; i < 10; i++) {
			printf("parent : %d\n", i);
			sleep(1);
		}
		exit(0);
	}
	return 0;
}