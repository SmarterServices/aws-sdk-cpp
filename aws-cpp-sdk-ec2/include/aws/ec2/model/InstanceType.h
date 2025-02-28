﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class InstanceType
  {
    NOT_SET,
    t1_micro,
    t2_nano,
    t2_micro,
    t2_small,
    t2_medium,
    t2_large,
    t2_xlarge,
    t2_2xlarge,
    t3_nano,
    t3_micro,
    t3_small,
    t3_medium,
    t3_large,
    t3_xlarge,
    t3_2xlarge,
    t3a_nano,
    t3a_micro,
    t3a_small,
    t3a_medium,
    t3a_large,
    t3a_xlarge,
    t3a_2xlarge,
    m1_small,
    m1_medium,
    m1_large,
    m1_xlarge,
    m3_medium,
    m3_large,
    m3_xlarge,
    m3_2xlarge,
    m4_large,
    m4_xlarge,
    m4_2xlarge,
    m4_4xlarge,
    m4_10xlarge,
    m4_16xlarge,
    m2_xlarge,
    m2_2xlarge,
    m2_4xlarge,
    cr1_8xlarge,
    r3_large,
    r3_xlarge,
    r3_2xlarge,
    r3_4xlarge,
    r3_8xlarge,
    r4_large,
    r4_xlarge,
    r4_2xlarge,
    r4_4xlarge,
    r4_8xlarge,
    r4_16xlarge,
    r5_large,
    r5_xlarge,
    r5_2xlarge,
    r5_4xlarge,
    r5_8xlarge,
    r5_12xlarge,
    r5_16xlarge,
    r5_24xlarge,
    r5_metal,
    r5a_large,
    r5a_xlarge,
    r5a_2xlarge,
    r5a_4xlarge,
    r5a_8xlarge,
    r5a_12xlarge,
    r5a_16xlarge,
    r5a_24xlarge,
    r5d_large,
    r5d_xlarge,
    r5d_2xlarge,
    r5d_4xlarge,
    r5d_8xlarge,
    r5d_12xlarge,
    r5d_16xlarge,
    r5d_24xlarge,
    r5d_metal,
    r5ad_large,
    r5ad_xlarge,
    r5ad_2xlarge,
    r5ad_4xlarge,
    r5ad_8xlarge,
    r5ad_12xlarge,
    r5ad_16xlarge,
    r5ad_24xlarge,
    x1_16xlarge,
    x1_32xlarge,
    x1e_xlarge,
    x1e_2xlarge,
    x1e_4xlarge,
    x1e_8xlarge,
    x1e_16xlarge,
    x1e_32xlarge,
    i2_xlarge,
    i2_2xlarge,
    i2_4xlarge,
    i2_8xlarge,
    i3_large,
    i3_xlarge,
    i3_2xlarge,
    i3_4xlarge,
    i3_8xlarge,
    i3_16xlarge,
    i3_metal,
    i3en_large,
    i3en_xlarge,
    i3en_2xlarge,
    i3en_3xlarge,
    i3en_6xlarge,
    i3en_12xlarge,
    i3en_24xlarge,
    i3en_metal,
    hi1_4xlarge,
    hs1_8xlarge,
    c1_medium,
    c1_xlarge,
    c3_large,
    c3_xlarge,
    c3_2xlarge,
    c3_4xlarge,
    c3_8xlarge,
    c4_large,
    c4_xlarge,
    c4_2xlarge,
    c4_4xlarge,
    c4_8xlarge,
    c5_large,
    c5_xlarge,
    c5_2xlarge,
    c5_4xlarge,
    c5_9xlarge,
    c5_12xlarge,
    c5_18xlarge,
    c5_24xlarge,
    c5_metal,
    c5d_large,
    c5d_xlarge,
    c5d_2xlarge,
    c5d_4xlarge,
    c5d_9xlarge,
    c5d_18xlarge,
    c5n_large,
    c5n_xlarge,
    c5n_2xlarge,
    c5n_4xlarge,
    c5n_9xlarge,
    c5n_18xlarge,
    cc1_4xlarge,
    cc2_8xlarge,
    g2_2xlarge,
    g2_8xlarge,
    g3_4xlarge,
    g3_8xlarge,
    g3_16xlarge,
    g3s_xlarge,
    g4dn_xlarge,
    g4dn_2xlarge,
    g4dn_4xlarge,
    g4dn_8xlarge,
    g4dn_12xlarge,
    g4dn_16xlarge,
    cg1_4xlarge,
    p2_xlarge,
    p2_8xlarge,
    p2_16xlarge,
    p3_2xlarge,
    p3_8xlarge,
    p3_16xlarge,
    p3dn_24xlarge,
    d2_xlarge,
    d2_2xlarge,
    d2_4xlarge,
    d2_8xlarge,
    f1_2xlarge,
    f1_4xlarge,
    f1_16xlarge,
    m5_large,
    m5_xlarge,
    m5_2xlarge,
    m5_4xlarge,
    m5_8xlarge,
    m5_12xlarge,
    m5_16xlarge,
    m5_24xlarge,
    m5_metal,
    m5a_large,
    m5a_xlarge,
    m5a_2xlarge,
    m5a_4xlarge,
    m5a_8xlarge,
    m5a_12xlarge,
    m5a_16xlarge,
    m5a_24xlarge,
    m5d_large,
    m5d_xlarge,
    m5d_2xlarge,
    m5d_4xlarge,
    m5d_8xlarge,
    m5d_12xlarge,
    m5d_16xlarge,
    m5d_24xlarge,
    m5d_metal,
    m5ad_large,
    m5ad_xlarge,
    m5ad_2xlarge,
    m5ad_4xlarge,
    m5ad_8xlarge,
    m5ad_12xlarge,
    m5ad_16xlarge,
    m5ad_24xlarge,
    h1_2xlarge,
    h1_4xlarge,
    h1_8xlarge,
    h1_16xlarge,
    z1d_large,
    z1d_xlarge,
    z1d_2xlarge,
    z1d_3xlarge,
    z1d_6xlarge,
    z1d_12xlarge,
    z1d_metal,
    u_6tb1_metal,
    u_9tb1_metal,
    u_12tb1_metal,
    a1_medium,
    a1_large,
    a1_xlarge,
    a1_2xlarge,
    a1_4xlarge,
    a1_metal,
    m5dn_large,
    m5dn_xlarge,
    m5dn_2xlarge,
    m5dn_4xlarge,
    m5dn_8xlarge,
    m5dn_12xlarge,
    m5dn_16xlarge,
    m5dn_24xlarge,
    m5n_large,
    m5n_xlarge,
    m5n_2xlarge,
    m5n_4xlarge,
    m5n_8xlarge,
    m5n_12xlarge,
    m5n_16xlarge,
    m5n_24xlarge,
    r5dn_large,
    r5dn_xlarge,
    r5dn_2xlarge,
    r5dn_4xlarge,
    r5dn_8xlarge,
    r5dn_12xlarge,
    r5dn_16xlarge,
    r5dn_24xlarge,
    r5n_large,
    r5n_xlarge,
    r5n_2xlarge,
    r5n_4xlarge,
    r5n_8xlarge,
    r5n_12xlarge,
    r5n_16xlarge,
    r5n_24xlarge
  };

namespace InstanceTypeMapper
{
AWS_EC2_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
