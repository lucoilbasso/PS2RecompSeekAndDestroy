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

// Function: sceDevFontIdle
// Address: 0x1ad0c0 - 0x1ad100
void sceDevFontIdle_0x1ad0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontIdle_0x1ad0c0");
#endif

    switch (ctx->pc) {
        case 0x1ad0d8u: goto label_1ad0d8;
        default: break;
    }

    ctx->pc = 0x1ad0c0u;

    // 0x1ad0c0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ad0c4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x1ad0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ad0c8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1ad0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ad0cc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ad0d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD0D0u;
    {
        const bool branch_taken_0x1ad0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D0u;
        // 0x1ad0d4: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0d0) {
            ctx->pc = 0x1AD0F8u;
            goto label_1ad0f8;
        }
    }
    ctx->pc = 0x1AD0D8u;
label_1ad0d8:
    // 0x1ad0d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1ad0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ad0dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ad0e0: 0x0  nop
    ctx->pc = 0x1ad0e0u;
    // NOP
    // 0x1ad0e4: 0x0  nop
    ctx->pc = 0x1ad0e4u;
    // NOP
    // 0x1ad0e8: 0x0  nop
    ctx->pc = 0x1ad0e8u;
    // NOP
    // 0x1ad0ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD0ECu;
    {
        const bool branch_taken_0x1ad0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0ec) {
            ctx->pc = 0x1AD0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad0d8;
        }
    }
    ctx->pc = 0x1AD0F4u;
    // 0x1ad0f4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1ad0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1ad0f8:
    // 0x1ad0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD100u;
}
