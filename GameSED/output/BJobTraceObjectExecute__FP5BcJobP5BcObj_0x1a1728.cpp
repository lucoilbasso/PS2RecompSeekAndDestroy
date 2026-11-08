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

// Function: BJobTraceObjectExecute__FP5BcJobP5BcObj
// Address: 0x1a1728 - 0x1a177c
void BJobTraceObjectExecute__FP5BcJobP5BcObj_0x1a1728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BJobTraceObjectExecute__FP5BcJobP5BcObj_0x1a1728");
#endif

    switch (ctx->pc) {
        case 0x1a1728u: goto label_1a1728;
        case 0x1a172cu: goto label_1a172c;
        case 0x1a1730u: goto label_1a1730;
        case 0x1a1734u: goto label_1a1734;
        case 0x1a1738u: goto label_1a1738;
        case 0x1a173cu: goto label_1a173c;
        case 0x1a1740u: goto label_1a1740;
        case 0x1a1744u: goto label_1a1744;
        case 0x1a1748u: goto label_1a1748;
        case 0x1a174cu: goto label_1a174c;
        case 0x1a1750u: goto label_1a1750;
        case 0x1a1754u: goto label_1a1754;
        case 0x1a1758u: goto label_1a1758;
        case 0x1a175cu: goto label_1a175c;
        case 0x1a1760u: goto label_1a1760;
        case 0x1a1764u: goto label_1a1764;
        case 0x1a1768u: goto label_1a1768;
        case 0x1a176cu: goto label_1a176c;
        case 0x1a1770u: goto label_1a1770;
        case 0x1a1774u: goto label_1a1774;
        case 0x1a1778u: goto label_1a1778;
        default: break;
    }

    ctx->pc = 0x1a1728u;

label_1a1728:
    // 0x1a1728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a172c:
    // 0x1a172c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1730:
    // 0x1a1730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1734:
    // 0x1a1734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a1738:
    // 0x1a1738: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a1738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a173c:
    // 0x1a173c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a173cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1740:
    // 0x1a1740: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a1740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a1744:
    // 0x1a1744: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1a1744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a1748:
    // 0x1a1748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a174c:
    // 0x1a174c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1750:
    // 0x1a1750: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1754:
    // 0x1a1754: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1a1754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a1758:
    // 0x1a1758: 0x40f809  jalr        $v0
label_1a175c:
    if (ctx->pc == 0x1A175Cu) {
        ctx->pc = 0x1A1760u;
        goto label_1a1760;
    }
    ctx->pc = 0x1A1758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1760u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1758u, 0x1A1760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1760u;
label_1a1760:
    // 0x1a1760: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_1a1764:
    if (ctx->pc == 0x1A1764u) {
        ctx->pc = 0x1A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1760u;
        // 0x1a1764: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1768u;
        goto label_1a1768;
    }
    ctx->pc = 0x1A1760u;
    {
        const bool branch_taken_0x1a1760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1760u;
        // 0x1a1764: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1760) {
            ctx->pc = 0x1A1748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1748;
        }
    }
    ctx->pc = 0x1A1768u;
label_1a1768:
    // 0x1a1768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a176c:
    // 0x1a176c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a176cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1770:
    // 0x1a1770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1774:
    // 0x1a1774: 0x3e00008  jr          $ra
label_1a1778:
    if (ctx->pc == 0x1A1778u) {
        ctx->pc = 0x1A1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1774u;
        // 0x1a1778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A177Cu;
        goto label_fallthrough_0x1a1774;
    }
    ctx->pc = 0x1A1774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1774u;
        // 0x1a1778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a1774:
    ctx->pc = 0x1A177Cu;
}
