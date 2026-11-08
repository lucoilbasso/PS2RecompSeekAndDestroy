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

// Function: dpdiv
// Address: 0x1ca2c8 - 0x1ca408
void dpdiv_0x1ca2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x1ca2c8");
#endif

    switch (ctx->pc) {
        case 0x1ca2e8u: goto label_1ca2e8;
        case 0x1ca2f8u: goto label_1ca2f8;
        case 0x1ca3c0u: goto label_1ca3c0;
        case 0x1ca3f8u: goto label_1ca3f8;
        default: break;
    }

    ctx->pc = 0x1ca2c8u;

    // 0x1ca2c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ca2cc: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1ca2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1ca2d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ca2d4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1ca2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1ca2d8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1ca2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1ca2dc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ca2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ca2e0: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA2E0u;
    SET_GPR_U32(ctx, 31, 0x1CA2E8u);
    ctx->pc = 0x1CA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2E0u;
    // 0x1ca2e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA2E0u, 0x1CA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2E8u;
label_1ca2e8:
    // 0x1ca2e8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca2ec: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ca2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ca2f0: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA2F0u;
    SET_GPR_U32(ctx, 31, 0x1CA2F8u);
    ctx->pc = 0x1CA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2F0u;
    // 0x1ca2f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA2F0u, 0x1CA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2F8u;
label_1ca2f8:
    // 0x1ca2f8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ca2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca2fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1ca2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca300: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1ca300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca304: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1CA304u;
    {
        const bool branch_taken_0x1ca304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA304u;
        // 0x1ca308: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca304) {
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA30Cu;
    // 0x1ca30c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ca30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca310: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1ca310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ca314: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CA314u;
    {
        const bool branch_taken_0x1ca314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA314u;
        // 0x1ca318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca314) {
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA31Cu;
    // 0x1ca31c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca320: 0x38c40004  xori        $a0, $a2, 0x4
    ctx->pc = 0x1ca320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x1ca324: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ca324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ca328: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ca328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1ca32c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA32Cu;
    {
        const bool branch_taken_0x1ca32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA32Cu;
        // 0x1ca330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca32c) {
            ctx->pc = 0x1CA340u;
            goto label_1ca340;
        }
    }
    ctx->pc = 0x1CA334u;
    // 0x1ca334: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x1ca334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x1ca338: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA338u;
    {
        const bool branch_taken_0x1ca338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA338u;
        // 0x1ca33c: 0x38a20004  xori        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca338) {
            ctx->pc = 0x1CA358u;
            goto label_1ca358;
        }
    }
    ctx->pc = 0x1CA340u;
label_1ca340:
    // 0x1ca340: 0x54c5002b  bnel        $a2, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CA340u;
    {
        const bool branch_taken_0x1ca340 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ca340) {
            ctx->pc = 0x1CA344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA340u;
            // 0x1ca344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA348u;
    // 0x1ca348: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1ca34c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CA34Cu;
    {
        const bool branch_taken_0x1ca34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA34Cu;
        // 0x1ca350: 0x2444bfe0  addiu       $a0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca34c) {
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA354u;
    // 0x1ca354: 0x0  nop
    ctx->pc = 0x1ca354u;
    // NOP
label_1ca358:
    // 0x1ca358: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA358u;
    {
        const bool branch_taken_0x1ca358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca358) {
            ctx->pc = 0x1CA35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA358u;
            // 0x1ca35c: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA370u;
            goto label_1ca370;
        }
    }
    ctx->pc = 0x1CA360u;
    // 0x1ca360: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ca360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1ca364: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca368: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CA368u;
    {
        const bool branch_taken_0x1ca368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA368u;
        // 0x1ca36c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca368) {
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA370u;
label_1ca370:
    // 0x1ca370: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA370u;
    {
        const bool branch_taken_0x1ca370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca370) {
            ctx->pc = 0x1CA374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA370u;
            // 0x1ca374: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA388u;
            goto label_1ca388;
        }
    }
    ctx->pc = 0x1CA378u;
    // 0x1ca378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca37c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca380: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA380u;
    {
        const bool branch_taken_0x1ca380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA380u;
        // 0x1ca384: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca380) {
            ctx->pc = 0x1CA3F0u;
            goto label_1ca3f0;
        }
    }
    ctx->pc = 0x1CA388u;
label_1ca388:
    // 0x1ca388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ca38c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1ca38cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca390: 0xdfa60030  ld          $a2, 0x30($sp)
    ctx->pc = 0x1ca390u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca394: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca398: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x1ca398u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ca39c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA39Cu;
    {
        const bool branch_taken_0x1ca39c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA39Cu;
        // 0x1ca3a0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca39c) {
            ctx->pc = 0x1CA3B4u;
            goto label_1ca3b4;
        }
    }
    ctx->pc = 0x1CA3A4u;
    // 0x1ca3a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ca3a8: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ca3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ca3ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ca3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ca3b0: 0x86282b  sltu        $a1, $a0, $a2
    ctx->pc = 0x1ca3b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1ca3b4:
    // 0x1ca3b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ca3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ca3b8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x1ca3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x1ca3bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3c0:
    // 0x1ca3c0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA3C0u;
    {
        const bool branch_taken_0x1ca3c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3C0u;
        // 0x1ca3c4: 0x41078  dsll        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3c0) {
            ctx->pc = 0x1CA3D8u;
            goto label_1ca3d8;
        }
    }
    ctx->pc = 0x1CA3C8u;
    // 0x1ca3c8: 0x86202f  dsubu       $a0, $a0, $a2
    ctx->pc = 0x1ca3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    // 0x1ca3cc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1ca3d0: 0x41078  dsll        $v0, $a0, 1
    ctx->pc = 0x1ca3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 1);
    // 0x1ca3d4: 0x0  nop
    ctx->pc = 0x1ca3d4u;
    // NOP
label_1ca3d8:
    // 0x1ca3d8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x1ca3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x1ca3dc: 0x46282b  sltu        $a1, $v0, $a2
    ctx->pc = 0x1ca3dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ca3e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA3E0u;
    {
        const bool branch_taken_0x1ca3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3E0u;
        // 0x1ca3e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3e0) {
            ctx->pc = 0x1CA3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca3c0;
        }
    }
    ctx->pc = 0x1CA3E8u;
    // 0x1ca3e8: 0xfd070010  sd          $a3, 0x10($t0)
    ctx->pc = 0x1ca3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 7));
    // 0x1ca3ec: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1ca3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3f0:
    // 0x1ca3f0: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA3F0u;
    SET_GPR_U32(ctx, 31, 0x1CA3F8u);
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA3F0u, 0x1CA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3F8u;
label_1ca3f8:
    // 0x1ca3f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1ca3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca3fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ca3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca400: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA400u;
        // 0x1ca404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA408u;
}
