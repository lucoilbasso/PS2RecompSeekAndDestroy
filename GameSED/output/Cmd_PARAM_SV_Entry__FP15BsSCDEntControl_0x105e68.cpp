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

// Function: Cmd_PARAM_SV_Entry__FP15BsSCDEntControl
// Address: 0x105e68 - 0x105eec
void Cmd_PARAM_SV_Entry__FP15BsSCDEntControl_0x105e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARAM_SV_Entry__FP15BsSCDEntControl_0x105e68");
#endif

    switch (ctx->pc) {
        case 0x105e84u: goto label_105e84;
        case 0x105ea8u: goto label_105ea8;
        case 0x105ebcu: goto label_105ebc;
        case 0x105ec4u: goto label_105ec4;
        default: break;
    }

    ctx->pc = 0x105e68u;

    // 0x105e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105e70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105e78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105e7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105E7Cu;
    SET_GPR_U32(ctx, 31, 0x105E84u);
    ctx->pc = 0x105E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105E7Cu;
    // 0x105e80: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105E7Cu, 0x105E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E84u;
label_105e84:
    // 0x105e84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e88: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x105e8c: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x105e90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x105E94u;
    {
        const bool branch_taken_0x105e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E94u;
        // 0x105e98: 0x24843818  addiu       $a0, $a0, 0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e94) {
            ctx->pc = 0x105EBCu;
            goto label_105ebc;
        }
    }
    ctx->pc = 0x105E9Cu;
    // 0x105e9c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x105e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105ea0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x105EA0u;
    SET_GPR_U32(ctx, 31, 0x105EA8u);
    ctx->pc = 0x105EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EA0u;
    // 0x105ea4: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x105EA0u, 0x105EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EA8u;
label_105ea8:
    // 0x105ea8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x105ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x105eac: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x105eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105eb4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x105EB4u;
    SET_GPR_U32(ctx, 31, 0x105EBCu);
    ctx->pc = 0x105EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EB4u;
    // 0x105eb8: 0x24a51fc0  addiu       $a1, $a1, 0x1FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x105EB4u, 0x105EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EBCu;
label_105ebc:
    // 0x105ebc: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x105EBCu;
    SET_GPR_U32(ctx, 31, 0x105EC4u);
    ctx->pc = 0x105EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EBCu;
    // 0x105ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x105EBCu, 0x105EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EC4u;
label_105ec4:
    // 0x105ec4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x105ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105ed0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105ed4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105ed8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x105ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x105edc: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x105edcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x105ee0: 0xac22ec00  sw          $v0, -0x1400($at)
    ctx->pc = 0x105ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962176), GPR_U32(ctx, 2));
    // 0x105ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x105EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE4u;
        // 0x105ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105EECu;
}
