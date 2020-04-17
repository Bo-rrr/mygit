//
//  main.c
//  test_4_17
//
//  Created by hh on 2020/4/17.
//  Copyright © 2020 Yeee. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}


//enum ENUM_A
//{
//        X1,
//        Y1,
//        Z1 = 255,
//        A1,
//        B1,
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//printf("%d %d\n", enumA, enumB);

//enum Option
//{
//    EXIT,
//    ADD,
//    DEL,
//    SEARCH,
//    MODIFY,
//    SHOW,
//    CLEAR,
//    SORT
//};
//
//typedef struct PeoInFo
//    {
//        char name[20];
//        char sex[5];
//        short age;
//        char tele[12];
//        char addr[25];
//    }PeoInFo;
//
//typedef struct Contact
//{
//    PeoInFo data[1000];
//    int sz;
//}Contact;
//
//void InitContact(Contact * pcon);
//void AddContact(Contact * pcon);
//void DelContact(Contact * pcon);
//void FindContact(Contact * pcon);
//void ModifyContact(Contact * pcon);
//void ShowContact(Contact * pcon);
//void ClearContact(Contact * pcon);
//void SortContact(Contact * pcon);
//
//Contact.c:
//#include "Contact.h"
//
////初始化通讯录
//void InitContact(Contact * pcon)
//{
//    assert(pcon);
//    pcon -> sz = 0;
//    memset(pcon -> data, 0, sizeof(pcon -> data));
//}
//
////1、添加联系人信息
//void AddContact(Contact * pcon)
//{
//    assert(pcon);
//
//    //录入信息
//    printf("请输入名字:>");
//    scanf("%s", &pcon -> data[pcon -> sz].name);
//    printf("请输入年龄:>");
//    scanf("%d", &pcon -> data[pcon -> sz].age);
//    printf("请输入性别:>");
//    scanf("%s", &pcon -> data[pcon -> sz].sex);
//    printf("请输入电话:>");
//    scanf("%s", &pcon -> data[pcon -> sz].tele);
//    printf("请输入地址:>");
//    scanf("%s", &pcon -> data[pcon -> sz].addr);
//
//    pcon -> sz++;
//    printf("增加成功\n");
//}
//
////查找指定条目下标
//static int FindByName(Contact* pcon, char name[])
//{
//    int i = 0;
//    assert(pcon);
//    for(i = 0; i < pcon - sz; i++)
//    {
//        if(0 == strcmp(pcon -> data[i].name, name))
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
////2、删除指定联系人信息
//void DelContact(Contact * pcon)
//{
//    int i = 0;
//    char name[20] = {0};
//    int pos = 0;
//    assert(pcon);
//
//    if(pcon - sz == 0)
//    {
//        printf("通讯录已空，无法查找\n");
//        return;
//    }
//    printf("请输入要删除的联系人名字:>");
//    scanf("%s", &name);
//
//    pos = FindByName(pcon, name)
//    if(pos == -1)
//    {
//        printf("要删除的条目不存在\n");
//        return;
//    }
//    for(i = pos; i < pcon - sz; i++)
//    {
//        pcon -> data[i] = pcon -> data[i + 1];
//    }
//    pcon -> sz--;
//    printf("删除成功\n");
//
////3 、查找指定联系人的信息
//void FindContact(Contact* pcon)
//{
//
//}
//
//
//
//
//
//
//
//
//    printf("请输入要查找的联系人名字:>");
//    scanf("%s", &name);
//
//    pos = FindByName(pcon, name)
//    if(pos == -1)
//    {
//        printf("要查找的条目不存在\n");
//        return;
//    }
//    printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon -> data.name,
//           pcon -> data.age,
//           pcon -> data.sex,
//           pcon -> data.tele,
//           pcon -> data.addr);
//}



 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_PERSONINFO_SIZE 300
//定义一个结构体.描述数据
typedef struct PersonInfo {
    char name[1024];  //谈到结构体占几个字节,要说几字节对齐
    char phone[1024]; //数组是最简单最常见的数据结构
 
}PersonInfo;
 
//组织数据
typedef struct AddressBook {
    PersonInfo persons[MAX_PERSONINFO_SIZE];
    //[0,size)表示有效元素
    int size;
 
}AddressBook;
 
AddressBook  g_address_book;
 
//通讯录初始化
void Init() {
    g_address_book.size = 0;
    for (int i = 0; i < MAX_PERSONINFO_SIZE; i++) {
        g_address_book.persons[i].name[0] = '\0';
        g_address_book.persons[i].phone[0] = '\0';
 
    }
}
 
int  Menu() {
    printf("=======================\n");
    printf("1.新增联系人\n");
    printf("2.删除联系人\n");
    printf("3.查找联系人\n");
    printf("4.修改联系人\n");
    printf("5.打印全部联系人\n");
    printf("6.排序联系人\n");
    printf("7.清空联系人\n");
    printf("0.退出\n");
    printf("=======================\n");
    printf("请输入你的选择:   ");
    int choice = 0;
    scanf("%d", &choice);
    return  choice;
 
 
}
 
//1.新增联系人
void AddPersonInfo() {
    printf("新增联系人;\n");
    if (g_address_book.size >= MAX_PERSONINFO_SIZE) {
        printf("新增联系人失败!\n");
        return;
    }
    printf("请输入联系人姓名:  \n");
    //获取一个指针,修改的内容是一个预期的指针
    PersonInfo* person_info =& g_address_book.persons[g_address_book.size];
    scanf("%s",person_info->name);
 
    printf("请输入联系人电话:  \n");
    scanf("%s", person_info->phone);
 
    ++g_address_book.size;
 
    printf("新增联系人成功;\n");
 
}
 
 
//2.删除联系人
void DelPersonInfo() {
    printf("删除联系人:\n");
    if (g_address_book.size <= 0) {
        printf("通讯录为空,删除失败;\n");
        return;
    }
    printf("请输入要删除的序号:\n");
    int id = 0;
    scanf("%d", &id);
 
    if (id < 0 || id >= g_address_book.size) {
        printf("删除失败,输入的序号有误!");
        return;
 
    }
 
    g_address_book.persons[id]
        = g_address_book.persons[g_address_book.size - 1];
        --g_address_book.size;
 
    printf("删除联系人成功:\n");
 
}
 
//3.查找联系人
void FindPersonInfo() {
    printf("查找联系人\n");
    if (g_address_book.size = 0) {
        printf("通讯录为空,查找失败!\n");
        return;
    }
    //根据项目查找电话
    printf("请输入要查找的姓名: ");
    char name[1024] = { 0 };
    scanf("%s", name);
    for (int i = 0; i < g_address_book.size; ++i) {
        PersonInfo* info =& g_address_book.persons[i];
        if (strcmp(info->name, name) == 0) {
            printf("[%d]%s\t%s\n", i, info->name, info->phone);
        }
 
    }
 
 
}
//4.更新联系人
void UpdatePersonInfo() {
    printf("更新联系人\n");
    if (g_address_book.size = 0) {
        printf("通讯录为空,修改失败!\n");
        return;
    }
    printf("请输入要修改的序号:\n");
    int id = 0;
    scanf("%d", &id);
    if (id<0 || id>-g_address_book.size) {
        printf("修改失败,输入的序号有误!\n");
        return;
    }
    PersonInfo * info = &g_address_book.persons[id];
    printf("请输入新的姓名:     (%s)\n",info->name);
    char name[1024] = { 0 };
 
    scanf("%s", name);
    if (strcmp(name, "") != 0) {
        strcmp(info->name, name);
    }
 
 
    char phone[1024] = { 0 };
    printf("请输入新的电话:    (%s)\n",info->phone);
    scanf("%s",phone);
    if (strcmp(phone, "") != 0) {
        strcmp(info->phone, phone);
    }
    printf("更新联系人成功!\n");
 
}
 
//5.打印全部联系人
void PrintfAllPersonInfo() {
    printf("打印全部联系人: \n");
    for (int i = 0; i < g_address_book.size; ++i) {
        PersonInfo *info = &g_address_book.persons[i];
        printf("[%d]  %s\t%s\n",i,info->name,info->phone);
    }
 
    printf("共打印了%d条数据! \n",g_address_book.size);
 
    printf("打印全部联系人成功! \n");
 
 
}
 
//6.排序联系人
void SortPersonInfo() {
    //按照字节序排序,取结构体中的姓名字段
    char name[1024] = { '\0' };
    char phone[1024] = { '\0' };
    int bound;
    int i;
    int size;
    for (i = 0; i < g_address_book.size; i++) {
        for (bound = 0; bound < g_address_book.size; bound++) {
            for (size = bound; size < g_address_book.size - 1; size++) {
                if (strcmp(g_address_book.persons[size].name,
                    g_address_book.persons[size + 1].name) > 0) {
                    strcpy(name, g_address_book.persons[size].name);
                    strcpy(g_address_book.persons[size].name,
                        g_address_book.persons[size + 1].name);
                    strcpy(g_address_book.persons[size + 1].name, name);
                    //copy 电话号码
                    strcpy(phone, g_address_book.persons[size].phone);
                    strcpy(g_address_book.persons[size].phone,
                        g_address_book.persons[size + 1].phone);
                    strcpy(g_address_book.persons[size + 1].phone, phone);
                }
            }
        }
    }
    printf("排序所有联系人:\n");
    printf("排序成功!\n");
    system("pause");
    system("cls");
}
 
 
 
//7.清空联系人
void ClearAllPersonInfo() {
    printf("清空全部数据\n");
    printf("你真的要清空全部数据吗? Y/N \n");
    char choice[1024] = { 0 };
    scanf("%s", choice);
    if (strcmp(choice, "Y") == 0) {
        g_address_book.size = 0;
        printf("清空全部数据成功!\n");
 
    }
    else {
        printf("清空操作取消!\n");
    }
 
 
}
 
Empty() {
 
}
 
typedef void(*Func)();//定义了一个函数指针;
 
 
 
 
int main() {
    Func arr[] = {
        Empty,
        AddPersonInfo,
        DelPersonInfo,
        FindPersonInfo,
        UpdatePersonInfo,
        PrintfAllPersonInfo,
        SortPersonInfo,
        ClearAllPersonInfo
    };
 
    Init();
 
    while (1) {
        int choice = Menu();
        if (choice < 0 || choice >= sizeof(arr) / sizeof(arr[0])) {
            printf("您的输入有误,清重新输入!");
            continue;
        }
 
        if (choice == 0) {
            printf("再见!\n");
            break;
 
        }
        arr[choice]();//转移表,简化代码,通过下标取得函数指针
    }
    system("pause");
    return 0;

}
