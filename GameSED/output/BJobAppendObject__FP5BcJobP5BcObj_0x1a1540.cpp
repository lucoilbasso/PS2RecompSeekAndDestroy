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

// Function: BJobAppendObject__FP5BcJobP5BcObj
// Address: 0x1a1540 - 0x1a160c
void BJobAppendObject__FP5BcJobP5BcObj_0x1a1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BJobAppendObject__FP5BcJobP5BcObj_0x1a1540");
#endif

    switch (ctx->pc) {
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a154cu: goto label_1a154c;
        case 0x1a1550u: goto label_1a1550;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a1558u: goto label_1a1558;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1560u: goto label_1a1560;
        case 0x1a1564u: goto label_1a1564;
        case 0x1a1568u: goto label_1a1568;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1574u: goto label_1a1574;
        case 0x1a1578u: goto label_1a1578;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a1588u: goto label_1a1588;
        case 0x1a158cu: goto label_1a158c;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a1594u: goto label_1a1594;
        case 0x1a1598u: goto label_1a1598;
        case 0x1a159cu: goto label_1a159c;
        case 0x1a15a0u: goto label_1a15a0;
        case 0x1a15a4u: goto label_1a15a4;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15acu: goto label_1a15ac;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15b4u: goto label_1a15b4;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15bcu: goto label_1a15bc;
        case 0x1a15c0u: goto label_1a15c0;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d0u: goto label_1a15d0;
        case 0x1a15d4u: goto label_1a15d4;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15dcu: goto label_1a15dc;
        case 0x1a15e0u: goto label_1a15e0;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15e8u: goto label_1a15e8;
        case 0x1a15ecu: goto label_1a15ec;
        case 0x1a15f0u: goto label_1a15f0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a15f8u: goto label_1a15f8;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1600u: goto label_1a1600;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1608u: goto label_1a1608;
        default: break;
    }

    ctx->pc = 0x1a1540u;

label_1a1540:
    // 0x1a1540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1544:
    // 0x1a1544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1548:
    // 0x1a1548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a154c:
    // 0x1a154c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1550:
    // 0x1a1550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1554:
    // 0x1a1554: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1558:
    // 0x1a1558: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1a155c:
    if (ctx->pc == 0x1A155Cu) {
        ctx->pc = 0x1A155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1558u;
        // 0x1a155c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1560u;
        goto label_1a1560;
    }
    ctx->pc = 0x1A1558u;
    {
        const bool branch_taken_0x1a1558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1558u;
        // 0x1a155c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1558) {
            ctx->pc = 0x1A15C0u;
            goto label_1a15c0;
        }
    }
    ctx->pc = 0x1A1560u;
label_1a1560:
    // 0x1a1560: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a1560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1564:
    // 0x1a1564: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1568:
    // 0x1a1568: 0x0  nop
    ctx->pc = 0x1a1568u;
    // NOP
label_1a156c:
    // 0x1a156c: 0x0  nop
    ctx->pc = 0x1a156cu;
    // NOP
label_1a1570:
    // 0x1a1570: 0x0  nop
    ctx->pc = 0x1a1570u;
    // NOP
label_1a1574:
    // 0x1a1574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a1578:
    if (ctx->pc == 0x1A1578u) {
        ctx->pc = 0x1A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1574u;
        // 0x1a1578: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A157Cu;
        goto label_1a157c;
    }
    ctx->pc = 0x1A1574u;
    {
        const bool branch_taken_0x1a1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1574u;
        // 0x1a1578: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1574) {
            ctx->pc = 0x1A1560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1560;
        }
    }
    ctx->pc = 0x1A157Cu;
label_1a157c:
    // 0x1a157c: 0xc0683f0  jal         func_1A0FC0
label_1a1580:
    if (ctx->pc == 0x1A1580u) {
        ctx->pc = 0x1A1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A157Cu;
        // 0x1a1580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1584u;
        goto label_1a1584;
    }
    ctx->pc = 0x1A157Cu;
    SET_GPR_U32(ctx, 31, 0x1A1584u);
    ctx->pc = 0x1A1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A157Cu;
    // 0x1a1580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FC0u, 0x1A157Cu, 0x1A1584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1584u;
label_1a1584:
    // 0x1a1584: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1a1588:
    if (ctx->pc == 0x1A1588u) {
        ctx->pc = 0x1A1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1584u;
        // 0x1a1588: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A158Cu;
        goto label_1a158c;
    }
    ctx->pc = 0x1A1584u;
    {
        const bool branch_taken_0x1a1584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1584) {
            ctx->pc = 0x1A1588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1584u;
            // 0x1a1588: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A15A4u;
            goto label_1a15a4;
        }
    }
    ctx->pc = 0x1A158Cu;
label_1a158c:
    // 0x1a158c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a1590:
    // 0x1a1590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1594:
    // 0x1a1594: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a1594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
label_1a1598:
    // 0x1a1598: 0xc068186  jal         func_1A0618
label_1a159c:
    if (ctx->pc == 0x1A159Cu) {
        ctx->pc = 0x1A159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1598u;
        // 0x1a159c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15A0u;
        goto label_1a15a0;
    }
    ctx->pc = 0x1A1598u;
    SET_GPR_U32(ctx, 31, 0x1A15A0u);
    ctx->pc = 0x1A159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1598u;
    // 0x1a159c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A1598u, 0x1A15A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15A0u;
label_1a15a0:
    // 0x1a15a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a15a4:
    // 0x1a15a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a15a8:
    if (ctx->pc == 0x1A15A8u) {
        ctx->pc = 0x1A15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15A4u;
        // 0x1a15a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15ACu;
        goto label_1a15ac;
    }
    ctx->pc = 0x1A15A4u;
    {
        const bool branch_taken_0x1a15a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15A4u;
        // 0x1a15a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15a4) {
            ctx->pc = 0x1A15F8u;
            goto label_1a15f8;
        }
    }
    ctx->pc = 0x1A15ACu;
label_1a15ac:
    // 0x1a15ac: 0x40f809  jalr        $v0
label_1a15b0:
    if (ctx->pc == 0x1A15B0u) {
        ctx->pc = 0x1A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15ACu;
        // 0x1a15b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15B4u;
        goto label_1a15b4;
    }
    ctx->pc = 0x1A15ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A15B4u);
        ctx->pc = 0x1A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15ACu;
        // 0x1a15b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A15ACu, 0x1A15B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A15B4u;
label_1a15b4:
    // 0x1a15b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a15b8:
    if (ctx->pc == 0x1A15B8u) {
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B4u;
        // 0x1a15b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15BCu;
        goto label_1a15bc;
    }
    ctx->pc = 0x1A15B4u;
    {
        const bool branch_taken_0x1a15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B4u;
        // 0x1a15b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15b4) {
            ctx->pc = 0x1A15FCu;
            goto label_1a15fc;
        }
    }
    ctx->pc = 0x1A15BCu;
label_1a15bc:
    // 0x1a15bc: 0x0  nop
    ctx->pc = 0x1a15bcu;
    // NOP
label_1a15c0:
    // 0x1a15c0: 0xc0683b6  jal         func_1A0ED8
label_1a15c4:
    if (ctx->pc == 0x1A15C4u) {
        ctx->pc = 0x1A15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15C0u;
        // 0x1a15c4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15C8u;
        goto label_1a15c8;
    }
    ctx->pc = 0x1A15C0u;
    SET_GPR_U32(ctx, 31, 0x1A15C8u);
    ctx->pc = 0x1A15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15C0u;
    // 0x1a15c4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A15C0u, 0x1A15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15C8u;
label_1a15c8:
    // 0x1a15c8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1a15cc:
    if (ctx->pc == 0x1A15CCu) {
        ctx->pc = 0x1A15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15C8u;
        // 0x1a15cc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15D0u;
        goto label_1a15d0;
    }
    ctx->pc = 0x1A15C8u;
    {
        const bool branch_taken_0x1a15c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a15c8) {
            ctx->pc = 0x1A15CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A15C8u;
            // 0x1a15cc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A15E8u;
            goto label_1a15e8;
        }
    }
    ctx->pc = 0x1A15D0u;
label_1a15d0:
    // 0x1a15d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a15d4:
    // 0x1a15d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a15d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a15d8:
    // 0x1a15d8: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a15d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
label_1a15dc:
    // 0x1a15dc: 0xc068186  jal         func_1A0618
label_1a15e0:
    if (ctx->pc == 0x1A15E0u) {
        ctx->pc = 0x1A15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15DCu;
        // 0x1a15e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15E4u;
        goto label_1a15e4;
    }
    ctx->pc = 0x1A15DCu;
    SET_GPR_U32(ctx, 31, 0x1A15E4u);
    ctx->pc = 0x1A15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15DCu;
    // 0x1a15e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A15DCu, 0x1A15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15E4u;
label_1a15e4:
    // 0x1a15e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a15e8:
    // 0x1a15e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a15ec:
    if (ctx->pc == 0x1A15ECu) {
        ctx->pc = 0x1A15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15E8u;
        // 0x1a15ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15F0u;
        goto label_1a15f0;
    }
    ctx->pc = 0x1A15E8u;
    {
        const bool branch_taken_0x1a15e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15E8u;
        // 0x1a15ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15e8) {
            ctx->pc = 0x1A15F8u;
            goto label_1a15f8;
        }
    }
    ctx->pc = 0x1A15F0u;
label_1a15f0:
    // 0x1a15f0: 0x40f809  jalr        $v0
label_1a15f4:
    if (ctx->pc == 0x1A15F4u) {
        ctx->pc = 0x1A15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F0u;
        // 0x1a15f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15F8u;
        goto label_1a15f8;
    }
    ctx->pc = 0x1A15F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A15F8u);
        ctx->pc = 0x1A15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F0u;
        // 0x1a15f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A15F0u, 0x1A15F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A15F8u;
label_1a15f8:
    // 0x1a15f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a15f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a15fc:
    // 0x1a15fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a15fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1600:
    // 0x1a1600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1604:
    // 0x1a1604: 0x3e00008  jr          $ra
label_1a1608:
    if (ctx->pc == 0x1A1608u) {
        ctx->pc = 0x1A1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1604u;
        // 0x1a1608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A160Cu;
        goto label_fallthrough_0x1a1604;
    }
    ctx->pc = 0x1A1604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1604u;
        // 0x1a1608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a1604:
    ctx->pc = 0x1A160Cu;
}
