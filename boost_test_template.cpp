#include "pch.h"
#include <boost/test/unit_test.hpp>

using boost::unit_test::test_suite;

test_suite* init_unit_test_suite( int argc, char* argv[] )
{
	return nullptr;
}

BOOST_AUTO_TEST_CASE( asdf )
{
	BOOST_CHECK( false );
}