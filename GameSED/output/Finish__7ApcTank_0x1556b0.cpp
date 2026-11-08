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

// Function: Finish__7ApcTank
// Address: 0x1556b0 - 0x155730
void Finish__7ApcTank_0x1556b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7ApcTank_0x1556b0");
#endif

    switch (ctx->pc) {
        case 0x1556b0u: goto label_1556b0;
        case 0x1556b4u: goto label_1556b4;
        case 0x1556b8u: goto label_1556b8;
        case 0x1556bcu: goto label_1556bc;
        case 0x1556c0u: goto label_1556c0;
        case 0x1556c4u: goto label_1556c4;
        case 0x1556c8u: goto label_1556c8;
        case 0x1556ccu: goto label_1556cc;
        case 0x1556d0u: goto label_1556d0;
        case 0x1556d4u: goto label_1556d4;
        case 0x1556d8u: goto label_1556d8;
        case 0x1556dcu: goto label_1556dc;
        case 0x1556e0u: goto label_1556e0;
        case 0x1556e4u: goto label_1556e4;
        case 0x1556e8u: goto label_1556e8;
        case 0x1556ecu: goto label_1556ec;
        case 0x1556f0u: goto label_1556f0;
        case 0x1556f4u: goto label_1556f4;
        case 0x1556f8u: goto label_1556f8;
        case 0x1556fcu: goto label_1556fc;
        case 0x155700u: goto label_155700;
        case 0x155704u: goto label_155704;
        case 0x155708u: goto label_155708;
        case 0x15570cu: goto label_15570c;
        case 0x155710u: goto label_155710;
        case 0x155714u: goto label_155714;
        case 0x155718u: goto label_155718;
        case 0x15571cu: goto label_15571c;
        case 0x155720u: goto label_155720;
        case 0x155724u: goto label_155724;
        case 0x155728u: goto label_155728;
        case 0x15572cu: goto label_15572c;
        default: break;
    }

    ctx->pc = 0x1556b0u;

label_1556b0:
    // 0x1556b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1556b4:
    // 0x1556b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1556b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1556b8:
    // 0x1556b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1556b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1556bc:
    // 0x1556bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1556bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1556c0:
    // 0x1556c0: 0x8e0606a4  lw          $a2, 0x6A4($s0)
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_1556c4:
    // 0x1556c4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1556c8:
    if (ctx->pc == 0x1556C8u) {
        ctx->pc = 0x1556C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556C4u;
        // 0x1556c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556CCu;
        goto label_1556cc;
    }
    ctx->pc = 0x1556C4u;
    {
        const bool branch_taken_0x1556c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556C4u;
        // 0x1556c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556c4) {
            ctx->pc = 0x1556E4u;
            goto label_1556e4;
        }
    }
    ctx->pc = 0x1556CCu;
label_1556cc:
    // 0x1556cc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1556ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1556d0:
    // 0x1556d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1556d4:
    // 0x1556d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1556d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1556d8:
    // 0x1556d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1556d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1556dc:
    // 0x1556dc: 0x60f809  jalr        $v1
label_1556e0:
    if (ctx->pc == 0x1556E0u) {
        ctx->pc = 0x1556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556DCu;
        // 0x1556e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556E4u;
        goto label_1556e4;
    }
    ctx->pc = 0x1556DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1556E4u);
        ctx->pc = 0x1556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556DCu;
        // 0x1556e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1556DCu, 0x1556E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1556E4u;
label_1556e4:
    // 0x1556e4: 0x8e040898  lw          $a0, 0x898($s0)
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
label_1556e8:
    // 0x1556e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1556ec:
    if (ctx->pc == 0x1556ECu) {
        ctx->pc = 0x1556ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556E8u;
        // 0x1556ec: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556F0u;
        goto label_1556f0;
    }
    ctx->pc = 0x1556E8u;
    {
        const bool branch_taken_0x1556e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556e8) {
            ctx->pc = 0x1556ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1556E8u;
            // 0x1556ec: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1556FCu;
            goto label_1556fc;
        }
    }
    ctx->pc = 0x1556F0u;
label_1556f0:
    // 0x1556f0: 0xc067f04  jal         func_19FC10
label_1556f4:
    if (ctx->pc == 0x1556F4u) {
        ctx->pc = 0x1556F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556F0u;
        // 0x1556f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1556F8u;
        goto label_1556f8;
    }
    ctx->pc = 0x1556F0u;
    SET_GPR_U32(ctx, 31, 0x1556F8u);
    ctx->pc = 0x1556F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556F0u;
    // 0x1556f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1556F0u, 0x1556F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556F8u;
label_1556f8:
    // 0x1556f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1556fc:
    // 0x1556fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1556fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155700:
    // 0x155700: 0xc0685b8  jal         func_1A16E0
label_155704:
    if (ctx->pc == 0x155704u) {
        ctx->pc = 0x155704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155700u;
        // 0x155704: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155708u;
        goto label_155708;
    }
    ctx->pc = 0x155700u;
    SET_GPR_U32(ctx, 31, 0x155708u);
    ctx->pc = 0x155704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155700u;
    // 0x155704: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x155700u, 0x155708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155708u;
label_155708:
    // 0x155708: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_15570c:
    // 0x15570c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155710:
    // 0x155710: 0xc0685b8  jal         func_1A16E0
label_155714:
    if (ctx->pc == 0x155714u) {
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155710u;
        // 0x155714: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155718u;
        goto label_155718;
    }
    ctx->pc = 0x155710u;
    SET_GPR_U32(ctx, 31, 0x155718u);
    ctx->pc = 0x155714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155710u;
    // 0x155714: 0x24840fd8  addiu       $a0, $a0, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x155710u, 0x155718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155718u;
label_155718:
    // 0x155718: 0xc052a52  jal         func_14A948
label_15571c:
    if (ctx->pc == 0x15571Cu) {
        ctx->pc = 0x15571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155718u;
        // 0x15571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155720u;
        goto label_155720;
    }
    ctx->pc = 0x155718u;
    SET_GPR_U32(ctx, 31, 0x155720u);
    ctx->pc = 0x15571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155718u;
    // 0x15571c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A948u, 0x155718u, 0x155720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155720u;
label_155720:
    // 0x155720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155724:
    // 0x155724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x155724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_155728:
    // 0x155728: 0x3e00008  jr          $ra
label_15572c:
    if (ctx->pc == 0x15572Cu) {
        ctx->pc = 0x15572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155728u;
        // 0x15572c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155730u;
        goto label_fallthrough_0x155728;
    }
    ctx->pc = 0x155728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155728u;
        // 0x15572c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155728:
    ctx->pc = 0x155730u;
}
