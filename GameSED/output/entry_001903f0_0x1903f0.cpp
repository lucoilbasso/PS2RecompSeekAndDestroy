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

// Function: entry_001903f0
// Address: 0x1903f0 - 0x1903f8
void entry_001903f0_0x1903f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001903f0_0x1903f0");
#endif

    ctx->pc = 0x1903f0u;

    // 0x1903f0: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1903f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1903f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1903f8u;
}
