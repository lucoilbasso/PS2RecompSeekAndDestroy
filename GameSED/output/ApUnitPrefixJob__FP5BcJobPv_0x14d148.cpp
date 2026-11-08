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

// Function: ApUnitPrefixJob__FP5BcJobPv
// Address: 0x14d148 - 0x14d1a4
void ApUnitPrefixJob__FP5BcJobPv_0x14d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitPrefixJob__FP5BcJobPv_0x14d148");
#endif

    switch (ctx->pc) {
        case 0x14d160u: goto label_14d160;
        case 0x14d174u: goto label_14d174;
        case 0x14d190u: goto label_14d190;
        default: break;
    }

    ctx->pc = 0x14d148u;

    // 0x14d148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d14c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d150: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14d150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d15c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x14d15cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
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
    // 0x14d180: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x14d180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x14d184: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x14d184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x14d188: 0xc0684a0  jal         func_1A1280
    ctx->pc = 0x14D188u;
    SET_GPR_U32(ctx, 31, 0x14D190u);
    ctx->pc = 0x14D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D188u;
    // 0x14d18c: 0x24840204  addiu       $a0, $a0, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1280u, 0x14D188u, 0x14D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D190u;
label_14d190:
    // 0x14d190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d19c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D19Cu;
        // 0x14d1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D1A4u;
}
