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

// Function: entry_00195660
// Address: 0x195660 - 0x195688
void entry_00195660_0x195660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195660_0x195660");
#endif

    switch (ctx->pc) {
        case 0x195668u: goto label_195668;
        default: break;
    }

    ctx->pc = 0x195660u;

    // 0x195660: 0xc068086  jal         func_1A0218
    ctx->pc = 0x195660u;
    SET_GPR_U32(ctx, 31, 0x195668u);
    ctx->pc = 0x195664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195660u;
    // 0x195664: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x195660u, 0x195668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195668u;
label_195668:
    // 0x195668: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19566c: 0x24a582e8  addiu       $a1, $a1, -0x7D18
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935272));
    // 0x195670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195674: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x195674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195678: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195678u;
    {
        const bool branch_taken_0x195678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0xae020244  sw          $v0, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195678) {
            ctx->pc = 0x19568Cu;
            return;
        }
    }
    ctx->pc = 0x195680u;
    // 0x195680: 0xc068186  jal         func_1A0618
    ctx->pc = 0x195680u;
    SET_GPR_U32(ctx, 31, 0x195688u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x195680u, 0x195688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195688u;
}
