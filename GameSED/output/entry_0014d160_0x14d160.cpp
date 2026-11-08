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

// Function: entry_0014d160
// Address: 0x14d160 - 0x14d180
void entry_0014d160_0x14d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d160_0x14d160");
#endif

    switch (ctx->pc) {
        case 0x14d174u: goto label_14d174;
        default: break;
    }

    ctx->pc = 0x14d160u;

label_14d160:
    // 0x14d160: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14d164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d168: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14d168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d16c: 0xc05302e  jal         func_14C0B8
    ctx->pc = 0x14D16Cu;
    SET_GPR_U32(ctx, 31, 0x14D174u);
    ctx->pc = 0x14D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D16Cu;
    // 0x14d170: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C0B8u, 0x14D16Cu, 0x14D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D174u;
label_14d174:
    // 0x14d174: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D174u;
    {
        const bool branch_taken_0x14d174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D174u;
        // 0x14d178: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d174) {
            ctx->pc = 0x14D160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d160;
        }
    }
    ctx->pc = 0x14D17Cu;
    // 0x14d17c: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x14d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    ctx->pc = 0x14d180u;
}
