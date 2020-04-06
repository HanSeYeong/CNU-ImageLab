
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Node {
	int wordlenght; //단어의 철자 갯수
	int length; //이 단어의 갯수
	char* linedword;//정렬된 단어
	char* word;// 단어 원본

	struct Node* next;
}Node;

typedef struct head {
	int words;// 글자 종류 개수
	int max_word_num;   //같은 글자 카테고리의의 노드개수
	int max_word_length;// 가장 긴 철자
	
	struct Node** Wordlist;
}Head;


Node* CreateNode(char* word)
{
	Node* temp = malloc(sizeof(Node));

	temp->linedword = (char*)malloc(sizeof(char) * sizeof(word));
	temp->word = (char*)malloc(sizeof(char) * sizeof(word));
	temp->wordlenght = sizeof(word);
	temp->length = 0;
	temp->linedword[sizeof(word) - 1] = NULL;
	temp->word[sizeof(word) - 1] = NULL;



	//printf("\n");
	
		//printf("대입 전 :%p %p\n", temp->word, word);
		strcpy(temp->word, word);
	//	printf("대입 후 :%p %p\n\n", temp->word, word);
		strcpy(temp->linedword, word);
	
	//
	//for (int i = 0; i < sizeof(word) - 1; i++)
	//{
	//	printf("%c %c\n", temp->word[i], word[i]);
	//}
	for (int i = 0; i < sizeof(word) - 1; i++)
	{


		for (int j = i; j < sizeof(word) - 1; j++)
		{
			
			if (temp->linedword[i] > temp->linedword[j])
			{
				char tempchar = NULL;


				
				tempchar = temp->linedword[i];
				temp->linedword[i] = temp->linedword[j];
				temp->linedword[j] = tempchar;
				
			
		
			}
		}
	}
	//for (int i = 0; i < sizeof(word) - 1; i++)
	//{
	//	//printf("%c", temp->linedword[i]);
	//}
	return temp;
}

int AddNode(char* word, Head* head)
{
	Node* wordInfo = CreateNode(word);
	
	int place = checkplace(wordInfo, head);
	//printf("위치 : %d\n", place);

	//printf("노드 추가 \n");

	//printf("노드 추가  한거제\n");
	
	if (head->Wordlist[place] == NULL)
	{
		wordInfo->length++;

		//printf("단어 종류가 추가되었네 \n");
		head->words++;
	}
	else
		wordInfo->length = head->Wordlist[place]->length + 1;
	
	wordInfo->next = head->Wordlist[place];
	head->Wordlist[place] = wordInfo;
	


	if (wordInfo->length > head->max_word_num)
		head->max_word_num = wordInfo->length;
	if (wordInfo->wordlenght > head->max_word_length)
		head->max_word_length = wordInfo->wordlenght;

	
	return place;

}
int checkplace(Node* word, Head* head)
{
	int count = 0;
	
	while (1)
	{
		Node* curr = head->Wordlist[count];
		//printf("커서 수정 현재 단어 %c\n", word->word[0]);
		if (curr == NULL)
		{
		//	printf("여기서 중단점이나와네 ?\n");
			return count;
		}
		if (curr->wordlenght == word->wordlenght)
		{
			//printf("글자 길이가 같다 \n");
			for (int i = 0; i < curr->wordlenght; i++)
			{
				if (word->linedword[i] == curr->linedword[i])
				{
				//	printf("이번에 비교한거 : %c\n", curr->linedword[i]);
					if (i== curr->wordlenght-1)
					{
					//	printf("둘이 같은 단어\n");
						return count;
					}
					else
						continue;//아직 비교할게 남았다
				} 
				else break;// 다른게 있어서 중단
			}
		}
		if (head->Wordlist[count]->wordlenght == NULL)
			return count;
		count++;
		
	}
}


void groupAnagrams() {

	char strs[6][4] = { "eat", "tea", "tan", "ate", "nat", "bat" };
	int* returnSize = 0;
	int** returnColumnSizes = 0;
	int strsSize = 6;
	


	Head* head = (Head * )malloc(sizeof(Head));
	head->max_word_length = 0;
	head->max_word_num = 0;
	head->words= 0;
	head->Wordlist = (Node*)malloc(sizeof(Node) * strsSize);



	/*if (head->Wordlist == NULL)
	{
		printf("오류\n");
	}*/


	for (int i = 0; i < strsSize; i++)
	{
		head->Wordlist[i] = NULL;
	}
	

	for (int i = 0; i < strsSize; i++)
	{
		AddNode(strs[i], head);

		

		//printf("\n\n");
	}
	
	for (int j = 0; j < 3; j++)
	{
		for (Node* curr = head->Wordlist[j]; curr != NULL; curr = curr->next)
		{
			for (int i = 0; i < 4; i++)
			{
				printf("%c", curr->word[i]);
			}
			
		}
		printf("\n");


	}



	//printf("철자 제일 긴 갯수 : %d\n 노드 수 제일 긴 갯수 : %d\n", head->max_word_length, head->max_word_num);

	char*** str = (char***)malloc(sizeof(char) * strsSize);
	for (int i = 0; i < head->words; i++)
	{

		//printf("출력배열 설정\n");
		str[i] = (char**)malloc(sizeof(char) * head->max_word_num);
		for (int j = 0; j < head->max_word_num; j++)
		{
			str[i][j] = (char*)malloc(sizeof(char) * head->max_word_length);
		}
	}


	//printf("현재 단어 갯수 : %d\n", head->words);
	for (int i = 0; i < head->words+1; i++)
	{
		Node* curr = head->Wordlist[i];
		if (curr == NULL)
			break;
		for (int j = 0; j < head->max_word_num; j++)
		{
		//	printf("%s ", curr->word);
			str[i][j] = curr->word;
		//	printf(" %d %d \n", head->max_word_num, j);
			if (curr->next != NULL)
			{
				curr = curr->next;
				
			}
			else
				break;
				


			
			
		//	printf("%s ", str[i][j]);
		}
		//printf("한묶음 끝 \n");
	}

	return str;
}





int main()
{
	groupAnagrams();


	printf("");
	return 0;
	
}
