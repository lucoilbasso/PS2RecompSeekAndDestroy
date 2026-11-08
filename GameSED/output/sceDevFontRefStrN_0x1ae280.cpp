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

// Function: sceDevFontRefStrN
// Address: 0x1ae280 - 0x1ae3dc
void sceDevFontRefStrN_0x1ae280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontRefStrN_0x1ae280");
#endif

    switch (ctx->pc) {
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae380u: goto label_1ae380;
        default: break;
    }

    ctx->pc = 0x1ae280u;

    // 0x1ae280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ae280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ae284: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1ae284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1ae288: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1ae288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1ae28c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae290: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ae290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ae294: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1ae294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae298: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ae298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ae29c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ae2a0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ae2a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ae2ac: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1ae2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2b0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ae2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1ae2b4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1ae2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2b8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ae2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1ae2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1ae2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1ae2c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ae2c8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ae2cc: 0x8e560008  lw          $s6, 0x8($s2)
    ctx->pc = 0x1ae2ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ae2d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ae2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ae2d4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ae2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ae2d8: 0xd64018  mult        $t0, $a2, $s6
    ctx->pc = 0x1ae2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ae2dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ae2e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2e4: 0xe25018  mult        $t2, $a3, $v0
    ctx->pc = 0x1ae2e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1ae2e8: 0x8e490004  lw          $t1, 0x4($s2)
    ctx->pc = 0x1ae2e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ae2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ae2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2f0: 0x689821  addu        $s3, $v1, $t0
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1ae2f4: 0xc06ba62  jal         func_1AE988
    ctx->pc = 0x1AE2F4u;
    SET_GPR_U32(ctx, 31, 0x1AE2FCu);
    ctx->pc = 0x1AE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2F4u;
    // 0x1ae2f8: 0x12aa021  addu        $s4, $t1, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE988u, 0x1AE2F4u, 0x1AE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2FCu;
label_1ae2fc:
    // 0x1ae2fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ae2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae304: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AE304u;
    {
        const bool branch_taken_0x1ae304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE304u;
        // 0x1ae308: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae304) {
            ctx->pc = 0x1AE3ACu;
            goto label_1ae3ac;
        }
    }
    ctx->pc = 0x1AE30Cu;
    // 0x1ae30c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1ae30cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae310: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1ae310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1ae314: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ae314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae318: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AE318u;
    {
        const bool branch_taken_0x1ae318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE318u;
        // 0x1ae31c: 0x21a02  srl         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae318) {
            ctx->pc = 0x1AE3A8u;
            goto label_1ae3a8;
        }
    }
    ctx->pc = 0x1AE320u;
    // 0x1ae320: 0x14a83c  dsll32      $s5, $s4, 0
    ctx->pc = 0x1ae320u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ae324: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x1ae324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1ae328:
    // 0x1ae328: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ae328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ae32c: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1ae330: 0x24c39a38  addiu       $v1, $a2, -0x65C8
    ctx->pc = 0x1ae330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941240));
    // 0x1ae334: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ae338: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ae338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ae33c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ae33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ae340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae344: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ae344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ae348: 0x151c3a  dsrl        $v1, $s5, 16
    ctx->pc = 0x1ae348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> 16);
    // 0x1ae34c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1ae34cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae350: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ae350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae354: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae358: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae35c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ae35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ae360: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ae360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae364: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1ae364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ae368: 0x8e490014  lw          $t1, 0x14($s2)
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1ae36c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ae36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae370: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ae370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae374: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x1ae374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x1ae378: 0xc06b83e  jal         func_1AE0F8
    ctx->pc = 0x1AE378u;
    SET_GPR_U32(ctx, 31, 0x1AE380u);
    ctx->pc = 0x1AE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE378u;
    // 0x1ae37c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE0F8u, 0x1AE378u, 0x1AE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE380u;
label_1ae380:
    // 0x1ae380: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ae380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ae384: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ae388: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae38c: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE38Cu;
    {
        const bool branch_taken_0x1ae38c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE38Cu;
        // 0x1ae390: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae38c) {
            ctx->pc = 0x1AE3ACu;
            goto label_1ae3ac;
        }
    }
    ctx->pc = 0x1AE394u;
    // 0x1ae394: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1ae394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae398: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1ae39c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ae39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae3a0: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1AE3A0u;
    {
        const bool branch_taken_0x1ae3a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3A0u;
        // 0x1ae3a4: 0x21a02  srl         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3a0) {
            ctx->pc = 0x1AE328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae328;
        }
    }
    ctx->pc = 0x1AE3A8u;
label_1ae3a8:
    // 0x1ae3a8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1ae3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3ac:
    // 0x1ae3ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ae3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ae3b0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ae3b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae3b4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1ae3b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae3b8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae3bc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae3bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae3c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae3c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae3c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae3cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae3d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3D4u;
        // 0x1ae3d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3DCu;
}
