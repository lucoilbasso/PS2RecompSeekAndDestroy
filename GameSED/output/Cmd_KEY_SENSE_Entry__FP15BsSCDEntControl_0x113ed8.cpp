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

// Function: Cmd_KEY_SENSE_Entry__FP15BsSCDEntControl
// Address: 0x113ed8 - 0x113f5c
void Cmd_KEY_SENSE_Entry__FP15BsSCDEntControl_0x113ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_SENSE_Entry__FP15BsSCDEntControl_0x113ed8");
#endif

    switch (ctx->pc) {
        case 0x113eecu: goto label_113eec;
        case 0x113f18u: goto label_113f18;
        case 0x113f4cu: goto label_113f4c;
        default: break;
    }

    ctx->pc = 0x113ed8u;

    // 0x113ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113ee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x113ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x113ee4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113EE4u;
    SET_GPR_U32(ctx, 31, 0x113EECu);
    ctx->pc = 0x113EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EE4u;
    // 0x113ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113EE4u, 0x113EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EECu;
label_113eec:
    // 0x113eec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x113eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113ef0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x113ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x113ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ef8: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x113ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x113efc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x113efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x113f00: 0x9610c058  lhu         $s0, -0x3FA8($s0)
    ctx->pc = 0x113f00u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294951000)));
    // 0x113f04: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x113f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113f08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x113F08u;
    {
        const bool branch_taken_0x113f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F08u;
        // 0x113f0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f08) {
            ctx->pc = 0x113F1Cu;
            goto label_113f1c;
        }
    }
    ctx->pc = 0x113F10u;
    // 0x113f10: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113F10u;
    SET_GPR_U32(ctx, 31, 0x113F18u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113F10u, 0x113F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F18u;
label_113f18:
    // 0x113f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113f1c:
    // 0x113f1c: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x113f1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x113f20: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x113f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113f24: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x113f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113f28: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x113f28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x113f2c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x113f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x113f30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x113f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x113f34: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113f3c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x113f3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x113f40: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x113f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x113f44: 0xc04171a  jal         func_105C68
    ctx->pc = 0x113F44u;
    SET_GPR_U32(ctx, 31, 0x113F4Cu);
    ctx->pc = 0x113F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F44u;
    // 0x113f48: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x113F44u, 0x113F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F4Cu;
label_113f4c:
    // 0x113f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113f54: 0x3e00008  jr          $ra
    ctx->pc = 0x113F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F54u;
        // 0x113f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F5Cu;
}
