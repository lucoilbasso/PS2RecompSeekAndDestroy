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

// Function: entry_0013a8b4
// Address: 0x13a8b4 - 0x13a8f4
void entry_0013a8b4_0x13a8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a8b4_0x13a8b4");
#endif

    switch (ctx->pc) {
        case 0x13a8c0u: goto label_13a8c0;
        case 0x13a8d0u: goto label_13a8d0;
        default: break;
    }

    ctx->pc = 0x13a8b4u;

    // 0x13a8b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8b8: 0xc0618da  jal         func_186368
    ctx->pc = 0x13A8B8u;
    SET_GPR_U32(ctx, 31, 0x13A8C0u);
    ctx->pc = 0x13A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8B8u;
    // 0x13a8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13A8B8u, 0x13A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8C0u;
label_13a8c0:
    // 0x13a8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8c4: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x13a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x13a8c8: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x13A8C8u;
    SET_GPR_U32(ctx, 31, 0x13A8D0u);
    ctx->pc = 0x13A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8C8u;
    // 0x13a8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x13A8C8u, 0x13A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8D0u;
label_13a8d0:
    // 0x13a8d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a8d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a8d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a8dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13a8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a8e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13a8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a8e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13a8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a8e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13A8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8ECu;
        // 0x13a8f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A8F4u;
}
