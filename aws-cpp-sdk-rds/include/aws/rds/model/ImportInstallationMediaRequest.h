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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API ImportInstallationMediaRequest : public RDSRequest
  {
  public:
    ImportInstallationMediaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportInstallationMedia"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneId() const{ return m_customAvailabilityZoneId; }

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline bool CustomAvailabilityZoneIdHasBeenSet() const { return m_customAvailabilityZoneIdHasBeenSet; }

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline void SetCustomAvailabilityZoneId(const Aws::String& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = value; }

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline void SetCustomAvailabilityZoneId(Aws::String&& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = std::move(value); }

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline void SetCustomAvailabilityZoneId(const char* value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId.assign(value); }

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline ImportInstallationMediaRequest& WithCustomAvailabilityZoneId(const Aws::String& value) { SetCustomAvailabilityZoneId(value); return *this;}

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline ImportInstallationMediaRequest& WithCustomAvailabilityZoneId(Aws::String&& value) { SetCustomAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the custom Availability Zone (AZ) to import the
     * installation media to.</p>
     */
    inline ImportInstallationMediaRequest& WithCustomAvailabilityZoneId(const char* value) { SetCustomAvailabilityZoneId(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline ImportInstallationMediaRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline ImportInstallationMediaRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>The
     * list only includes supported on-premises, bring your own media (BYOM) DB
     * engines. </p> <p>Valid Values: </p> <ul> <li> <p> <code>sqlserver-ee</code> </p>
     * </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline ImportInstallationMediaRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline ImportInstallationMediaRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline ImportInstallationMediaRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>For a list of valid
     * engine versions, call <a>DescribeDBEngineVersions</a>.</p> <p>The following are
     * the database engines and links to information about the major and minor
     * versions. The list only includes supported on-premises, bring your own media
     * (BYOM) DB engines.</p> <p> <b>Microsoft SQL Server</b> </p> <p>See <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.FeatureSupport">Version
     * and Feature Support on Amazon RDS</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline ImportInstallationMediaRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline const Aws::String& GetEngineInstallationMediaPath() const{ return m_engineInstallationMediaPath; }

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline bool EngineInstallationMediaPathHasBeenSet() const { return m_engineInstallationMediaPathHasBeenSet; }

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline void SetEngineInstallationMediaPath(const Aws::String& value) { m_engineInstallationMediaPathHasBeenSet = true; m_engineInstallationMediaPath = value; }

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline void SetEngineInstallationMediaPath(Aws::String&& value) { m_engineInstallationMediaPathHasBeenSet = true; m_engineInstallationMediaPath = std::move(value); }

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline void SetEngineInstallationMediaPath(const char* value) { m_engineInstallationMediaPathHasBeenSet = true; m_engineInstallationMediaPath.assign(value); }

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline ImportInstallationMediaRequest& WithEngineInstallationMediaPath(const Aws::String& value) { SetEngineInstallationMediaPath(value); return *this;}

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline ImportInstallationMediaRequest& WithEngineInstallationMediaPath(Aws::String&& value) { SetEngineInstallationMediaPath(std::move(value)); return *this;}

    /**
     * <p>The path to the installation media for the specified DB engine.</p>
     * <p>Example:
     * <code>SQLServerISO/en_sql_server_2016_enterprise_x64_dvd_8701793.iso</code> </p>
     */
    inline ImportInstallationMediaRequest& WithEngineInstallationMediaPath(const char* value) { SetEngineInstallationMediaPath(value); return *this;}


    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline const Aws::String& GetOSInstallationMediaPath() const{ return m_oSInstallationMediaPath; }

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline bool OSInstallationMediaPathHasBeenSet() const { return m_oSInstallationMediaPathHasBeenSet; }

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline void SetOSInstallationMediaPath(const Aws::String& value) { m_oSInstallationMediaPathHasBeenSet = true; m_oSInstallationMediaPath = value; }

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline void SetOSInstallationMediaPath(Aws::String&& value) { m_oSInstallationMediaPathHasBeenSet = true; m_oSInstallationMediaPath = std::move(value); }

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline void SetOSInstallationMediaPath(const char* value) { m_oSInstallationMediaPathHasBeenSet = true; m_oSInstallationMediaPath.assign(value); }

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline ImportInstallationMediaRequest& WithOSInstallationMediaPath(const Aws::String& value) { SetOSInstallationMediaPath(value); return *this;}

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline ImportInstallationMediaRequest& WithOSInstallationMediaPath(Aws::String&& value) { SetOSInstallationMediaPath(std::move(value)); return *this;}

    /**
     * <p>The path to the installation media for the operating system associated with
     * the specified DB engine.</p> <p>Example:
     * <code>WindowsISO/en_windows_server_2016_x64_dvd_9327751.iso</code> </p>
     */
    inline ImportInstallationMediaRequest& WithOSInstallationMediaPath(const char* value) { SetOSInstallationMediaPath(value); return *this;}

  private:

    Aws::String m_customAvailabilityZoneId;
    bool m_customAvailabilityZoneIdHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_engineInstallationMediaPath;
    bool m_engineInstallationMediaPathHasBeenSet;

    Aws::String m_oSInstallationMediaPath;
    bool m_oSInstallationMediaPathHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
