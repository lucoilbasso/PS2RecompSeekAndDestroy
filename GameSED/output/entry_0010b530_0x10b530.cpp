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

// Function: entry_0010b530
// Address: 0x10b530 - 0x10b560
void entry_0010b530_0x10b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b530_0x10b530");
#endif

    switch (ctx->pc) {
        case 0x10b538u: goto label_10b538;
        case 0x10b548u: goto label_10b548;
        default: break;
    }

    ctx->pc = 0x10b530u;

    // 0x10b530: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B530u;
    SET_GPR_U32(ctx, 31, 0x10B538u);
    ctx->pc = 0x10B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B530u;
    // 0x10b534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B530u, 0x10B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B538u;
label_10b538:
    // 0x10b538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b53c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b540: 0xc063b9a  jal         func_18EE68
    ctx->pc = 0x10B540u;
    SET_GPR_U32(ctx, 31, 0x10B548u);
    ctx->pc = 0x10B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B540u;
    // 0x10b544: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE68u, 0x10B540u, 0x10B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B548u;
label_10b548:
    // 0x10b548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b54c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B564u;
}
