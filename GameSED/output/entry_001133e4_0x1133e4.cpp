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

// Function: entry_001133e4
// Address: 0x1133e4 - 0x1134c0
void entry_001133e4_0x1133e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001133e4_0x1133e4");
#endif

    switch (ctx->pc) {
        case 0x1133f0u: goto label_1133f0;
        case 0x113414u: goto label_113414;
        case 0x113420u: goto label_113420;
        case 0x113438u: goto label_113438;
        case 0x113464u: goto label_113464;
        case 0x113480u: goto label_113480;
        case 0x11348cu: goto label_11348c;
        case 0x113494u: goto label_113494;
        case 0x11349cu: goto label_11349c;
        default: break;
    }

    ctx->pc = 0x1133e4u;

label_1133e4:
    // 0x1133e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1133e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1133e8:
    // 0x1133e8: 0x40f809  jalr        $v0
label_1133ec:
    if (ctx->pc == 0x1133ECu) {
        ctx->pc = 0x1133ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133E8u;
        // 0x1133ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133F0u;
        goto label_1133f0;
    }
    ctx->pc = 0x1133E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1133F0u);
        ctx->pc = 0x1133ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133E8u;
        // 0x1133ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133E8u, 0x1133F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1133F0u;
label_1133f0:
    // 0x1133f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1133f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1133f4:
    // 0x1133f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1133f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1133f8:
    // 0x1133f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1133f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1133fc:
    // 0x1133fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1133fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113400:
    // 0x113400: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x113400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_113404:
    // 0x113404: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_113408:
    // 0x113408: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x113408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11340c:
    // 0x11340c: 0x60f809  jalr        $v1
label_113410:
    if (ctx->pc == 0x113410u) {
        ctx->pc = 0x113410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11340Cu;
        // 0x113410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113414u;
        goto label_113414;
    }
    ctx->pc = 0x11340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113414u);
        ctx->pc = 0x113410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11340Cu;
        // 0x113410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11340Cu, 0x113414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113414u;
label_113414:
    // 0x113414: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x113414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_113418:
    // 0x113418: 0xc04523e  jal         func_1148F8
label_11341c:
    if (ctx->pc == 0x11341Cu) {
        ctx->pc = 0x11341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113418u;
        // 0x11341c: 0x2484039c  addiu       $a0, $a0, 0x39C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 924));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113420u;
        goto label_113420;
    }
    ctx->pc = 0x113418u;
    SET_GPR_U32(ctx, 31, 0x113420u);
    ctx->pc = 0x11341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113418u;
    // 0x11341c: 0x2484039c  addiu       $a0, $a0, 0x39C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x113418u, 0x113420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113420u;
label_113420:
    // 0x113420: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x113420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_113424:
    // 0x113424: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x113424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_113428:
    // 0x113428: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11342c:
    // 0x11342c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113430:
    // 0x113430: 0x60f809  jalr        $v1
label_113434:
    if (ctx->pc == 0x113434u) {
        ctx->pc = 0x113434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113430u;
        // 0x113434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113438u;
        goto label_113438;
    }
    ctx->pc = 0x113430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113438u);
        ctx->pc = 0x113434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113430u;
        // 0x113434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113430u, 0x113438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113438u;
label_113438:
    // 0x113438: 0x8e27361c  lw          $a3, 0x361C($s1)
    ctx->pc = 0x113438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13852)));
label_11343c:
    // 0x11343c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x11343cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_113440:
    // 0x113440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113444:
    // 0x113444: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_113448:
    // 0x113448: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x113448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_11344c:
    // 0x11344c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_113450:
    // 0x113450: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x113450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_113454:
    // 0x113454: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x113454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_113458:
    // 0x113458: 0xae27361c  sw          $a3, 0x361C($s1)
    ctx->pc = 0x113458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13852), GPR_U32(ctx, 7));
label_11345c:
    // 0x11345c: 0x60f809  jalr        $v1
label_113460:
    if (ctx->pc == 0x113460u) {
        ctx->pc = 0x113460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11345Cu;
        // 0x113460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113464u;
        goto label_113464;
    }
    ctx->pc = 0x11345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113464u);
        ctx->pc = 0x113460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11345Cu;
        // 0x113460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11345Cu, 0x113464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113464u;
label_113464:
    // 0x113464: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x113464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_113468:
    // 0x113468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11346c:
    // 0x11346c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113470:
    // 0x113470: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_113474:
    // 0x113474: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113478:
    // 0x113478: 0x60f809  jalr        $v1
label_11347c:
    if (ctx->pc == 0x11347Cu) {
        ctx->pc = 0x11347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113478u;
        // 0x11347c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113480u;
        goto label_113480;
    }
    ctx->pc = 0x113478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113480u);
        ctx->pc = 0x11347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113478u;
        // 0x11347c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113478u, 0x113480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113480u;
label_113480:
    // 0x113480: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x113480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_113484:
    // 0x113484: 0xc060e88  jal         func_183A20
label_113488:
    if (ctx->pc == 0x113488u) {
        ctx->pc = 0x113488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113484u;
        // 0x113488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11348Cu;
        goto label_11348c;
    }
    ctx->pc = 0x113484u;
    SET_GPR_U32(ctx, 31, 0x11348Cu);
    ctx->pc = 0x113488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113484u;
    // 0x113488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x113484u, 0x11348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11348Cu;
label_11348c:
    // 0x11348c: 0xc0680f6  jal         func_1A03D8
label_113490:
    if (ctx->pc == 0x113490u) {
        ctx->pc = 0x113490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11348Cu;
        // 0x113490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113494u;
        goto label_113494;
    }
    ctx->pc = 0x11348Cu;
    SET_GPR_U32(ctx, 31, 0x113494u);
    ctx->pc = 0x113490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11348Cu;
    // 0x113490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x11348Cu, 0x113494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113494u;
label_113494:
    // 0x113494: 0xc068064  jal         func_1A0190
label_113498:
    if (ctx->pc == 0x113498u) {
        ctx->pc = 0x113498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113494u;
        // 0x113498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11349Cu;
        goto label_11349c;
    }
    ctx->pc = 0x113494u;
    SET_GPR_U32(ctx, 31, 0x11349Cu);
    ctx->pc = 0x113498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113494u;
    // 0x113498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0190u, 0x113494u, 0x11349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11349Cu;
label_11349c:
    // 0x11349c: 0x8e223410  lw          $v0, 0x3410($s1)
    ctx->pc = 0x11349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13328)));
label_1134a0:
    // 0x1134a0: 0x1040ff79  beqz        $v0, . + 4 + (-0x87 << 2)
label_1134a4:
    if (ctx->pc == 0x1134A4u) {
        ctx->pc = 0x1134A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134A0u;
        // 0x1134a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134A8u;
        goto label_1134a8;
    }
    ctx->pc = 0x1134A0u;
    {
        const bool branch_taken_0x1134a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134A0u;
        // 0x1134a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134a0) {
            ctx->pc = 0x113288u;
            return;
        }
    }
    ctx->pc = 0x1134A8u;
label_1134a8:
    // 0x1134a8: 0x8e220168  lw          $v0, 0x168($s1)
    ctx->pc = 0x1134a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_1134ac:
    // 0x1134ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1134acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1134b0:
    // 0x1134b0: 0x5440ff76  bnel        $v0, $zero, . + 4 + (-0x8A << 2)
label_1134b4:
    if (ctx->pc == 0x1134B4u) {
        ctx->pc = 0x1134B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134B0u;
        // 0x1134b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134B8u;
        goto label_1134b8;
    }
    ctx->pc = 0x1134B0u;
    {
        const bool branch_taken_0x1134b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134b0) {
            ctx->pc = 0x1134B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134B0u;
            // 0x1134b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11328Cu;
            return;
        }
    }
    ctx->pc = 0x1134B8u;
label_1134b8:
    // 0x1134b8: 0x1000ff81  b           . + 4 + (-0x7F << 2)
label_1134bc:
    if (ctx->pc == 0x1134BCu) {
        ctx->pc = 0x1134BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134B8u;
        // 0x1134bc: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134C0u;
        goto label_fallthrough_0x1134b8;
    }
    ctx->pc = 0x1134B8u;
    {
        const bool branch_taken_0x1134b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134B8u;
        // 0x1134bc: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134b8) {
            ctx->pc = 0x1132C0u;
            return;
        }
    }
label_fallthrough_0x1134b8:
    ctx->pc = 0x1134C0u;
}
