// noi import nhung thu vien,khai bao cac struct
#include <stdbool.h>

struct Date{
	int month,day,year;
	
};

struct Student {
	char studentId[10];
	char name[50];
	struct Date dateOfBirth;
	bool gender;
	char email[100];
	char phone[20];
};


struct Teacher{
	char teacherId[10];
	char nameTeacher[50];
	bool gender;
	char email[100];
	char phone[20];
};
