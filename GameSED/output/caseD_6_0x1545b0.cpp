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

// Function: caseD_6
// Address: 0x1545b0 - 0x1545c0
void caseD_6_0x1545b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1545b0");
#endif

    ctx->pc = 0x1545b0u;

    // 0x1545b0: 0x26020304  addiu       $v0, $s0, 0x304
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    // 0x1545b4: 0x26120300  addiu       $s2, $s0, 0x300
    ctx->pc = 0x1545b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1545b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1545B8u;
    {
        const bool branch_taken_0x1545b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B8u;
        // 0x1545bc: 0x53900b  movn        $s2, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545b8) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545C0u;
}
