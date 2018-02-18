/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */
#ifndef OCCA_PARSER_SPECIALMACROS_HEADER2
#define OCCA_PARSER_SPECIALMACROS_HEADER2

#include "macro.hpp"

namespace occa {
  namespace lang {
    // defined()
    class definedMacro : public macro_t {
    public:
      definedMacro(preprocessor &pp_);

      virtual void expand(identifierToken &source);
    };

    // __has_include()
    class hasIncludeMacro : public macro_t {
    public:
      hasIncludeMacro(preprocessor &pp_);

      virtual void expand(identifierToken &source);
    };

    // __FILE__
    class fileMacro : public macro_t {
    public:
      fileMacro(preprocessor &pp_);

      virtual void expand(identifierToken &source);
    };

    // __LINE__
    class lineMacro : public macro_t {
    public:
      lineMacro(preprocessor &pp_);

      virtual void expand(identifierToken &source);
    };

    // __DATE__
    class dateMacro : public macro_t {
    public:
      dateMacro(preprocessor &pp_);

      virtual void expand(identifierToken &source);
    };

    // __TIME__
    class timeMacro : public macro_t {
    public:
      timeMacro(preprocessor &pp_);

      virtual void expand(identifierToken &source);
    };

    // __COUNTER__
    class counterMacro : public macro_t {
    public:
      mutable int counter;


      counterMacro(preprocessor &pp_);
      virtual void expand(identifierToken &source);
    };
  }
}

#endif
