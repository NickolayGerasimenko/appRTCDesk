/* (c) Copyright 2014 Temasys Communication, pvt, ltd.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and 
   limitations under the License.

 *
 * MediaConstraintsNative.h
 *
 *  Created on: Dec 18, 2013
 *      Author: Francois Temasys
 */

#ifndef MEDIACONSTRAINTSNATIVE_H_
#define MEDIACONSTRAINTSNATIVE_H_

#include "talk/app/webrtc/mediaconstraintsinterface.h"

class MediaConstraintsNative : public webrtc::MediaConstraintsInterface
{
 public:
  virtual ~MediaConstraintsNative();
  MediaConstraintsNative();
  MediaConstraintsNative(
  const webrtc::MediaConstraintsInterface::Constraints& mandatory,
  const webrtc::MediaConstraintsInterface::Constraints& optional);
  virtual const webrtc::MediaConstraintsInterface::Constraints& GetMandatory() const;
  virtual const webrtc::MediaConstraintsInterface::Constraints& GetOptional() const;

 private:
  webrtc::MediaConstraintsInterface::Constraints mandatory_;
  webrtc::MediaConstraintsInterface::Constraints optional_;
};
#endif /* MEDIACONSTRAINTSNATIVE_H_ */
