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

// Function: entry_001862b0
// Address: 0x1862b0 - 0x1862d0
void entry_001862b0_0x1862b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001862b0_0x1862b0");
#endif

    ctx->pc = 0x1862b0u;

    // 0x1862b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1862b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1862b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1862b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1862b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1862b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1862bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1862bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1862c0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1862c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1862c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1862c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1862c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1862C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C8u;
        // 0x1862cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1862C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1862D0u;
}
