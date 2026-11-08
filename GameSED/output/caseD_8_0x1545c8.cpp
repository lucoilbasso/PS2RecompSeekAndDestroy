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

// Function: caseD_8
// Address: 0x1545c8 - 0x1545d8
void caseD_8_0x1545c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1545c8");
#endif

    ctx->pc = 0x1545c8u;

    // 0x1545c8: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x1545c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x1545cc: 0x26120314  addiu       $s2, $s0, 0x314
    ctx->pc = 0x1545ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x1545d0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1545D0u;
    {
        const bool branch_taken_0x1545d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545D0u;
        // 0x1545d4: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545d0) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545D8u;
}
