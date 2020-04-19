#include <CUnit/Basic.h>

#include "../src/common.h"
#include "../src/hmap.h"
#include "../src/list.h"



int init_suite(void)
{
	return 0;
}

int clean_suite(void)
{
	return 0;
}

void test_hmap_create_destroy(void)
{
/* You test if something is equal with CU_ASSERT(val1, val2); */
	hmap_t *hmap = hmap_create(7);
	/* Check that a ptr is not null */
	CU_ASSERT_PTR_NOT_NULL(hmap);
}

void test_hmap_insert(void)
{

}

void test_hmap_remove(void)
{

}

void test_hmap_lookup(void)
{

}

void test_hmap_keys(void)
{

}

void test_list_create_destroy(void)
{

}

void test_list_prepend(void)
{

}

void test_list_append(void)
{

}

void test_list_pop(void)
{

}

int main(void)
{
	CU_pSuite test_hash = NULL;
	CU_pSuite test_list = NULL;

	if (CUE_SUCCESS != CU_initialize_registry()) {
		return CU_get_error();
	}

	test_hash = CU_add_suite("Hash", init_suite, clean_suite);
	test_list = CU_add_suite("List", init_suite, clean_suite);

	if (!test_hash) {
		CU_cleanup_registry();
		return CU_get_error();
	}
	if (!test_list) {
		CU_cleanup_registry();
		return CU_get_error();
	}
	if (
		!CU_add_test(test_hash, "Test create & destroy hmap\t",
			     test_hmap_create_destroy)
		|| !CU_add_test(test_hash, "Test insert in hmap \t",
				test_hmap_insert)
		|| !CU_add_test(test_hash, "Test lookup in hmap \t",
				test_hmap_lookup)
		|| !CU_add_test(test_hash, "Test remove in hmap \t",
				test_hmap_remove)
		|| !CU_add_test(test_hash, "Test keys in hmap \t",
				test_hmap_keys)

		|| !CU_add_test(test_list, "Test create & destroy in list \t",
				test_list_create_destroy)
		|| !CU_add_test(test_list, "Test keys in list \t",
				test_list_prepend)
		|| !CU_add_test(test_list, "Test keys in list \t",
				test_list_append)
		|| !CU_add_test(test_list, "Test keys in list \t",
				test_list_pop)
		) {
			CU_cleanup_registry();
			return CU_get_error();
	}
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
