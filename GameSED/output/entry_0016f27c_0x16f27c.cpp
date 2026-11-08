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

// Function: entry_0016f27c
// Address: 0x16f27c - 0x16f2a0
void entry_0016f27c_0x16f27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f27c_0x16f27c");
#endif

    ctx->pc = 0x16f27cu;

    // 0x16f27c: 0xaf918b58  sw          $s1, -0x74A8($gp)
    ctx->pc = 0x16f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937432), GPR_U32(ctx, 17));
    // 0x16f280: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x16f280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f284: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x16f284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f288: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x16f288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f28c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x16f28cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16f290: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x16f290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f294: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x16f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16f298: 0x3e00008  jr          $ra
    ctx->pc = 0x16F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F298u;
        // 0x16f29c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F2A0u;
}
