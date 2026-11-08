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

// Function: entry_0015b8b8
// Address: 0x15b8b8 - 0x15b8e8
void entry_0015b8b8_0x15b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b8b8_0x15b8b8");
#endif

    ctx->pc = 0x15b8b8u;

    // 0x15b8b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15b8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b8bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15b8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b8c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15b8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b8c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15b8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b8c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15b8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b8cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15b8ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15b8d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15b8d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b8d4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15b8d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b8d8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15b8d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b8dc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8E0u;
        // 0x15b8e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B8E8u;
}
