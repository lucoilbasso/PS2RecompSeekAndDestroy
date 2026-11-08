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

// Function: scePowerOffHandler
// Address: 0x1b24f0 - 0x1b2588
void scePowerOffHandler_0x1b24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePowerOffHandler_0x1b24f0");
#endif

    switch (ctx->pc) {
        case 0x1b2524u: goto label_1b2524;
        case 0x1b253cu: goto label_1b253c;
        case 0x1b2544u: goto label_1b2544;
        case 0x1b255cu: goto label_1b255c;
        case 0x1b2564u: goto label_1b2564;
        default: break;
    }

    ctx->pc = 0x1b24f0u;

    // 0x1b24f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b24f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b24f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b24f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b24fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b24fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2500: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b2500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b2504: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b2504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b250c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1b2510: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b2510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b2514: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b2514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b2518: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b2518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b251c: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B251Cu;
    SET_GPR_U32(ctx, 31, 0x1B2524u);
    ctx->pc = 0x1B2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B251Cu;
    // 0x1b2520: 0x2614b200  addiu       $s4, $s0, -0x4E00 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B251Cu, 0x1B2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2524u;
label_1b2524:
    // 0x1b2524: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b2524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b2528: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b2528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b252c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B252Cu;
    {
        const bool branch_taken_0x1b252c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b252c) {
            ctx->pc = 0x1B253Cu;
            goto label_1b253c;
        }
    }
    ctx->pc = 0x1B2534u;
    // 0x1b2534: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B2534u;
    SET_GPR_U32(ctx, 31, 0x1B253Cu);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B2534u, 0x1B253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B253Cu;
label_1b253c:
    // 0x1b253c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1B253Cu;
    SET_GPR_U32(ctx, 31, 0x1B2544u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1B253Cu, 0x1B2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2544u;
label_1b2544:
    // 0x1b2544: 0x8e11b200  lw          $s1, -0x4E00($s0)
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947328)));
    // 0x1b2548: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x1b2548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    // 0x1b254c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B254Cu;
    {
        const bool branch_taken_0x1b254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B254Cu;
        // 0x1b2550: 0xae13b200  sw          $s3, -0x4E00($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294947328), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b254c) {
            ctx->pc = 0x1B255Cu;
            goto label_1b255c;
        }
    }
    ctx->pc = 0x1B2554u;
    // 0x1b2554: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B2554u;
    SET_GPR_U32(ctx, 31, 0x1B255Cu);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B2554u, 0x1B255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B255Cu;
label_1b255c:
    // 0x1b255c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B255Cu;
    SET_GPR_U32(ctx, 31, 0x1B2564u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B255Cu, 0x1B2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2564u;
label_1b2564:
    // 0x1b2564: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b2564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2568: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b2568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b256c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b256cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2570: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b2570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2574: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2578: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b2578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b257c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b257cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2580: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2580u;
        // 0x1b2584: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2588u;
}
