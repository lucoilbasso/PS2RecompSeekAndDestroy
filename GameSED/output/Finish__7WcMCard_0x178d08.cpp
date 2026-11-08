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

// Function: Finish__7WcMCard
// Address: 0x178d08 - 0x178de4
void Finish__7WcMCard_0x178d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcMCard_0x178d08");
#endif

    switch (ctx->pc) {
        case 0x178d2cu: goto label_178d2c;
        case 0x178d48u: goto label_178d48;
        case 0x178d94u: goto label_178d94;
        case 0x178db8u: goto label_178db8;
        case 0x178dc0u: goto label_178dc0;
        case 0x178dc8u: goto label_178dc8;
        case 0x178dd0u: goto label_178dd0;
        default: break;
    }

    ctx->pc = 0x178d08u;

    // 0x178d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178d0c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x178d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x178d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d18: 0x8c44d184  lw          $a0, -0x2E7C($v0)
    ctx->pc = 0x178d18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x26D184u));
    // 0x178d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178d24: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x178D24u;
    SET_GPR_U32(ctx, 31, 0x178D2Cu);
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x178D24u, 0x178D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D2Cu;
label_178d2c:
    // 0x178d2c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178d30: 0x26244010  addiu       $a0, $s1, 0x4010
    ctx->pc = 0x178d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16400));
    // 0x178d34: 0x24630158  addiu       $v1, $v1, 0x158
    ctx->pc = 0x178d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 344));
    // 0x178d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178d3c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x178D3Cu;
    {
        const bool branch_taken_0x178d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D3Cu;
        // 0x178d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d3c) {
            ctx->pc = 0x178D8Cu;
            goto label_178d8c;
        }
    }
    ctx->pc = 0x178D44u;
    // 0x178d44: 0x0  nop
    ctx->pc = 0x178d44u;
    // NOP
label_178d48:
    // 0x178d48: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178D48u;
    {
        const bool branch_taken_0x178d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x178d48) {
            ctx->pc = 0x178D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D48u;
            // 0x178d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D70u;
            goto label_178d70;
        }
    }
    ctx->pc = 0x178D50u;
    // 0x178d50: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D50u;
    {
        const bool branch_taken_0x178d50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D50u;
        // 0x178d54: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d50) {
            ctx->pc = 0x178D60u;
            goto label_178d60;
        }
    }
    ctx->pc = 0x178D58u;
    // 0x178d58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178D58u;
    {
        const bool branch_taken_0x178d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D58u;
        // 0x178d5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d58) {
            ctx->pc = 0x178D64u;
            goto label_178d64;
        }
    }
    ctx->pc = 0x178D60u;
label_178d60:
    // 0x178d60: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x178d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_178d64:
    // 0x178d64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178D64u;
    {
        const bool branch_taken_0x178d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D64u;
        // 0x178d68: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d64) {
            ctx->pc = 0x178D88u;
            goto label_178d88;
        }
    }
    ctx->pc = 0x178D6Cu;
    // 0x178d6c: 0x0  nop
    ctx->pc = 0x178d6cu;
    // NOP
label_178d70:
    // 0x178d70: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x178d74: 0x0  nop
    ctx->pc = 0x178d74u;
    // NOP
    // 0x178d78: 0x0  nop
    ctx->pc = 0x178d78u;
    // NOP
    // 0x178d7c: 0x0  nop
    ctx->pc = 0x178d7cu;
    // NOP
    // 0x178d80: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x178D80u;
    {
        const bool branch_taken_0x178d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178d80) {
            ctx->pc = 0x178D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178d48;
        }
    }
    ctx->pc = 0x178D88u;
label_178d88:
    // 0x178d88: 0x26244010  addiu       $a0, $s1, 0x4010
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16400));
label_178d8c:
    // 0x178d8c: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x178D8Cu;
    SET_GPR_U32(ctx, 31, 0x178D94u);
    ctx->pc = 0x178D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D8Cu;
    // 0x178d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x178D8Cu, 0x178D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D94u;
label_178d94:
    // 0x178d94: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x178d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x178d98: 0x2470d180  addiu       $s0, $v1, -0x2E80
    ctx->pc = 0x178d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955392));
    // 0x178d9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26D180u));
    // 0x178da0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178da4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178DA4u;
    {
        const bool branch_taken_0x178da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DA4u;
        // 0x178da8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178da4) {
            ctx->pc = 0x178DB8u;
            goto label_178db8;
        }
    }
    ctx->pc = 0x178DACu;
    // 0x178dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178db0: 0xc05e7f8  jal         func_179FE0
    ctx->pc = 0x178DB0u;
    SET_GPR_U32(ctx, 31, 0x178DB8u);
    ctx->pc = 0x178DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DB0u;
    // 0x178db4: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FE0u, 0x178DB0u, 0x178DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DB8u;
label_178db8:
    // 0x178db8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x178DB8u;
    SET_GPR_U32(ctx, 31, 0x178DC0u);
    ctx->pc = 0x178DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DB8u;
    // 0x178dbc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178DB8u, 0x178DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DC0u;
label_178dc0:
    // 0x178dc0: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x178DC0u;
    SET_GPR_U32(ctx, 31, 0x178DC8u);
    ctx->pc = 0x178DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DC0u;
    // 0x178dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x178DC0u, 0x178DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DC8u;
label_178dc8:
    // 0x178dc8: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x178DC8u;
    SET_GPR_U32(ctx, 31, 0x178DD0u);
    ctx->pc = 0x178DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DC8u;
    // 0x178dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x178DC8u, 0x178DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DD0u;
label_178dd0:
    // 0x178dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x178DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DDCu;
        // 0x178de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DE4u;
}
