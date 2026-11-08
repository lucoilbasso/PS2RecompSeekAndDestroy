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

// Function: Cmd_MOVER_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x16edf8 - 0x16ee50
void Cmd_MOVER_PARAM_Entry__FP15BsSCDEntControl_0x16edf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MOVER_PARAM_Entry__FP15BsSCDEntControl_0x16edf8");
#endif

    switch (ctx->pc) {
        case 0x16ee20u: goto label_16ee20;
        case 0x16ee2cu: goto label_16ee2c;
        case 0x16ee3cu: goto label_16ee3c;
        default: break;
    }

    ctx->pc = 0x16edf8u;

    // 0x16edf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16edf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16edfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ee00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ee04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ee04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ee0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ee0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ee14: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x16ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16ee18: 0xc04110c  jal         func_104430
    ctx->pc = 0x16EE18u;
    SET_GPR_U32(ctx, 31, 0x16EE20u);
    ctx->pc = 0x16EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE18u;
    // 0x16ee1c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16EE18u, 0x16EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE20u;
label_16ee20:
    // 0x16ee20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee24: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16EE24u;
    SET_GPR_U32(ctx, 31, 0x16EE2Cu);
    ctx->pc = 0x16EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE24u;
    // 0x16ee28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16EE24u, 0x16EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE2Cu;
label_16ee2c:
    // 0x16ee2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16ee2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee34: 0xc05af90  jal         func_16BE40
    ctx->pc = 0x16EE34u;
    SET_GPR_U32(ctx, 31, 0x16EE3Cu);
    ctx->pc = 0x16EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE34u;
    // 0x16ee38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE40u, 0x16EE34u, 0x16EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE3Cu;
label_16ee3c:
    // 0x16ee3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ee3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ee40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ee40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ee44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ee44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x16EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE48u;
        // 0x16ee4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EE50u;
}
