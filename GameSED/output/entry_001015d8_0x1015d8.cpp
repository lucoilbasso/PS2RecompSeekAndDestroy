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

// Function: entry_001015d8
// Address: 0x1015d8 - 0x1015f4
void entry_001015d8_0x1015d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015d8_0x1015d8");
#endif

    ctx->pc = 0x1015d8u;

    // 0x1015d8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1015d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1015dc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1015dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1015e0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1015e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1015e4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1015e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1015e8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1015e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1015ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1015ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1015F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015ECu;
        // 0x1015f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1015ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1015F4u;
}
