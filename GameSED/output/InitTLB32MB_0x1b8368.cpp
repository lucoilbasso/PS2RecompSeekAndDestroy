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

// Function: InitTLB32MB
// Address: 0x1b8368 - 0x1b855c
void InitTLB32MB_0x1b8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTLB32MB_0x1b8368");
#endif

    switch (ctx->pc) {
        case 0x1b83b8u: goto label_1b83b8;
        case 0x1b83dcu: goto label_1b83dc;
        case 0x1b83e4u: goto label_1b83e4;
        case 0x1b83f8u: goto label_1b83f8;
        case 0x1b8410u: goto label_1b8410;
        case 0x1b8444u: goto label_1b8444;
        case 0x1b844cu: goto label_1b844c;
        case 0x1b8460u: goto label_1b8460;
        case 0x1b8478u: goto label_1b8478;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84d8u: goto label_1b84d8;
        case 0x1b84f0u: goto label_1b84f0;
        case 0x1b8518u: goto label_1b8518;
        case 0x1b8534u: goto label_1b8534;
        default: break;
    }

    ctx->pc = 0x1b8368u;

    // 0x1b8368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b836c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b836cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b8370: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b8374: 0x2484ad00  addiu       $a0, $a0, -0x5300
    ctx->pc = 0x1b8374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946048));
    // 0x1b8378: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b8378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b837c: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x1b837cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    // 0x1b8380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b8384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b8388: 0x2650bff0  addiu       $s0, $s2, -0x4010
    ctx->pc = 0x1b8388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950896));
    // 0x1b838c: 0x8e45bff0  lw          $a1, -0x4010($s2)
    ctx->pc = 0x1b838cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x24BFF0u));
    // 0x1b8390: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1b8390u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x24BFF4u));
    // 0x1b8394: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1b8394u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x24BFF8u));
    // 0x1b8398: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b8398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b839c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1b839cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b83a0: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1b83a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1b83a4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1b83a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b83a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b83ac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1b83acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1b83b0: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B83B0u;
    SET_GPR_U32(ctx, 31, 0x1B83B8u);
    ctx->pc = 0x1B83B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83B0u;
    // 0x1b83b4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B83B0u, 0x1B83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83B8u;
label_1b83b8:
    // 0x1b83b8: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x1b83b8u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
    // 0x1b83bc: 0x40f  sync.p
    ctx->pc = 0x1b83bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b83c0: 0x8e51bff0  lw          $s1, -0x4010($s2)
    ctx->pc = 0x1b83c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950896)));
    // 0x1b83c4: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1b83c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1b83c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B83C8u;
    {
        const bool branch_taken_0x1b83c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83C8u;
        // 0x1b83cc: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83c8) {
            ctx->pc = 0x1B83E4u;
            goto label_1b83e4;
        }
    }
    ctx->pc = 0x1B83D0u;
    // 0x1b83d0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b83d4: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B83D4u;
    SET_GPR_U32(ctx, 31, 0x1B83DCu);
    ctx->pc = 0x1B83D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83D4u;
    // 0x1b83d8: 0x2484ad38  addiu       $a0, $a0, -0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B83D4u, 0x1B83DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83DCu;
label_1b83dc:
    // 0x1b83dc: 0xc06dc84  jal         func_1B7210
    ctx->pc = 0x1B83DCu;
    SET_GPR_U32(ctx, 31, 0x1B83E4u);
    ctx->pc = 0x1B83E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B83DCu;
    // 0x1b83e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7210u, 0x1B83DCu, 0x1B83E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B83E4u;
label_1b83e4:
    // 0x1b83e4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b83e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b83e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B83E8u;
    {
        const bool branch_taken_0x1b83e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B83E8u;
        // 0x1b83ec: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b83e8) {
            ctx->pc = 0x1B8420u;
            goto label_1b8420;
        }
    }
    ctx->pc = 0x1B83F0u;
    // 0x1b83f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b83f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b83f4: 0x0  nop
    ctx->pc = 0x1b83f4u;
    // NOP
label_1b83f8:
    // 0x1b83f8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1b83f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83fc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1b83fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8400: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1b8400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b8404: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1b8404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b8408: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B8408u;
    SET_GPR_U32(ctx, 31, 0x1B8410u);
    ctx->pc = 0x1B840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8408u;
    // 0x1b840c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B8408u, 0x1B8410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8410u;
label_1b8410:
    // 0x1b8410: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1b8414: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b8414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b8418: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8418u;
    {
        const bool branch_taken_0x1b8418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8418) {
            ctx->pc = 0x1B841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8418u;
            // 0x1b841c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B83F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b83f8;
        }
    }
    ctx->pc = 0x1B8420u;
label_1b8420:
    // 0x1b8420: 0x2650bff0  addiu       $s0, $s2, -0x4010
    ctx->pc = 0x1b8420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950896));
    // 0x1b8424: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8428: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1b8428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1b842c: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1b842cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1b8430: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8430u;
    {
        const bool branch_taken_0x1b8430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8430u;
        // 0x1b8434: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8430) {
            ctx->pc = 0x1B8450u;
            goto label_1b8450;
        }
    }
    ctx->pc = 0x1B8438u;
    // 0x1b8438: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b843c: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B843Cu;
    SET_GPR_U32(ctx, 31, 0x1B8444u);
    ctx->pc = 0x1B8440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B843Cu;
    // 0x1b8440: 0x2484ad50  addiu       $a0, $a0, -0x52B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B843Cu, 0x1B8444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8444u;
label_1b8444:
    // 0x1b8444: 0xc06dc84  jal         func_1B7210
    ctx->pc = 0x1B8444u;
    SET_GPR_U32(ctx, 31, 0x1B844Cu);
    ctx->pc = 0x1B8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8444u;
    // 0x1b8448: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7210u, 0x1B8444u, 0x1B844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B844Cu;
label_1b844c:
    // 0x1b844c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b844cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b8450:
    // 0x1b8450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8450u;
    {
        const bool branch_taken_0x1b8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8450u;
        // 0x1b8454: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8450) {
            ctx->pc = 0x1B8488u;
            goto label_1b8488;
        }
    }
    ctx->pc = 0x1B8458u;
    // 0x1b8458: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b845c: 0x0  nop
    ctx->pc = 0x1b845cu;
    // NOP
label_1b8460:
    // 0x1b8460: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1b8460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8464: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1b8464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8468: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b846c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1b846cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b8470: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B8470u;
    SET_GPR_U32(ctx, 31, 0x1B8478u);
    ctx->pc = 0x1B8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8470u;
    // 0x1b8474: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B8470u, 0x1B8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8478u;
label_1b8478:
    // 0x1b8478: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1b8478u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1b847c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b847cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b8480: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8480u;
    {
        const bool branch_taken_0x1b8480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8480) {
            ctx->pc = 0x1B8484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8480u;
            // 0x1b8484: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8460;
        }
    }
    ctx->pc = 0x1B8488u;
label_1b8488:
    // 0x1b8488: 0x2650bff0  addiu       $s0, $s2, -0x4010
    ctx->pc = 0x1b8488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950896));
    // 0x1b848c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1b848cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
    // 0x1b8490: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1b8490u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
    // 0x1b8494: 0x40f  sync.p
    ctx->pc = 0x1b8494u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b8498: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b849c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B849Cu;
    {
        const bool branch_taken_0x1b849c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b849c) {
            ctx->pc = 0x1B84A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B849Cu;
            // 0x1b84a0: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8504u;
            goto label_1b8504;
        }
    }
    ctx->pc = 0x1B84A4u;
    // 0x1b84a4: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1b84a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1b84a8: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1b84a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1b84ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B84ACu;
    {
        const bool branch_taken_0x1b84ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84ACu;
        // 0x1b84b0: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84ac) {
            ctx->pc = 0x1B84CCu;
            goto label_1b84cc;
        }
    }
    ctx->pc = 0x1B84B4u;
    // 0x1b84b4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b84b8: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B84B8u;
    SET_GPR_U32(ctx, 31, 0x1B84C0u);
    ctx->pc = 0x1B84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84B8u;
    // 0x1b84bc: 0x2484ad68  addiu       $a0, $a0, -0x5298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B84B8u, 0x1B84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84C0u;
label_1b84c0:
    // 0x1b84c0: 0xc06dc84  jal         func_1B7210
    ctx->pc = 0x1B84C0u;
    SET_GPR_U32(ctx, 31, 0x1B84C8u);
    ctx->pc = 0x1B84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C0u;
    // 0x1b84c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7210u, 0x1B84C0u, 0x1B84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84C8u;
label_1b84c8:
    // 0x1b84c8: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b84c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b84cc:
    // 0x1b84cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B84CCu;
    {
        const bool branch_taken_0x1b84cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B84CCu;
        // 0x1b84d0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b84cc) {
            ctx->pc = 0x1B8500u;
            goto label_1b8500;
        }
    }
    ctx->pc = 0x1B84D4u;
    // 0x1b84d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b84d8:
    // 0x1b84d8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1b84d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84dc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1b84dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b84e0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b84e4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1b84e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b84e8: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B84E8u;
    SET_GPR_U32(ctx, 31, 0x1B84F0u);
    ctx->pc = 0x1B84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84E8u;
    // 0x1b84ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B84E8u, 0x1B84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84F0u;
label_1b84f0:
    // 0x1b84f0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1b84f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1b84f4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1b84f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b84f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B84F8u;
    {
        const bool branch_taken_0x1b84f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b84f8) {
            ctx->pc = 0x1B84FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B84F8u;
            // 0x1b84fc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B84D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b84d8;
        }
    }
    ctx->pc = 0x1B8500u;
label_1b8500:
    // 0x1b8500: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1b8500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1b8504:
    // 0x1b8504: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1b8504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1b8508: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8508u;
    {
        const bool branch_taken_0x1b8508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8508u;
        // 0x1b850c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8508) {
            ctx->pc = 0x1B8540u;
            goto label_1b8540;
        }
    }
    ctx->pc = 0x1B8510u;
    // 0x1b8510: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
    // 0x1b8514: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1b8514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1b8518:
    // 0x1b8518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b851c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b851cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b8528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b852c: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B852Cu;
    SET_GPR_U32(ctx, 31, 0x1B8534u);
    ctx->pc = 0x1B8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B852Cu;
    // 0x1b8530: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B852Cu, 0x1B8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8534u;
label_1b8534:
    // 0x1b8534: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1b8534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1b8538: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8538u;
    {
        const bool branch_taken_0x1b8538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8538u;
        // 0x1b853c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8538) {
            ctx->pc = 0x1B8518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8518;
        }
    }
    ctx->pc = 0x1B8540u;
label_1b8540:
    // 0x1b8540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b8540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8544: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1b8544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8548: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b8548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b854c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b854cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8554: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8554u;
        // 0x1b8558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B855Cu;
}
