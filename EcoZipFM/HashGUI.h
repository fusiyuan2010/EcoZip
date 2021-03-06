// HashGUI.h

#ifndef __HASH_GUI_H
#define __HASH_GUI_H

#include "CPP/7zip/UI/Common/HashCalc.h"

HRESULT HashCalcGUI(
    DECL_EXTERNAL_CODECS_LOC_VARS
    const NWildcard::CCensor &censor,
    const CHashOptions &options,
    bool &messageWasDisplayed);

void AddHashBundleRes(UString &s, const CHashBundle &hb, const UString &firstFileName);

#endif
