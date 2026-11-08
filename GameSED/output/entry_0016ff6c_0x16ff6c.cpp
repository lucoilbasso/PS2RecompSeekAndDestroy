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

// Function: entry_0016ff6c
// Address: 0x16ff6c - 0x16ff90
void entry_0016ff6c_0x16ff6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ff6c_0x16ff6c");
#endif

    switch (ctx->pc) {
        case 0x16ff74u: goto label_16ff74;
        default: break;
    }

    ctx->pc = 0x16ff6cu;

    // 0x16ff6c: 0xc05e8ec  jal         func_17A3B0
    ctx->pc = 0x16FF6Cu;
    SET_GPR_U32(ctx, 31, 0x16FF74u);
    ctx->pc = 0x16FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF6Cu;
    // 0x16ff70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3B0u, 0x16FF6Cu, 0x16FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF74u;
label_16ff74:
    // 0x16ff74: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x16ff74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16ff78: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x16ff78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16ff7c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x16ff7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16ff80: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x16ff80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x16ff84: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x16ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16ff88: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF88u;
        // 0x16ff8c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF90u;
}
