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

// Function: entry_00146eb0
// Address: 0x146eb0 - 0x146ed0
void entry_00146eb0_0x146eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146eb0_0x146eb0");
#endif

    ctx->pc = 0x146eb0u;

    // 0x146eb0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x146eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146eb4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x146eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x146eb8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x146eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x146ebc: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x146ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x146ec0: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x146ec0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x146ec4: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x146ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x146ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x146EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EC8u;
        // 0x146ecc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146ED0u;
}
