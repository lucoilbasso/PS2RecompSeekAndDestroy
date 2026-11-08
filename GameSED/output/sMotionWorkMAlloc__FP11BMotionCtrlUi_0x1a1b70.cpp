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

// Function: sMotionWorkMAlloc__FP11BMotionCtrlUi
// Address: 0x1a1b70 - 0x1a1c40
void sMotionWorkMAlloc__FP11BMotionCtrlUi_0x1a1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sMotionWorkMAlloc__FP11BMotionCtrlUi_0x1a1b70");
#endif

    switch (ctx->pc) {
        case 0x1a1bdcu: goto label_1a1bdc;
        case 0x1a1c00u: goto label_1a1c00;
        case 0x1a1c20u: goto label_1a1c20;
        default: break;
    }

    ctx->pc = 0x1a1b70u;

    // 0x1a1b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a1b84: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A1B84u;
    {
        const bool branch_taken_0x1a1b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B84u;
        // 0x1a1b88: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b84) {
            ctx->pc = 0x1A1C28u;
            goto label_1a1c28;
        }
    }
    ctx->pc = 0x1A1B8Cu;
    // 0x1a1b8c: 0x2ca2004d  sltiu       $v0, $a1, 0x4D
    ctx->pc = 0x1a1b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x1a1b90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1B90u;
    {
        const bool branch_taken_0x1a1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b90) {
            ctx->pc = 0x1A1B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B90u;
            // 0x1a1b94: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BB0u;
            goto label_1a1bb0;
        }
    }
    ctx->pc = 0x1A1B98u;
    // 0x1a1b98: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1a1b98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1b9c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1a1ba0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1a1ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1a1ba4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A1BA4u;
    {
        const bool branch_taken_0x1a1ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BA4u;
        // 0x1a1ba8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ba4) {
            ctx->pc = 0x1A1C28u;
            goto label_1a1c28;
        }
    }
    ctx->pc = 0x1A1BACu;
    // 0x1a1bac: 0x0  nop
    ctx->pc = 0x1a1bacu;
    // NOP
label_1a1bb0:
    // 0x1a1bb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a1bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bb4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1bb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bbc: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x1a1bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x1a1bc0: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1BC0u;
    {
        const bool branch_taken_0x1a1bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BC0u;
        // 0x1a1bc4: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bc0) {
            ctx->pc = 0x1A1C24u;
            goto label_1a1c24;
        }
    }
    ctx->pc = 0x1A1BC8u;
    // 0x1a1bc8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1BC8u;
    {
        const bool branch_taken_0x1a1bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BC8u;
        // 0x1a1bcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bc8) {
            ctx->pc = 0x1A1BD4u;
            goto label_1a1bd4;
        }
    }
    ctx->pc = 0x1A1BD0u;
    // 0x1a1bd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1bd4:
    // 0x1a1bd4: 0xc0680b6  jal         func_1A02D8
    ctx->pc = 0x1A1BD4u;
    SET_GPR_U32(ctx, 31, 0x1A1BDCu);
    ctx->pc = 0x1A1BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1BD4u;
    // 0x1a1bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02D8u, 0x1A1BD4u, 0x1A1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BDCu;
label_1a1bdc:
    // 0x1a1bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1be0: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1BE0u;
    {
        const bool branch_taken_0x1a1be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BE0u;
        // 0x1a1be4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1be0) {
            ctx->pc = 0x1A1C24u;
            goto label_1a1c24;
        }
    }
    ctx->pc = 0x1A1BE8u;
    // 0x1a1be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bec: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1BECu;
    {
        const bool branch_taken_0x1a1bec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BECu;
        // 0x1a1bf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bec) {
            ctx->pc = 0x1A1BF8u;
            goto label_1a1bf8;
        }
    }
    ctx->pc = 0x1A1BF4u;
    // 0x1a1bf4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1bf8:
    // 0x1a1bf8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A1BF8u;
    SET_GPR_U32(ctx, 31, 0x1A1C00u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A1BF8u, 0x1A1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C00u;
label_1a1c00:
    // 0x1a1c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c04: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C04u;
    {
        const bool branch_taken_0x1a1c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C04u;
        // 0x1a1c08: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c04) {
            ctx->pc = 0x1A1C24u;
            goto label_1a1c24;
        }
    }
    ctx->pc = 0x1A1C0Cu;
    // 0x1a1c0c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a1c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a1c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a1c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c14: 0x24a59150  addiu       $a1, $a1, -0x6EB0
    ctx->pc = 0x1a1c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938960));
    // 0x1a1c18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A1C18u;
    SET_GPR_U32(ctx, 31, 0x1A1C20u);
    ctx->pc = 0x1A1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C18u;
    // 0x1a1c1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1C18u, 0x1A1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C20u;
label_1a1c20:
    // 0x1a1c20: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1a1c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c24:
    // 0x1a1c24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c28:
    // 0x1a1c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1c30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a1c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C38u;
        // 0x1a1c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C40u;
}
