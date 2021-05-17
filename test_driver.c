/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Tests implementation of a Liked List.
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Unit tests for a linked list implemenation.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "shortcut.h"
#include "test_list.h"

int main(int argc, char *argv[])
{
	ADD_TEST(test_list_obtain__shall_allocate_a_list);
	ADD_TEST(test_list_obtain__shall_allocate_a_fresh_list);
	ADD_TEST(test_list_obtain__shall_allocate_a_different_list);
	ADD_TEST(test_list_obtain_failed__shall_not_allocate_a_list);
	
	ADD_TEST(test_list_get_size__shall_be_0_for_newly_obtained_list);
	ADD_TEST(test_list_get_size__shall_reflect_number_of_values_after_adding_values);
	ADD_TEST(test_list_get_size__shall_reflect_number_of_values_after_removing_values);
	ADD_TEST(test_list_get_size__shall_be_0_after_clear);
	ADD_TEST(test_list_get_size__shall_be_0_for_invalid_list);

	ADD_TEST(test_list_release__shall_release_a_valid_empty_list);
	ADD_TEST(test_list_release__shall_release_a_valid_filled_list);
	ADD_TEST(test_list_release__shall_ignore_release_of_an_invalid_list);
	
	ADD_TEST(test_list_is_valid__shall_be_true_for_valid_list);
	ADD_TEST(test_list_is_valid__shall_be_false_for_invalid_list);
	
	ADD_TEST(test_list_is_empty__shall_be_true__for_newly_obtained_list);
	ADD_TEST(test_list_is_empty__shall_be_false__after_adding_values);
	ADD_TEST(test_list_is_empty__shall_be_true_for_invalid_list);
	
	ADD_TEST(test_list_add__shall_add_one_value_to_empty_list);
	ADD_TEST(test_list_add__shall_add_multiple_values);
	ADD_TEST(test_list_add__shall_ignore_invalid_list);
	
	ADD_TEST(test_list_remove__shall_not_remove_from_empty_list);
	ADD_TEST(test_list_remove__shall_remove_only_value);
	ADD_TEST(test_list_remove__shall_remove_one_value);
	ADD_TEST(test_list_remove__shall_remove_first_value);
	ADD_TEST(test_list_remove__shall_remove_value_in_the_middle);
	ADD_TEST(test_list_remove__shall_remove_value_at_the_end);
	ADD_TEST(test_list_remove__shall_not_remove_missing_value);
	
	ADD_TEST(test_list_clear__shall_clear_empty_list);
	ADD_TEST(test_list_clear__shall_clear_list_with_one_value);
	ADD_TEST(test_list_clear__shall_clear_list_with_multiple_values);
	ADD_TEST(test_list_clear__shall_ingore_invalid_list);
	
	ADD_TEST(test_list_get_at__shall_return_0_for_empty_list);
	ADD_TEST(test_list_get_at__shall_return_single_value);
	ADD_TEST(test_list_get_at__shall_return_first_value);
	ADD_TEST(test_list_get_at__shall_return_values_in_added_order);
	ADD_TEST(test_list_get_at__shall_return_0_for_invalid_list);

	ADD_TEST(test_list_it_obtain__shall_allocate_and_release_a_list_iterator_for_a_list);
	ADD_TEST(test_list_it_obtain__shall_allocate_and_point_to_list_head);
	ADD_TEST(test_list_it_obtain__shall_not_allocate_a_list_iterator_for_an_invalid_list);
	ADD_TEST(test_list_it_is_valid);
	ADD_TEST(test_list_it_is_valid__shall_be_invalid_for_0_iterator);
	ADD_TEST(test_list_it_is_valid__shall_be_invalid_for_empty_list);

	ADD_TEST(test_list_it_next__shall_move_to_next);
	ADD_TEST(test_list_it_next__shall_return_false_for_invalid_it);

	ADD_TEST(test_list_it_get__shall_modify_value);
	ADD_TEST(test_list_it_get__shall_return_0_for_invalid_iterator);

	run_tests();
	return 0;
}
