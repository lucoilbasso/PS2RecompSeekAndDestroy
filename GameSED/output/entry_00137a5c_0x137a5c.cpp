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

// Function: entry_00137a5c
// Address: 0x137a5c - 0x137a94
void entry_00137a5c_0x137a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137a5c_0x137a5c");
#endif

    ctx->pc = 0x137a5cu;

    // 0x137a5c: 0xafd50400  sw          $s5, 0x400($fp)
    ctx->pc = 0x137a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 21));
    // 0x137a60: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x137a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137a64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137a68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x137a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137a6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137a70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x137a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137a74: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x137a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137a78: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x137a78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137a7c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x137a7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137a80: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x137a80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137a84: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x137a84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137a88: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x137a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x137a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x137A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A8Cu;
        // 0x137a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A94u;
}
