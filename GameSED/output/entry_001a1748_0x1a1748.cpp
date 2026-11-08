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

// Function: entry_001a1748
// Address: 0x1a1748 - 0x1a1760
void entry_001a1748_0x1a1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1748_0x1a1748");
#endif

    ctx->pc = 0x1a1748u;

label_1a1748:
    // 0x1a1748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a174c:
    // 0x1a174c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1750:
    // 0x1a1750: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1754:
    // 0x1a1754: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1a1754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a1758:
    // 0x1a1758: 0x40f809  jalr        $v0
label_1a175c:
    if (ctx->pc == 0x1A175Cu) {
        ctx->pc = 0x1A1760u;
        goto label_fallthrough_0x1a1758;
    }
    ctx->pc = 0x1A1758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1760u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1758u, 0x1A1760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a1758:
    ctx->pc = 0x1A1760u;
}
