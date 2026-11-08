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

// Function: entry_001a0410
// Address: 0x1a0410 - 0x1a0418
void entry_001a0410_0x1a0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0410_0x1a0410");
#endif

    ctx->pc = 0x1a0410u;

    // 0x1a0410: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a0414: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a0414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x1a0418u;
}
