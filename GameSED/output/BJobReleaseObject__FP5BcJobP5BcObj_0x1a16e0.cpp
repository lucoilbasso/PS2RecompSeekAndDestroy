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

// Function: BJobReleaseObject__FP5BcJobP5BcObj
// Address: 0x1a16e0 - 0x1a1728
void BJobReleaseObject__FP5BcJobP5BcObj_0x1a16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BJobReleaseObject__FP5BcJobP5BcObj_0x1a16e0");
#endif

    switch (ctx->pc) {
        case 0x1a16e0u: goto label_1a16e0;
        case 0x1a16e4u: goto label_1a16e4;
        case 0x1a16e8u: goto label_1a16e8;
        case 0x1a16ecu: goto label_1a16ec;
        case 0x1a16f0u: goto label_1a16f0;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a16f8u: goto label_1a16f8;
        case 0x1a16fcu: goto label_1a16fc;
        case 0x1a1700u: goto label_1a1700;
        case 0x1a1704u: goto label_1a1704;
        case 0x1a1708u: goto label_1a1708;
        case 0x1a170cu: goto label_1a170c;
        case 0x1a1710u: goto label_1a1710;
        case 0x1a1714u: goto label_1a1714;
        case 0x1a1718u: goto label_1a1718;
        case 0x1a171cu: goto label_1a171c;
        case 0x1a1720u: goto label_1a1720;
        case 0x1a1724u: goto label_1a1724;
        default: break;
    }

    ctx->pc = 0x1a16e0u;

label_1a16e0:
    // 0x1a16e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a16e4:
    // 0x1a16e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a16e8:
    // 0x1a16e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a16e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a16ec:
    // 0x1a16ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a16f0:
    // 0x1a16f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a16f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a16f4:
    // 0x1a16f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a16f8:
    // 0x1a16f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a16fc:
    if (ctx->pc == 0x1A16FCu) {
        ctx->pc = 0x1A16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16F8u;
        // 0x1a16fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1700u;
        goto label_1a1700;
    }
    ctx->pc = 0x1A16F8u;
    {
        const bool branch_taken_0x1a16f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16F8u;
        // 0x1a16fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16f8) {
            ctx->pc = 0x1A1708u;
            goto label_1a1708;
        }
    }
    ctx->pc = 0x1A1700u;
label_1a1700:
    // 0x1a1700: 0x40f809  jalr        $v0
label_1a1704:
    if (ctx->pc == 0x1A1704u) {
        ctx->pc = 0x1A1708u;
        goto label_1a1708;
    }
    ctx->pc = 0x1A1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1708u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1700u, 0x1A1708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1708u;
label_1a1708:
    // 0x1a1708: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a170c:
    // 0x1a170c: 0xc068436  jal         func_1A10D8
label_1a1710:
    if (ctx->pc == 0x1A1710u) {
        ctx->pc = 0x1A1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A170Cu;
        // 0x1a1710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1714u;
        goto label_1a1714;
    }
    ctx->pc = 0x1A170Cu;
    SET_GPR_U32(ctx, 31, 0x1A1714u);
    ctx->pc = 0x1A1710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A170Cu;
    // 0x1a1710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1A170Cu, 0x1A1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1714u;
label_1a1714:
    // 0x1a1714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1718:
    // 0x1a1718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a171c:
    // 0x1a171c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a171cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1720:
    // 0x1a1720: 0x3e00008  jr          $ra
label_1a1724:
    if (ctx->pc == 0x1A1724u) {
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1720u;
        // 0x1a1724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1728u;
        goto label_fallthrough_0x1a1720;
    }
    ctx->pc = 0x1A1720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1720u;
        // 0x1a1724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a1720:
    ctx->pc = 0x1A1728u;
}
