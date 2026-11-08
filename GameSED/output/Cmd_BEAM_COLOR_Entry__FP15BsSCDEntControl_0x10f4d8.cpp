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

// Function: Cmd_BEAM_COLOR_Entry__FP15BsSCDEntControl
// Address: 0x10f4d8 - 0x10f578
void Cmd_BEAM_COLOR_Entry__FP15BsSCDEntControl_0x10f4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BEAM_COLOR_Entry__FP15BsSCDEntControl_0x10f4d8");
#endif

    switch (ctx->pc) {
        case 0x10f504u: goto label_10f504;
        case 0x10f510u: goto label_10f510;
        case 0x10f540u: goto label_10f540;
        case 0x10f550u: goto label_10f550;
        case 0x10f560u: goto label_10f560;
        default: break;
    }

    ctx->pc = 0x10f4d8u;

    // 0x10f4d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10f4dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f4e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10f4ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10f4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10f4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10f4f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10f4f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10f4fc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10F4FCu;
    SET_GPR_U32(ctx, 31, 0x10F504u);
    ctx->pc = 0x10F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4FCu;
    // 0x10f500: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F4FCu, 0x10F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F504u;
label_10f504:
    // 0x10f504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f508: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10F508u;
    SET_GPR_U32(ctx, 31, 0x10F510u);
    ctx->pc = 0x10F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F508u;
    // 0x10f50c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10F508u, 0x10F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F510u;
label_10f510:
    // 0x10f510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f514: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10f518: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x10f518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D630u));
    // 0x10f51c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x10f520: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10f524: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10f524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10f528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f52c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f530: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F530u;
    {
        const bool branch_taken_0x10f530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F530u;
        // 0x10f534: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f530) {
            ctx->pc = 0x10F548u;
            goto label_10f548;
        }
    }
    ctx->pc = 0x10F538u;
    // 0x10f538: 0xc0416fe  jal         func_105BF8
    ctx->pc = 0x10F538u;
    SET_GPR_U32(ctx, 31, 0x10F540u);
    ctx->pc = 0x105BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BF8u, 0x10F538u, 0x10F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F540u;
label_10f540:
    // 0x10f540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F540u;
    {
        const bool branch_taken_0x10f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F540u;
        // 0x10f544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f540) {
            ctx->pc = 0x10F554u;
            goto label_10f554;
        }
    }
    ctx->pc = 0x10F548u;
label_10f548:
    // 0x10f548: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x10F548u;
    SET_GPR_U32(ctx, 31, 0x10F550u);
    ctx->pc = 0x10F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F548u;
    // 0x10f54c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x10F548u, 0x10F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F550u;
label_10f550:
    // 0x10f550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10f554:
    // 0x10f554: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f558: 0xc064a60  jal         func_192980
    ctx->pc = 0x10F558u;
    SET_GPR_U32(ctx, 31, 0x10F560u);
    ctx->pc = 0x10F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F558u;
    // 0x10f55c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192980u, 0x10F558u, 0x10F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F560u;
label_10f560:
    // 0x10f560: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f564: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10f564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f568: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10f568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f56c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10f56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10f570: 0x3e00008  jr          $ra
    ctx->pc = 0x10F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F570u;
        // 0x10f574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F578u;
}
