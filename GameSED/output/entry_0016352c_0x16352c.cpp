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

// Function: entry_0016352c
// Address: 0x16352c - 0x163568
void entry_0016352c_0x16352c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016352c_0x16352c");
#endif

    switch (ctx->pc) {
        case 0x163538u: goto label_163538;
        default: break;
    }

    ctx->pc = 0x16352cu;

    // 0x16352c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163530: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x163530u;
    SET_GPR_U32(ctx, 31, 0x163538u);
    ctx->pc = 0x163534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163530u;
    // 0x163534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x163530u, 0x163538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163538u;
label_163538:
    // 0x163538: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x163538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16353c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16353cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163540: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x163540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163544: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x163544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163548: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x163548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16354c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16354cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x163550: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x163550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163554: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x163554u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x163558: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x163558u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16355c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163560: 0x3e00008  jr          $ra
    ctx->pc = 0x163560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163560u;
        // 0x163564: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163568u;
}
