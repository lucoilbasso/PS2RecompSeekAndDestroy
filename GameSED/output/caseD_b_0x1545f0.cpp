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

// Function: caseD_b
// Address: 0x1545f0 - 0x154600
void caseD_b_0x1545f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1545f0");
#endif

    ctx->pc = 0x1545f0u;

    // 0x1545f0: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x1545f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x1545f4: 0x26120334  addiu       $s2, $s0, 0x334
    ctx->pc = 0x1545f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 820));
    // 0x1545f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1545F8u;
    {
        const bool branch_taken_0x1545f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F8u;
        // 0x1545fc: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f8) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154600u;
}
