#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001555dc
// Address: 0x1555dc - 0x1555e0
void entry_001555dc_0x1555dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001555dc_0x1555dc");
#endif

    ctx->pc = 0x1555dcu;

    // 0x1555dc: 0x8ca20898  lw          $v0, 0x898($a1)
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2200)));
    ctx->pc = 0x1555e0u;
}
