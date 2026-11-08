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
// Address: 0x12fe88 - 0x12fea0
void caseD_b_0x12fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x12fe88");
#endif

    switch (ctx->pc) {
        case 0x12fe98u: goto label_12fe98;
        default: break;
    }

    ctx->pc = 0x12fe88u;

    // 0x12fe88: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe90: 0xc048366  jal         func_120D98
    ctx->pc = 0x12FE90u;
    SET_GPR_U32(ctx, 31, 0x12FE98u);
    ctx->pc = 0x12FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE90u;
    // 0x12fe94: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120D98u, 0x12FE90u, 0x12FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE98u;
label_12fe98:
    // 0x12fe98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FE98u;
    {
        const bool branch_taken_0x12fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE98u;
        // 0x12fe9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe98) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FEA0u;
}
