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

// Function: entry_0014ce6c
// Address: 0x14ce6c - 0x14ce8c
void entry_0014ce6c_0x14ce6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ce6c_0x14ce6c");
#endif

    ctx->pc = 0x14ce6cu;

    // 0x14ce6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ce6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ce70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14ce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ce74: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x14ce74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce78: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x14ce78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce7c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14ce7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce80: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x14ce80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ce84: 0x3e00008  jr          $ra
    ctx->pc = 0x14CE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE84u;
        // 0x14ce88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CE8Cu;
}
