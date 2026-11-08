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

// Function: entry_001e0e1c
// Address: 0x1e0e1c - 0x1e0e48
void entry_001e0e1c_0x1e0e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0e1c_0x1e0e1c");
#endif

    ctx->pc = 0x1e0e1cu;

    // 0x1e0e1c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e0e20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e0e24: 0xae500144  sw          $s0, 0x144($s2)
    ctx->pc = 0x1e0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 16));
    // 0x1e0e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0e30: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e0e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e0e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E40u;
        // 0x1e0e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E48u;
}
