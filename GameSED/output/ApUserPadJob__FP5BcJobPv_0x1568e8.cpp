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

// Function: ApUserPadJob__FP5BcJobPv
// Address: 0x1568e8 - 0x156940
void ApUserPadJob__FP5BcJobPv_0x1568e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUserPadJob__FP5BcJobPv_0x1568e8");
#endif

    switch (ctx->pc) {
        case 0x156910u: goto label_156910;
        case 0x156924u: goto label_156924;
        default: break;
    }

    ctx->pc = 0x1568e8u;

    // 0x1568e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1568ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1568f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1568f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1568f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1568f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1568f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1568f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1568fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1568fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156900: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x156900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x156904: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x156908: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x156908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15690c: 0x0  nop
    ctx->pc = 0x15690cu;
    // NOP
label_156910:
    // 0x156910: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x156910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156918: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15691c: 0xc055904  jal         func_156410
    ctx->pc = 0x15691Cu;
    SET_GPR_U32(ctx, 31, 0x156924u);
    ctx->pc = 0x156920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15691Cu;
    // 0x156920: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156410u, 0x15691Cu, 0x156924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156924u;
label_156924:
    // 0x156924: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156924u;
    {
        const bool branch_taken_0x156924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x156928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156924u;
        // 0x156928: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156924) {
            ctx->pc = 0x156910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156910;
        }
    }
    ctx->pc = 0x15692Cu;
    // 0x15692c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15692cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156938: 0x3e00008  jr          $ra
    ctx->pc = 0x156938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156938u;
        // 0x15693c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156940u;
}
