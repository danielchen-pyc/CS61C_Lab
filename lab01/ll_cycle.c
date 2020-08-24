#include <stddef.h>
#include <stdlib.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL) {
	return 0;
    }
    node *tortoise = head;
    node *hare = head;
    while(hare != NULL && hare->next != NULL) {
        hare = hare->next->next;
        tortoise = tortoise->next;
        if (!tortoise || !hare) {
            return 0;
        }
        if (tortoise == hare && tortoise != NULL) {
            return 1;
        }
    }
    return 0;
}
