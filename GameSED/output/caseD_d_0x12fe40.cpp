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

// Function: caseD_d
// Address: 0x12fe40 - 0x12fe58
void caseD_d_0x12fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x12fe40");
#endif

    switch (ctx->pc) {
        case 0x12fe50u: goto label_12fe50;
        default: break;
    }

    ctx->pc = 0x12fe40u;

    // 0x12fe40: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe48: 0xc0482c6  jal         func_120B18
    ctx->pc = 0x12FE48u;
    SET_GPR_U32(ctx, 31, 0x12FE50u);
    ctx->pc = 0x12FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE48u;
    // 0x12fe4c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120B18u, 0x12FE48u, 0x12FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE50u;
label_12fe50:
    // 0x12fe50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12FE50u;
    {
        const bool branch_taken_0x12fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE50u;
        // 0x12fe54: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe50) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FE58u;
}
