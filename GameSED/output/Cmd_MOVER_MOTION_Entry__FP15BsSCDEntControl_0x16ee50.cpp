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

// Function: Cmd_MOVER_MOTION_Entry__FP15BsSCDEntControl
// Address: 0x16ee50 - 0x16eea8
void Cmd_MOVER_MOTION_Entry__FP15BsSCDEntControl_0x16ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MOVER_MOTION_Entry__FP15BsSCDEntControl_0x16ee50");
#endif

    switch (ctx->pc) {
        case 0x16ee78u: goto label_16ee78;
        case 0x16ee84u: goto label_16ee84;
        case 0x16ee94u: goto label_16ee94;
        default: break;
    }

    ctx->pc = 0x16ee50u;

    // 0x16ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ee54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ee58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ee5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ee5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ee64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ee6c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16ee70: 0xc04110c  jal         func_104430
    ctx->pc = 0x16EE70u;
    SET_GPR_U32(ctx, 31, 0x16EE78u);
    ctx->pc = 0x16EE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE70u;
    // 0x16ee74: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16EE70u, 0x16EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE78u;
label_16ee78:
    // 0x16ee78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16EE7Cu;
    SET_GPR_U32(ctx, 31, 0x16EE84u);
    ctx->pc = 0x16EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE7Cu;
    // 0x16ee80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16EE7Cu, 0x16EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE84u;
label_16ee84:
    // 0x16ee84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16ee84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee8c: 0xc05b040  jal         func_16C100
    ctx->pc = 0x16EE8Cu;
    SET_GPR_U32(ctx, 31, 0x16EE94u);
    ctx->pc = 0x16EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE8Cu;
    // 0x16ee90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C100u, 0x16EE8Cu, 0x16EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE94u;
label_16ee94:
    // 0x16ee94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ee94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ee98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ee9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ee9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEA0u;
        // 0x16eea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EEA8u;
}
