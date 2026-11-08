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

// Function: ClassPoolClean__7ApcWpon
// Address: 0x157178 - 0x1571c8
void ClassPoolClean__7ApcWpon_0x157178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassPoolClean__7ApcWpon_0x157178");
#endif

    switch (ctx->pc) {
        case 0x157198u: goto label_157198;
        case 0x1571a8u: goto label_1571a8;
        default: break;
    }

    ctx->pc = 0x157178u;

    // 0x157178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15717c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x15717cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x157180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157188: 0x24501028  addiu       $s0, $v0, 0x1028
    ctx->pc = 0x157188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4136));
    // 0x15718c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157190: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x157194: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157194u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x411028u));
label_157198:
    // 0x157198: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x157198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x15719c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1571a0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1571A0u;
    SET_GPR_U32(ctx, 31, 0x1571A8u);
    ctx->pc = 0x1571A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571A0u;
    // 0x1571a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1571A0u, 0x1571A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571A8u;
label_1571a8:
    // 0x1571a8: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1571A8u;
    {
        const bool branch_taken_0x1571a8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1571a8) {
            ctx->pc = 0x1571ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1571A8u;
            // 0x1571ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157198;
        }
    }
    ctx->pc = 0x1571B0u;
    // 0x1571b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1571b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1571b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1571b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1571b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1571b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1571bc: 0xaf808b2c  sw          $zero, -0x74D4($gp)
    ctx->pc = 0x1571bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 0));
    // 0x1571c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1571C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1571C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571C0u;
        // 0x1571c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1571C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1571C8u;
}
