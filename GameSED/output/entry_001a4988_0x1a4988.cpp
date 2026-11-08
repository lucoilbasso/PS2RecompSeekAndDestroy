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

// Function: entry_001a4988
// Address: 0x1a4988 - 0x1a4994
void entry_001a4988_0x1a4988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4988_0x1a4988");
#endif

    switch (ctx->pc) {
        case 0x1a4990u: goto label_1a4990;
        default: break;
    }

    ctx->pc = 0x1a4988u;

label_1a4988:
    // 0x1a4988: 0x40f809  jalr        $v0
label_1a498c:
    if (ctx->pc == 0x1A498Cu) {
        ctx->pc = 0x1A498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4988u;
        // 0x1a498c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4990u;
        goto label_1a4990;
    }
    ctx->pc = 0x1A4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4990u);
        ctx->pc = 0x1A498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4988u;
        // 0x1a498c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4988u, 0x1A4990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4990u;
label_1a4990:
    // 0x1a4990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a4994u;
}
