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

// Function: _pow5mult
// Address: 0x1d59b8 - 0x1d5ab4
void _pow5mult_0x1d59b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pow5mult_0x1d59b8");
#endif

    switch (ctx->pc) {
        case 0x1d59fcu: goto label_1d59fc;
        case 0x1d5a24u: goto label_1d5a24;
        case 0x1d5a38u: goto label_1d5a38;
        case 0x1d5a50u: goto label_1d5a50;
        case 0x1d5a7cu: goto label_1d5a7c;
        case 0x1d5a8cu: goto label_1d5a8c;
        default: break;
    }

    ctx->pc = 0x1d59b8u;

    // 0x1d59b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d59b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d59bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d59bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d59c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d59c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59c4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x1d59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x1d59c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d59cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d59d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d59d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d59d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d59d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D59DCu;
    {
        const bool branch_taken_0x1d59dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59DCu;
        // 0x1d59e0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59dc) {
            ctx->pc = 0x1D5A00u;
            goto label_1d5a00;
        }
    }
    ctx->pc = 0x1D59E4u;
    // 0x1d59e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d59e8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1d59ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d59f0: 0x8cc6c66c  lw          $a2, -0x3994($a2)
    ctx->pc = 0x1d59f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952556)));
    // 0x1d59f4: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D59F4u;
    SET_GPR_U32(ctx, 31, 0x1D59FCu);
    ctx->pc = 0x1D59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D59F4u;
    // 0x1d59f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D59F4u, 0x1D59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59FCu;
label_1d59fc:
    // 0x1d59fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d59fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a00:
    // 0x1d5a00: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x1d5a04: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D5A04u;
    {
        const bool branch_taken_0x1d5a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A04u;
        // 0x1d5a08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a04) {
            ctx->pc = 0x1D5A98u;
            goto label_1d5a98;
        }
    }
    ctx->pc = 0x1D5A0Cu;
    // 0x1d5a0c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1d5a10: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5A10u;
    {
        const bool branch_taken_0x1d5a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A10u;
        // 0x1d5a14: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a10) {
            ctx->pc = 0x1D5A64u;
            goto label_1d5a64;
        }
    }
    ctx->pc = 0x1D5A18u;
    // 0x1d5a18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a1c: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1D5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A24u);
    ctx->pc = 0x1D5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A1Cu;
    // 0x1d5a20: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1D5A1Cu, 0x1D5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A24u;
label_1d5a24:
    // 0x1d5a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a28: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x1d5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x1d5a2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D5A2Cu;
    {
        const bool branch_taken_0x1d5a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A2Cu;
        // 0x1d5a30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a2c) {
            ctx->pc = 0x1D5A60u;
            goto label_1d5a60;
        }
    }
    ctx->pc = 0x1D5A34u;
    // 0x1d5a34: 0x0  nop
    ctx->pc = 0x1d5a34u;
    // NOP
label_1d5a38:
    // 0x1d5a38: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5A38u;
    {
        const bool branch_taken_0x1d5a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a38) {
            ctx->pc = 0x1D5A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5A38u;
            // 0x1d5a3c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A60u;
            goto label_1d5a60;
        }
    }
    ctx->pc = 0x1D5A40u;
    // 0x1d5a40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a48: 0xc0755ea  jal         func_1D57A8
    ctx->pc = 0x1D5A48u;
    SET_GPR_U32(ctx, 31, 0x1D5A50u);
    ctx->pc = 0x1D5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A48u;
    // 0x1d5a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57A8u, 0x1D5A48u, 0x1D5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A50u;
label_1d5a50:
    // 0x1d5a50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5a58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d5a5c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d5a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a60:
    // 0x1d5a60: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1d5a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1d5a64:
    // 0x1d5a64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5A64u;
    {
        const bool branch_taken_0x1d5a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A64u;
        // 0x1d5a68: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a64) {
            ctx->pc = 0x1D5A8Cu;
            goto label_1d5a8c;
        }
    }
    ctx->pc = 0x1D5A6Cu;
    // 0x1d5a6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a74: 0xc0755ea  jal         func_1D57A8
    ctx->pc = 0x1D5A74u;
    SET_GPR_U32(ctx, 31, 0x1D5A7Cu);
    ctx->pc = 0x1D5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A74u;
    // 0x1d5a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57A8u, 0x1D5A74u, 0x1D5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A7Cu;
label_1d5a7c:
    // 0x1d5a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a84: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D5A84u;
    SET_GPR_U32(ctx, 31, 0x1D5A8Cu);
    ctx->pc = 0x1D5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A84u;
    // 0x1d5a88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D5A84u, 0x1D5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A8Cu;
label_1d5a8c:
    // 0x1d5a8c: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D5A8Cu;
    {
        const bool branch_taken_0x1d5a8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a8c) {
            ctx->pc = 0x1D5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5A8Cu;
            // 0x1d5a90: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5a38;
        }
    }
    ctx->pc = 0x1D5A94u;
    // 0x1d5a94: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d5a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a98:
    // 0x1d5a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5aa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AACu;
        // 0x1d5ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5AB4u;
}
