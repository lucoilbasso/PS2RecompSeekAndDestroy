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

// Function: caseD_9
// Address: 0x1545d8 - 0x1545e8
void caseD_9_0x1545d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1545d8");
#endif

    ctx->pc = 0x1545d8u;

    // 0x1545d8: 0x26020324  addiu       $v0, $s0, 0x324
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    // 0x1545dc: 0x26120318  addiu       $s2, $s0, 0x318
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x1545e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1545E0u;
    {
        const bool branch_taken_0x1545e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E0u;
        // 0x1545e4: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545e0) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545E8u;
}
