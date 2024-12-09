#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"


// ノードを初期化
void initialize_node(node* p, int val)
{
	p->pNext = NULL;
	p->data = val;
}

// リストを初期化
void initialize_list(list* l)
{
	l->header = NULL;
}


// 先頭にデータを追加
void push_front(list* l, node* p)
{
	p->pNext = l->header;//pの次のノードに先頭を入れる
	l->header = p;//空いた先頭に新しいデータpをいれる
}

// pの次のノードを削除
void remove_next(list* l, node* p)
{
	node* n = p->pNext;//nにpの次のノードを入れる

	if (n != NULL) 
	{
		p->pNext = n->pNext;//p->Nextにpの次の次のノードを入れる
		n->pNext = NULL;//安全のためにpの次の次のノードにNULLを入れる
	}
}


// pの次のノードを取得
node* get_next(list* l, node* p)
{
	if (!p) return NULL;
	return p->pNext;

	return NULL;
}
