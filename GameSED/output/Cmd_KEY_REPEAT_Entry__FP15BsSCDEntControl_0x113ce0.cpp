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

// Function: Cmd_KEY_REPEAT_Entry__FP15BsSCDEntControl
// Address: 0x113ce0 - 0x113dc8
void Cmd_KEY_REPEAT_Entry__FP15BsSCDEntControl_0x113ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_REPEAT_Entry__FP15BsSCDEntControl_0x113ce0");
#endif

    switch (ctx->pc) {
        case 0x113cf8u: goto label_113cf8;
        case 0x113d98u: goto label_113d98;
        case 0x113db8u: goto label_113db8;
        default: break;
    }

    ctx->pc = 0x113ce0u;

    // 0x113ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113ce4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x113ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113cec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x113cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x113cf0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113CF0u;
    SET_GPR_U32(ctx, 31, 0x113CF8u);
    ctx->pc = 0x113CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CF0u;
    // 0x113cf4: 0x8c500020  lw          $s0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113CF0u, 0x113CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CF8u;
label_113cf8:
    // 0x113cf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cfc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x113cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x113d00: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x113D00u;
    {
        const bool branch_taken_0x113d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113d00) {
            ctx->pc = 0x113D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113D00u;
            // 0x113d04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113DBCu;
            goto label_113dbc;
        }
    }
    ctx->pc = 0x113D08u;
    // 0x113d08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x113d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113d0c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x113d10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113d14: 0x8c634290  lw          $v1, 0x4290($v1)
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17040)));
    // 0x113d18: 0x600008  jr          $v1
    ctx->pc = 0x113D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x113D20u: goto label_113d20;
            case 0x113D38u: goto label_113d38;
            case 0x113D50u: goto label_113d50;
            case 0x113D68u: goto label_113d68;
            case 0x113DB0u: goto label_113db0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x113D20u;
label_113d20:
    // 0x113d20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113d24: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x113d28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x113d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x113d2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x113D2Cu;
    {
        const bool branch_taken_0x113d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D2Cu;
        // 0x113d30: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d2c) {
            ctx->pc = 0x113DB8u;
            goto label_113db8;
        }
    }
    ctx->pc = 0x113D34u;
    // 0x113d34: 0x0  nop
    ctx->pc = 0x113d34u;
    // NOP
label_113d38:
    // 0x113d38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113d3c: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x113d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x113d40: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x113d40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x113d44: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x113d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x113d48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x113D48u;
    {
        const bool branch_taken_0x113d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D48u;
        // 0x113d4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d48) {
            ctx->pc = 0x113DB8u;
            goto label_113db8;
        }
    }
    ctx->pc = 0x113D50u;
label_113d50:
    // 0x113d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x113d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113d58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113d5c: 0x8044f04  j           func_113C10
    ctx->pc = 0x113D5Cu;
    ctx->pc = 0x113D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D5Cu;
    // 0x113d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C10u;
    ApRscKeyPushModeWindow__Fb_0x113c10(rdram, ctx, runtime); return;
    ctx->pc = 0x113D64u;
    // 0x113d64: 0x0  nop
    ctx->pc = 0x113d64u;
    // NOP
label_113d68:
    // 0x113d68: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x113d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113d6c: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x113d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113d70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x113D70u;
    {
        const bool branch_taken_0x113d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D70u;
        // 0x113d74: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d70) {
            ctx->pc = 0x113D98u;
            goto label_113d98;
        }
    }
    ctx->pc = 0x113D78u;
    // 0x113d78: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x113d7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x113d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d80: 0xaf829124  sw          $v0, -0x6EDC($gp)
    ctx->pc = 0x113d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
    // 0x113d84: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x113d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x113d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x113d8c: 0x8c630730  lw          $v1, 0x730($v1)
    ctx->pc = 0x113d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x113d90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x113D90u;
    {
        const bool branch_taken_0x113d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D90u;
        // 0x113d94: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d90) {
            ctx->pc = 0x113DB8u;
            goto label_113db8;
        }
    }
    ctx->pc = 0x113D98u;
label_113d98:
    // 0x113d98: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x113d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x113d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113da0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113da4: 0x24844268  addiu       $a0, $a0, 0x4268
    ctx->pc = 0x113da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17000));
    // 0x113da8: 0x80740b2  j           func_1D02C8
    ctx->pc = 0x113DA8u;
    ctx->pc = 0x113DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DA8u;
    // 0x113dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    printf_0x1d02c8(rdram, ctx, runtime); return;
    ctx->pc = 0x113DB0u;
label_113db0:
    // 0x113db0: 0xc044f04  jal         func_113C10
    ctx->pc = 0x113DB0u;
    SET_GPR_U32(ctx, 31, 0x113DB8u);
    ctx->pc = 0x113DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DB0u;
    // 0x113db4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C10u, 0x113DB0u, 0x113DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DB8u;
label_113db8:
    // 0x113db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113dbc:
    // 0x113dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x113DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DC0u;
        // 0x113dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113DC8u;
}
