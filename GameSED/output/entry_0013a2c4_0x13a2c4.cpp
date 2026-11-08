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

// Function: entry_0013a2c4
// Address: 0x13a2c4 - 0x13a2f0
void entry_0013a2c4_0x13a2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a2c4_0x13a2c4");
#endif

    ctx->pc = 0x13a2c4u;

    // 0x13a2c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x13a2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a2c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x13a2c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a2cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13a2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a2d0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x13a2d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a2d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13a2d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a2d8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x13a2d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2dc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x13a2dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a2e0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x13a2e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13a2e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13a2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13A2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2E8u;
        // 0x13a2ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A2F0u;
}
