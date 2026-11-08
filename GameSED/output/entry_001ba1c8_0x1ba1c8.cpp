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

// Function: entry_001ba1c8
// Address: 0x1ba1c8 - 0x1ba1e4
void entry_001ba1c8_0x1ba1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba1c8_0x1ba1c8");
#endif

    ctx->pc = 0x1ba1c8u;

    // 0x1ba1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba1d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ba1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba1d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ba1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1DCu;
        // 0x1ba1e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA1E4u;
}
