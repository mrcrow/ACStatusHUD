// Copyright (c) 2020 mrcrow <wwz.michael@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#ifndef ACStatusViewDefines_h
#define ACStatusViewDefines_h

/// Supported built-in icon types
typedef NS_ENUM(NSUInteger, ACStatusIconType) {
    ACStatusIconTypeDone = 0,
    ACStatusIconTypeHeart = 1,
    ACStatusIconTypeDocument = 2,
    ACStatusIconTypeBookmark = 3,
    ACStatusIconTypeMoon = 4,
    ACStatusIconTypeStar = 5,
    ACStatusIconTypeExclamation = 6,
    ACStatusIconTypeFlag = 7,
    ACStatusIconTypeMessage = 8,
    ACStatusIconTypeQuestion = 9,
    ACStatusIconTypeBolt = 10,
    ACStatusIconTypeAdd = 11,
    ACStatusIconTypeError = 12,
    ACStatusIconTypeShuffle = 13,
    ACStatusIconTypeRepeat = 14,
    ACStatusIconTypeEject = 15,
    ACStatusIconTypeCard = 16,
    ACStatusIconTypeRotate = 17,
    ACStatusIconTypeLike = 18,
    ACStatusIconTypeDislike = 19,
    ACStatusIconTypePrivacy = 20,
    ACStatusIconTypeCart = 21,
    ACStatusIconTypeSearch = 22
};

/// Haptic feedback types
typedef NS_ENUM(NSUInteger, ACStatusHapticFeedbackType) {
    ACStatusHapticFeedbackTypeNone = 0,
    ACStatusHapticFeedbackTypeSuccess = 1,
    ACStatusHapticFeedbackTypeWarning = 2,
    ACStatusHapticFeedbackTypeError = 3
};

#endif /* ACStatusViewDefines_h */
