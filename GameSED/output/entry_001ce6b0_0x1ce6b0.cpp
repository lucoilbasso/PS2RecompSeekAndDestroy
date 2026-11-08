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

// Function: entry_001ce6b0
// Address: 0x1ce6b0 - 0x1ce6d4
void entry_001ce6b0_0x1ce6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce6b0_0x1ce6b0");
#endif

    ctx->pc = 0x1ce6b0u;

    // 0x1ce6b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce6b4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1ce6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1ce6b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ce6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ce6bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ce6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce6c0: 0x24e4fc01  addiu       $a0, $a3, -0x3FF
    ctx->pc = 0x1ce6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966273));
    // 0x1ce6c4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1ce6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1ce6c8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1ce6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1ce6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6CCu;
        // 0x1ce6d0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6D4u;
}
