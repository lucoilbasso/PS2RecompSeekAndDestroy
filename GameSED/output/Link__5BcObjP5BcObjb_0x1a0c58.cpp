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

// Function: Link__5BcObjP5BcObjb
// Address: 0x1a0c58 - 0x1a0d4c
void Link__5BcObjP5BcObjb_0x1a0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Link__5BcObjP5BcObjb_0x1a0c58");
#endif

    switch (ctx->pc) {
        case 0x1a0ca0u: goto label_1a0ca0;
        case 0x1a0cb8u: goto label_1a0cb8;
        case 0x1a0cc4u: goto label_1a0cc4;
        case 0x1a0cd4u: goto label_1a0cd4;
        case 0x1a0ce4u: goto label_1a0ce4;
        case 0x1a0cf8u: goto label_1a0cf8;
        case 0x1a0d08u: goto label_1a0d08;
        case 0x1a0d24u: goto label_1a0d24;
        default: break;
    }

    ctx->pc = 0x1a0c58u;

    // 0x1a0c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0c5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a0c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a0c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a0c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a0c68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a0c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a0c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a0c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0c78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a0c7c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a0c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a0c80: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a0c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a0c84: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1a0c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a0c88: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A0C88u;
    {
        const bool branch_taken_0x1a0c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C88u;
        // 0x1a0c8c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c88) {
            ctx->pc = 0x1A0CECu;
            goto label_1a0cec;
        }
    }
    ctx->pc = 0x1A0C90u;
    // 0x1a0c90: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x1a0c94: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a0c98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a0c9c: 0x0  nop
    ctx->pc = 0x1a0c9cu;
    // NOP
label_1a0ca0:
    // 0x1a0ca0: 0x14530010  bne         $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0CA0u;
    {
        const bool branch_taken_0x1a0ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA0u;
        // 0x1a0ca4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ca0) {
            ctx->pc = 0x1A0CE4u;
            goto label_1a0ce4;
        }
    }
    ctx->pc = 0x1A0CA8u;
    // 0x1a0ca8: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0CA8u;
    {
        const bool branch_taken_0x1a0ca8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA8u;
        // 0x1a0cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ca8) {
            ctx->pc = 0x1A0D28u;
            goto label_1a0d28;
        }
    }
    ctx->pc = 0x1A0CB0u;
    // 0x1a0cb0: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x1A0CB0u;
    SET_GPR_U32(ctx, 31, 0x1A0CB8u);
    ctx->pc = 0x1A0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CB0u;
    // 0x1a0cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x1A0CB0u, 0x1A0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CB8u;
label_1a0cb8:
    // 0x1a0cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cbc: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x1A0CBCu;
    SET_GPR_U32(ctx, 31, 0x1A0CC4u);
    ctx->pc = 0x1A0CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CBCu;
    // 0x1a0cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x1A0CBCu, 0x1A0CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CC4u;
label_1a0cc4:
    // 0x1a0cc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a0cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cc8: 0x26c48850  addiu       $a0, $s6, -0x77B0
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936656));
    // 0x1a0ccc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A0CCCu;
    SET_GPR_U32(ctx, 31, 0x1A0CD4u);
    ctx->pc = 0x1A0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CCCu;
    // 0x1a0cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A0CCCu, 0x1A0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CD4u;
label_1a0cd4:
    // 0x1a0cd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cd8: 0x26a58868  addiu       $a1, $s5, -0x7798
    ctx->pc = 0x1a0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936680));
    // 0x1a0cdc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0CDCu;
    SET_GPR_U32(ctx, 31, 0x1A0CE4u);
    ctx->pc = 0x1A0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CDCu;
    // 0x1a0ce0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0CDCu, 0x1A0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CE4u;
label_1a0ce4:
    // 0x1a0ce4: 0x5620ffee  bnel        $s1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A0CE4u;
    {
        const bool branch_taken_0x1a0ce4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ce4) {
            ctx->pc = 0x1A0CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0CE4u;
            // 0x1a0ce8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0ca0;
        }
    }
    ctx->pc = 0x1A0CECu;
label_1a0cec:
    // 0x1a0cec: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1a0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a0cf0: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1A0CF0u;
    SET_GPR_U32(ctx, 31, 0x1A0CF8u);
    ctx->pc = 0x1A0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CF0u;
    // 0x1a0cf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A0CF0u, 0x1A0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CF8u;
label_1a0cf8:
    // 0x1a0cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0CF8u;
    {
        const bool branch_taken_0x1a0cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CF8u;
        // 0x1a0cfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cf8) {
            ctx->pc = 0x1A0D10u;
            goto label_1a0d10;
        }
    }
    ctx->pc = 0x1A0D00u;
    // 0x1a0d00: 0xc06837c  jal         func_1A0DF0
    ctx->pc = 0x1A0D00u;
    SET_GPR_U32(ctx, 31, 0x1A0D08u);
    ctx->pc = 0x1A0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D00u;
    // 0x1a0d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0DF0u, 0x1A0D00u, 0x1A0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D08u;
label_1a0d08:
    // 0x1a0d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0D08u;
    {
        const bool branch_taken_0x1a0d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D08u;
        // 0x1a0d0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d08) {
            ctx->pc = 0x1A0D28u;
            goto label_1a0d28;
        }
    }
    ctx->pc = 0x1A0D10u;
label_1a0d10:
    // 0x1a0d10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d18: 0x24a58868  addiu       $a1, $a1, -0x7798
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936680));
    // 0x1a0d1c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D24u);
    ctx->pc = 0x1A0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D1Cu;
    // 0x1a0d20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0D1Cu, 0x1A0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D24u;
label_1a0d24:
    // 0x1a0d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0d28:
    // 0x1a0d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0d2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a0d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0d34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a0d34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0d38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a0d38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0d3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a0d3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0d40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a0d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D44u;
        // 0x1a0d48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D4Cu;
}
