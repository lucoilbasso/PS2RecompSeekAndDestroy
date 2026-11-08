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

// Function: entry_00114ad8
// Address: 0x114ad8 - 0x114af4
void entry_00114ad8_0x114ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ad8_0x114ad8");
#endif

    ctx->pc = 0x114ad8u;

    // 0x114ad8: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x114ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x114adc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114ae0: 0xae030c04  sw          $v1, 0xC04($s0)
    ctx->pc = 0x114ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 3));
    // 0x114ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114aec: 0x3e00008  jr          $ra
    ctx->pc = 0x114AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AECu;
        // 0x114af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114AF4u;
}
