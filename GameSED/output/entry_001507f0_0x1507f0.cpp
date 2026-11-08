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

// Function: entry_001507f0
// Address: 0x1507f0 - 0x1507f8
void entry_001507f0_0x1507f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001507f0_0x1507f0");
#endif

    ctx->pc = 0x1507f0u;

    // 0x1507f0: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1507f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1507f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x1507f8u;
}
