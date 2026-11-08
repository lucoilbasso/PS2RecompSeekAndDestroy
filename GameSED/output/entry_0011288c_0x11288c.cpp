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

// Function: entry_0011288c
// Address: 0x11288c - 0x1128ac
void entry_0011288c_0x11288c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011288c_0x11288c");
#endif

    ctx->pc = 0x11288cu;

    // 0x11288c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x112890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112898: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x11289c: 0x2421ff30  addiu       $at, $at, -0xD0
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294967088));
    // 0x1128a0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1128a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1128A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1128A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128A4u;
        // 0x1128a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1128ACu;
}
