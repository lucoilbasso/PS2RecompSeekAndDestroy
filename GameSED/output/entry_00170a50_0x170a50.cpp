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

// Function: entry_00170a50
// Address: 0x170a50 - 0x170a88
void entry_00170a50_0x170a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a50_0x170a50");
#endif

    switch (ctx->pc) {
        case 0x170a5cu: goto label_170a5c;
        default: break;
    }

    ctx->pc = 0x170a50u;

    // 0x170a50: 0x26c41368  addiu       $a0, $s6, 0x1368
    ctx->pc = 0x170a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4968));
    // 0x170a54: 0xc05c5e6  jal         func_171798
    ctx->pc = 0x170A54u;
    SET_GPR_U32(ctx, 31, 0x170A5Cu);
    ctx->pc = 0x170A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A54u;
    // 0x170a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171798u, 0x170A54u, 0x170A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A5Cu;
label_170a5c:
    // 0x170a5c: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x170a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x170a60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x170a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170a64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x170a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x170a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170a6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x170a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170a70: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x170a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170a74: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x170a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170a78: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x170a78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170a7c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x170a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x170a80: 0x3e00008  jr          $ra
    ctx->pc = 0x170A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A80u;
        // 0x170a84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A88u;
}
