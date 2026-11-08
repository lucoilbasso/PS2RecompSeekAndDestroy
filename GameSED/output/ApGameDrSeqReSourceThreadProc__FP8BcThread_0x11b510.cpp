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

// Function: ApGameDrSeqReSourceThreadProc__FP8BcThread
// Address: 0x11b510 - 0x11b568
void ApGameDrSeqReSourceThreadProc__FP8BcThread_0x11b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApGameDrSeqReSourceThreadProc__FP8BcThread_0x11b510");
#endif

    switch (ctx->pc) {
        case 0x11b510u: goto label_11b510;
        case 0x11b514u: goto label_11b514;
        case 0x11b518u: goto label_11b518;
        case 0x11b51cu: goto label_11b51c;
        case 0x11b520u: goto label_11b520;
        case 0x11b524u: goto label_11b524;
        case 0x11b528u: goto label_11b528;
        case 0x11b52cu: goto label_11b52c;
        case 0x11b530u: goto label_11b530;
        case 0x11b534u: goto label_11b534;
        case 0x11b538u: goto label_11b538;
        case 0x11b53cu: goto label_11b53c;
        case 0x11b540u: goto label_11b540;
        case 0x11b544u: goto label_11b544;
        case 0x11b548u: goto label_11b548;
        case 0x11b54cu: goto label_11b54c;
        case 0x11b550u: goto label_11b550;
        case 0x11b554u: goto label_11b554;
        case 0x11b558u: goto label_11b558;
        case 0x11b55cu: goto label_11b55c;
        case 0x11b560u: goto label_11b560;
        case 0x11b564u: goto label_11b564;
        default: break;
    }

    ctx->pc = 0x11b510u;

label_11b510:
    // 0x11b510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b514:
    // 0x11b514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b518:
    // 0x11b518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_11b51c:
    // 0x11b51c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11b520:
    // 0x11b520: 0x48800  sll         $s1, $a0, 0
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_11b524:
    // 0x11b524: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x11b524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11b528:
    // 0x11b528: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11b52c:
    // 0x11b52c: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x11b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_11b530:
    // 0x11b530: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b534:
    // 0x11b534: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b538:
    // 0x11b538: 0x60f809  jalr        $v1
label_11b53c:
    if (ctx->pc == 0x11B53Cu) {
        ctx->pc = 0x11B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B538u;
        // 0x11b53c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B540u;
        goto label_11b540;
    }
    ctx->pc = 0x11B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B540u);
        ctx->pc = 0x11B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B538u;
        // 0x11b53c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B538u, 0x11B540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B540u;
label_11b540:
    // 0x11b540: 0xc06bd20  jal         func_1AF480
label_11b544:
    if (ctx->pc == 0x11B544u) {
        ctx->pc = 0x11B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B540u;
        // 0x11b544: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B548u;
        goto label_11b548;
    }
    ctx->pc = 0x11B540u;
    SET_GPR_U32(ctx, 31, 0x11B548u);
    ctx->pc = 0x11B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B540u;
    // 0x11b544: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11B540u, 0x11B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B548u;
label_11b548:
    // 0x11b548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b54c:
    // 0x11b54c: 0xc06866c  jal         func_1A19B0
label_11b550:
    if (ctx->pc == 0x11B550u) {
        ctx->pc = 0x11B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B54Cu;
        // 0x11b550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B554u;
        goto label_11b554;
    }
    ctx->pc = 0x11B54Cu;
    SET_GPR_U32(ctx, 31, 0x11B554u);
    ctx->pc = 0x11B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B54Cu;
    // 0x11b550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x11B54Cu, 0x11B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B554u;
label_11b554:
    // 0x11b554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b558:
    // 0x11b558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11b55c:
    // 0x11b55c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b560:
    // 0x11b560: 0x3e00008  jr          $ra
label_11b564:
    if (ctx->pc == 0x11B564u) {
        ctx->pc = 0x11B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B560u;
        // 0x11b564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B568u;
        goto label_fallthrough_0x11b560;
    }
    ctx->pc = 0x11B560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B560u;
        // 0x11b564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b560:
    ctx->pc = 0x11B568u;
}
