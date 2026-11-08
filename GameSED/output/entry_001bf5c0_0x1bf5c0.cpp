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

// Function: entry_001bf5c0
// Address: 0x1bf5c0 - 0x1bf5c8
void entry_001bf5c0_0x1bf5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf5c0_0x1bf5c0");
#endif

    ctx->pc = 0x1bf5c0u;

    // 0x1bf5c0: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1bf5c4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1bf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->pc = 0x1bf5c8u;
}
