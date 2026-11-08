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

// Function: MakeMIMeDifference__9WMIMeCtrlP8WcObjectP13WModelPackageT2
// Address: 0x193c00 - 0x193d84
void MakeMIMeDifference__9WMIMeCtrlP8WcObjectP13WModelPackageT2_0x193c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMIMeDifference__9WMIMeCtrlP8WcObjectP13WModelPackageT2_0x193c00");
#endif

    switch (ctx->pc) {
        case 0x193c48u: goto label_193c48;
        case 0x193c74u: goto label_193c74;
        case 0x193cb0u: goto label_193cb0;
        case 0x193cd4u: goto label_193cd4;
        case 0x193cf0u: goto label_193cf0;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d30u: goto label_193d30;
        default: break;
    }

    ctx->pc = 0x193c00u;

    // 0x193c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193c08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193c10: 0x26110160  addiu       $s1, $s0, 0x160
    ctx->pc = 0x193c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x193c14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193c18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x193c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x193c20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x193c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x193c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x193c28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x193c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c2c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x193c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x193c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c34: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x193c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x193c38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193c3c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193c40: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x193C40u;
    SET_GPR_U32(ctx, 31, 0x193C48u);
    ctx->pc = 0x193C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C40u;
    // 0x193c44: 0xae540004  sw          $s4, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x193C40u, 0x193C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C48u;
label_193c48:
    // 0x193c48: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x193c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x193c4c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x193c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x193c50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x193c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x193c54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x193c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x193c58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x193c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x193c5c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x193c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x193c60: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x193C60u;
    {
        const bool branch_taken_0x193c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C60u;
        // 0x193c64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c60) {
            ctx->pc = 0x193C74u;
            goto label_193c74;
        }
    }
    ctx->pc = 0x193C68u;
    // 0x193c68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x193c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c6c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193C6Cu;
    SET_GPR_U32(ctx, 31, 0x193C74u);
    ctx->pc = 0x193C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C6Cu;
    // 0x193c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193C6Cu, 0x193C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C74u;
label_193c74:
    // 0x193c74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193c78: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193c7c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x193c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x193c80: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x193c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x193c84: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x193c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x193c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193c8c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x193c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x193c90: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x193c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x193c94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x193c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193c98: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193C98u;
    {
        const bool branch_taken_0x193c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x193C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C98u;
        // 0x193c9c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c98) {
            ctx->pc = 0x193CB0u;
            goto label_193cb0;
        }
    }
    ctx->pc = 0x193CA0u;
    // 0x193ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ca4: 0x24a58220  addiu       $a1, $a1, -0x7DE0
    ctx->pc = 0x193ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    // 0x193ca8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193CA8u;
    SET_GPR_U32(ctx, 31, 0x193CB0u);
    ctx->pc = 0x193CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CA8u;
    // 0x193cac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193CA8u, 0x193CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CB0u;
label_193cb0:
    // 0x193cb0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x193cb4: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x193cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x193cb8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x193CB8u;
    {
        const bool branch_taken_0x193cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193cb8) {
            ctx->pc = 0x193CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193CB8u;
            // 0x193cbc: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193CD8u;
            goto label_193cd8;
        }
    }
    ctx->pc = 0x193CC0u;
    // 0x193cc0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cc8: 0x24a58220  addiu       $a1, $a1, -0x7DE0
    ctx->pc = 0x193cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    // 0x193ccc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193CCCu;
    SET_GPR_U32(ctx, 31, 0x193CD4u);
    ctx->pc = 0x193CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CCCu;
    // 0x193cd0: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193CCCu, 0x193CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CD4u;
label_193cd4:
    // 0x193cd4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x193cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_193cd8:
    // 0x193cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cdc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193CDCu;
    {
        const bool branch_taken_0x193cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CDCu;
        // 0x193ce0: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cdc) {
            ctx->pc = 0x193CE8u;
            goto label_193ce8;
        }
    }
    ctx->pc = 0x193CE4u;
    // 0x193ce4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193ce8:
    // 0x193ce8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x193CE8u;
    SET_GPR_U32(ctx, 31, 0x193CF0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x193CE8u, 0x193CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CF0u;
label_193cf0:
    // 0x193cf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193CF0u;
    {
        const bool branch_taken_0x193cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CF0u;
        // 0x193cf4: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cf0) {
            ctx->pc = 0x193D0Cu;
            goto label_193d0c;
        }
    }
    ctx->pc = 0x193CF8u;
    // 0x193cf8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d00: 0x24a58238  addiu       $a1, $a1, -0x7DC8
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935096));
    // 0x193d04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193D04u;
    SET_GPR_U32(ctx, 31, 0x193D0Cu);
    ctx->pc = 0x193D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D04u;
    // 0x193d08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193D04u, 0x193D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D0Cu;
label_193d0c:
    // 0x193d0c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x193d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193d10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d14: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x193d18: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x193d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x193d1c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x193d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x193d20: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x193D20u;
    {
        const bool branch_taken_0x193d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D20u;
        // 0x193d24: 0x8c670020  lw          $a3, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d20) {
            ctx->pc = 0x193D64u;
            goto label_193d64;
        }
    }
    ctx->pc = 0x193D28u;
    // 0x193d28: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x193d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x193d2c: 0x0  nop
    ctx->pc = 0x193d2cu;
    // NOP
label_193d30:
    // 0x193d30: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x193d34: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x193d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x193d38: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x193d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193d40: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x193d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193d44: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x193d44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193d48: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x193d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193d4c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x193d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193d50: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x193d54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193d58: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x193d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193d5c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x193D5Cu;
    {
        const bool branch_taken_0x193d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d5c) {
            ctx->pc = 0x193D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193D5Cu;
            // 0x193d60: 0x8e430018  lw          $v1, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193d30;
        }
    }
    ctx->pc = 0x193D64u;
label_193d64:
    // 0x193d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193d74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193d78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x193d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x193D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D7Cu;
        // 0x193d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193D84u;
}
