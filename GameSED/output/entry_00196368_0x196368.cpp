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

// Function: entry_00196368
// Address: 0x196368 - 0x196478
void entry_00196368_0x196368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196368_0x196368");
#endif

    switch (ctx->pc) {
        case 0x196380u: goto label_196380;
        case 0x196388u: goto label_196388;
        case 0x196390u: goto label_196390;
        case 0x1963a8u: goto label_1963a8;
        case 0x196404u: goto label_196404;
        case 0x196410u: goto label_196410;
        default: break;
    }

    ctx->pc = 0x196368u;

    // 0x196368: 0x171180  sll         $v0, $s7, 6
    ctx->pc = 0x196368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x19636c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196370: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x196374: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x196374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196378: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x196378u;
    SET_GPR_U32(ctx, 31, 0x196380u);
    ctx->pc = 0x19637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196378u;
    // 0x19637c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x196378u, 0x196380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196380u;
label_196380:
    // 0x196380: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x196380u;
    SET_GPR_U32(ctx, 31, 0x196388u);
    ctx->pc = 0x196384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196380u;
    // 0x196384: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x196380u, 0x196388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196388u;
label_196388:
    // 0x196388: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x196388u;
    SET_GPR_U32(ctx, 31, 0x196390u);
    ctx->pc = 0x19638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196388u;
    // 0x19638c: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x196388u, 0x196390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196390u;
label_196390:
    // 0x196390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196394: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x196398: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
    // 0x19639c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963a0: 0xc061258  jal         func_184960
    ctx->pc = 0x1963A0u;
    SET_GPR_U32(ctx, 31, 0x1963A8u);
    ctx->pc = 0x1963A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963A0u;
    // 0x1963a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1963A0u, 0x1963A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963A8u;
label_1963a8:
    // 0x1963a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1963ac: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x1963b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1963b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1963b4: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x1963b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
    // 0x1963b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1963bc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1963bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1963c0: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1963c4: 0x90a3ef38  lbu         $v1, -0x10C8($a1)
    ctx->pc = 0x1963c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21EF38u));
    // 0x1963c8: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1963c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1963cc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1963ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1963d0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1963d4: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1963d8: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1963d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x1963dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1963dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1963e0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1963e4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1963e8: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x1963e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
    // 0x1963ec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1963ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1963f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1963f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1963f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1963f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963fc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1963FCu;
    SET_GPR_U32(ctx, 31, 0x196404u);
    ctx->pc = 0x196400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963FCu;
    // 0x196400: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1963FCu, 0x196404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196404u;
label_196404:
    // 0x196404: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x196404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x196408: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x196408u;
    SET_GPR_U32(ctx, 31, 0x196410u);
    ctx->pc = 0x19640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196408u;
    // 0x19640c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x196408u, 0x196410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196410u;
label_196410:
    // 0x196410: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x196410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x196414: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x196414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x196418: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x196418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x19641c: 0xdc62d610  ld          $v0, -0x29F0($v1)
    ctx->pc = 0x19641cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x25D610u));
    // 0x196420: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x196420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x196424: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x196424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x196428: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x196428u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x19642c: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x19642cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x196430: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x196430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x196434: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x196438: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x196438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x19643c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x19643cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x196440: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x196440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x196444: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x196444u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x196448: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19644c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x196450: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x196450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x196454: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x196454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x196458: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x196458u;
    {
        const bool branch_taken_0x196458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196458u;
        // 0x19645c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196458) {
            ctx->pc = 0x196478u;
            return;
        }
    }
    ctx->pc = 0x196460u;
    // 0x196460: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x196460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x196464: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x196468: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19646c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19646Cu;
    {
        const bool branch_taken_0x19646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19646Cu;
        // 0x196470: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19646c) {
            ctx->pc = 0x19647Cu;
            return;
        }
    }
    ctx->pc = 0x196474u;
    // 0x196474: 0x0  nop
    ctx->pc = 0x196474u;
    // NOP
    ctx->pc = 0x196478u;
}
