/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TEST_NSDL_ACCESS_HELPER_H
#define TEST_NSDL_ACCESS_HELPER_H

#include "nsdlaccesshelper.h"
#include "common_stub.h"

class TestObserver;

class Test_NsdlAccessHelper
{
public:
    Test_NsdlAccessHelper();

    virtual ~Test_NsdlAccessHelper();

    void test_nsdl_c_callback();

    void test_nsdl_c_memory_alloc();

    void test_nsdl_c_memory_free();

    void test_nsdl_c_send_to_server();

    void test_nsdl_c_received_from_server();

    void test_nsdl_c_bootstrap_done();

    void test_socket_malloc();

    void test_socket_free();

    TestObserver *observer;
};

#endif // TEST_NSDL_ACCESS_HELPER_H
