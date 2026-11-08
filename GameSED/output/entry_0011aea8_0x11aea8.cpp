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

// Function: entry_0011aea8
// Address: 0x11aea8 - 0x11aec8
void entry_0011aea8_0x11aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aea8_0x11aea8");
#endif

    ctx->pc = 0x11aea8u;

    // 0x11aea8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x11aea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11aeac: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x11aeacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11aeb0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x11aeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11aeb4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x11aeb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11aeb8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11aeb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11aebc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x11aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11aec0: 0x3e00008  jr          $ra
    ctx->pc = 0x11AEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEC0u;
        // 0x11aec4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AEC8u;
}
