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

// Function: entry_0013bfa4
// Address: 0x13bfa4 - 0x13bfd0
void entry_0013bfa4_0x13bfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bfa4_0x13bfa4");
#endif

    ctx->pc = 0x13bfa4u;

    // 0x13bfa4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13bfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bfa8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x13bfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13bfac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x13bfacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bfb0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x13bfb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13bfb4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13bfb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bfb8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x13bfb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13bfbc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x13bfbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bfc0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x13bfc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13bfc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFC8u;
        // 0x13bfcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BFD0u;
}
