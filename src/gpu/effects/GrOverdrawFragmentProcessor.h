/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/**************************************************************************************************
 *** This file was autogenerated from GrOverdrawFragmentProcessor.fp; do not modify.
 **************************************************************************************************/
#ifndef GrOverdrawFragmentProcessor_DEFINED
#define GrOverdrawFragmentProcessor_DEFINED
#include "SkTypes.h"
#include "GrFragmentProcessor.h"
#include "GrCoordTransform.h"
class GrOverdrawFragmentProcessor : public GrFragmentProcessor {
public:
    SkPMColor color0() const { return fColor0; }
    SkPMColor color1() const { return fColor1; }
    SkPMColor color2() const { return fColor2; }
    SkPMColor color3() const { return fColor3; }
    SkPMColor color4() const { return fColor4; }
    SkPMColor color5() const { return fColor5; }
    static std::unique_ptr<GrFragmentProcessor> Make(SkPMColor color0, SkPMColor color1,
                                                     SkPMColor color2, SkPMColor color3,
                                                     SkPMColor color4, SkPMColor color5) {
        return std::unique_ptr<GrFragmentProcessor>(
                new GrOverdrawFragmentProcessor(color0, color1, color2, color3, color4, color5));
    }
    GrOverdrawFragmentProcessor(const GrOverdrawFragmentProcessor& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "OverdrawFragmentProcessor"; }

private:
    GrOverdrawFragmentProcessor(SkPMColor color0, SkPMColor color1, SkPMColor color2,
                                SkPMColor color3, SkPMColor color4, SkPMColor color5)
            : INHERITED(kGrOverdrawFragmentProcessor_ClassID, kNone_OptimizationFlags)
            , fColor0(color0)
            , fColor1(color1)
            , fColor2(color2)
            , fColor3(color3)
            , fColor4(color4)
            , fColor5(color5) {}
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    SkPMColor fColor0;
    SkPMColor fColor1;
    SkPMColor fColor2;
    SkPMColor fColor3;
    SkPMColor fColor4;
    SkPMColor fColor5;
    typedef GrFragmentProcessor INHERITED;
};
#endif
