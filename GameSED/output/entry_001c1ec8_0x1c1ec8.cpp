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

// Function: entry_001c1ec8
// Address: 0x1c1ec8 - 0x1c1ee8
void entry_001c1ec8_0x1c1ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1ec8_0x1c1ec8");
#endif

    ctx->pc = 0x1c1ec8u;

    // 0x1c1ec8: 0x121023  negu        $v0, $s2
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x1c1ecc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1ed0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1ed4: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c1ed8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EE0u;
        // 0x1c1ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1EE8u;
}
