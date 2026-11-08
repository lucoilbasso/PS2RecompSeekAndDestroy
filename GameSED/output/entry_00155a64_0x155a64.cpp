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

// Function: entry_00155a64
// Address: 0x155a64 - 0x155a84
void entry_00155a64_0x155a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155a64_0x155a64");
#endif

    ctx->pc = 0x155a64u;

    // 0x155a64: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x155a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x155a68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x155a6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x155a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155a70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155a74: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x155a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x155a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x155A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A7Cu;
        // 0x155a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A84u;
}
