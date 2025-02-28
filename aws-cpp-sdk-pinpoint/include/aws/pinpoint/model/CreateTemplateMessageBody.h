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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about an API request or response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateTemplateMessageBody">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CreateTemplateMessageBody
  {
  public:
    CreateTemplateMessageBody();
    CreateTemplateMessageBody(Aws::Utils::Json::JsonView jsonValue);
    CreateTemplateMessageBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline CreateTemplateMessageBody& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline CreateTemplateMessageBody& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline CreateTemplateMessageBody& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The message that's returned from the API.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline CreateTemplateMessageBody& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline CreateTemplateMessageBody& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that's returned from the API.</p>
     */
    inline CreateTemplateMessageBody& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline const Aws::String& GetRequestID() const{ return m_requestID; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(const Aws::String& value) { m_requestIDHasBeenSet = true; m_requestID = value; }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(Aws::String&& value) { m_requestIDHasBeenSet = true; m_requestID = std::move(value); }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline void SetRequestID(const char* value) { m_requestIDHasBeenSet = true; m_requestID.assign(value); }

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline CreateTemplateMessageBody& WithRequestID(const Aws::String& value) { SetRequestID(value); return *this;}

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline CreateTemplateMessageBody& WithRequestID(Aws::String&& value) { SetRequestID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request or response.</p>
     */
    inline CreateTemplateMessageBody& WithRequestID(const char* value) { SetRequestID(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_requestID;
    bool m_requestIDHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
