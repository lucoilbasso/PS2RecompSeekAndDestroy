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

// Function: entry_001a1980
// Address: 0x1a1980 - 0x1a19ac
void entry_001a1980_0x1a1980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1980_0x1a1980");
#endif

    ctx->pc = 0x1a1980u;

    // 0x1a1980: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a1980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1984: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1a1984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a1988: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a1988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a198c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1a198cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a1990: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1a1990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1994: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1a1994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a1998: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a1998u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a199c: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x1a199cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a19a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a19a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a19a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A19A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19A4u;
        // 0x1a19a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A19ACu;
}
