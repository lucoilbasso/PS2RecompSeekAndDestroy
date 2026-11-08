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

// Function: Finish__5BcObj
// Address: 0x1e16d8 - 0x1e1780
void Finish__5BcObj_0x1e16d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__5BcObj_0x1e16d8");
#endif

    switch (ctx->pc) {
        case 0x1e16d8u: goto label_1e16d8;
        case 0x1e16dcu: goto label_1e16dc;
        case 0x1e16e0u: goto label_1e16e0;
        case 0x1e16e4u: goto label_1e16e4;
        case 0x1e16e8u: goto label_1e16e8;
        case 0x1e16ecu: goto label_1e16ec;
        case 0x1e16f0u: goto label_1e16f0;
        case 0x1e16f4u: goto label_1e16f4;
        case 0x1e16f8u: goto label_1e16f8;
        case 0x1e16fcu: goto label_1e16fc;
        case 0x1e1700u: goto label_1e1700;
        case 0x1e1704u: goto label_1e1704;
        case 0x1e1708u: goto label_1e1708;
        case 0x1e170cu: goto label_1e170c;
        case 0x1e1710u: goto label_1e1710;
        case 0x1e1714u: goto label_1e1714;
        case 0x1e1718u: goto label_1e1718;
        case 0x1e171cu: goto label_1e171c;
        case 0x1e1720u: goto label_1e1720;
        case 0x1e1724u: goto label_1e1724;
        case 0x1e1728u: goto label_1e1728;
        case 0x1e172cu: goto label_1e172c;
        case 0x1e1730u: goto label_1e1730;
        case 0x1e1734u: goto label_1e1734;
        case 0x1e1738u: goto label_1e1738;
        case 0x1e173cu: goto label_1e173c;
        case 0x1e1740u: goto label_1e1740;
        case 0x1e1744u: goto label_1e1744;
        case 0x1e1748u: goto label_1e1748;
        case 0x1e174cu: goto label_1e174c;
        case 0x1e1750u: goto label_1e1750;
        case 0x1e1754u: goto label_1e1754;
        case 0x1e1758u: goto label_1e1758;
        case 0x1e175cu: goto label_1e175c;
        case 0x1e1760u: goto label_1e1760;
        case 0x1e1764u: goto label_1e1764;
        case 0x1e1768u: goto label_1e1768;
        case 0x1e176cu: goto label_1e176c;
        case 0x1e1770u: goto label_1e1770;
        case 0x1e1774u: goto label_1e1774;
        case 0x1e1778u: goto label_1e1778;
        case 0x1e177cu: goto label_1e177c;
        default: break;
    }

    ctx->pc = 0x1e16d8u;

label_1e16d8:
    // 0x1e16d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e16d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e16dc:
    // 0x1e16dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e16dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e16e0:
    // 0x1e16e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e16e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e16e4:
    // 0x1e16e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e16e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e16e8:
    // 0x1e16e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e16e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e16ec:
    // 0x1e16ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e16f0:
    // 0x1e16f0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1e16f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1e16f4:
    // 0x1e16f4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e16f8:
    if (ctx->pc == 0x1E16F8u) {
        ctx->pc = 0x1E16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16F4u;
        // 0x1e16f8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E16FCu;
        goto label_1e16fc;
    }
    ctx->pc = 0x1E16F4u;
    {
        const bool branch_taken_0x1e16f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16F4u;
        // 0x1e16f8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e16f4) {
            ctx->pc = 0x1E1724u;
            goto label_1e1724;
        }
    }
    ctx->pc = 0x1E16FCu;
label_1e16fc:
    // 0x1e16fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e1700:
    // 0x1e1700: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1e1700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1704:
    // 0x1e1704: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e1708:
    // 0x1e1708: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1e1708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e170c:
    // 0x1e170c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e170cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1710:
    // 0x1e1710: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1714:
    // 0x1e1714: 0x60f809  jalr        $v1
label_1e1718:
    if (ctx->pc == 0x1E1718u) {
        ctx->pc = 0x1E1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1714u;
        // 0x1e1718: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E171Cu;
        goto label_1e171c;
    }
    ctx->pc = 0x1E1714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E171Cu);
        ctx->pc = 0x1E1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1714u;
        // 0x1e1718: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1714u, 0x1E171Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E171Cu;
label_1e171c:
    // 0x1e171c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
label_1e1720:
    if (ctx->pc == 0x1E1720u) {
        ctx->pc = 0x1E1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E171Cu;
        // 0x1e1720: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1724u;
        goto label_1e1724;
    }
    ctx->pc = 0x1E171Cu;
    {
        const bool branch_taken_0x1e171c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e171c) {
            ctx->pc = 0x1E1720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E171Cu;
            // 0x1e1720: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1700;
        }
    }
    ctx->pc = 0x1E1724u;
label_1e1724:
    // 0x1e1724: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1e1724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e1728:
    // 0x1e1728: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1e1728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e172c:
    // 0x1e172c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_1e1730:
    if (ctx->pc == 0x1E1730u) {
        ctx->pc = 0x1E1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E172Cu;
        // 0x1e1730: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1734u;
        goto label_1e1734;
    }
    ctx->pc = 0x1E172Cu;
    {
        const bool branch_taken_0x1e172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e172c) {
            ctx->pc = 0x1E1730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E172Cu;
            // 0x1e1730: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1768u;
            goto label_1e1768;
        }
    }
    ctx->pc = 0x1E1734u;
label_1e1734:
    // 0x1e1734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1738:
    // 0x1e1738: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1e1738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e173c:
    // 0x1e173c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1e173cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1740:
    // 0x1e1740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e1740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1744:
    // 0x1e1744: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e1748:
    // 0x1e1748: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e1748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e174c:
    // 0x1e174c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1e174cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1750:
    // 0x1e1750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e1750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1754:
    // 0x1e1754: 0x60f809  jalr        $v1
label_1e1758:
    if (ctx->pc == 0x1E1758u) {
        ctx->pc = 0x1E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1754u;
        // 0x1e1758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E175Cu;
        goto label_1e175c;
    }
    ctx->pc = 0x1E1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E175Cu);
        ctx->pc = 0x1E1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1754u;
        // 0x1e1758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1754u, 0x1E175Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E175Cu;
label_1e175c:
    // 0x1e175c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_1e1760:
    if (ctx->pc == 0x1E1760u) {
        ctx->pc = 0x1E1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E175Cu;
        // 0x1e1760: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1764u;
        goto label_1e1764;
    }
    ctx->pc = 0x1E175Cu;
    {
        const bool branch_taken_0x1e175c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E175Cu;
        // 0x1e1760: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e175c) {
            ctx->pc = 0x1E1738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1738;
        }
    }
    ctx->pc = 0x1E1764u;
label_1e1764:
    // 0x1e1764: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e1764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e1768:
    // 0x1e1768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e176c:
    // 0x1e176c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e176cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e1770:
    // 0x1e1770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1774:
    // 0x1e1774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e1778:
    // 0x1e1778: 0x3e00008  jr          $ra
label_1e177c:
    if (ctx->pc == 0x1E177Cu) {
        ctx->pc = 0x1E177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1778u;
        // 0x1e177c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1780u;
        goto label_fallthrough_0x1e1778;
    }
    ctx->pc = 0x1E1778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1778u;
        // 0x1e177c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1778:
    ctx->pc = 0x1E1780u;
}
