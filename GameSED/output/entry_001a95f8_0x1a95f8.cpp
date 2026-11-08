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

// Function: entry_001a95f8
// Address: 0x1a95f8 - 0x1a9608
void entry_001a95f8_0x1a95f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a95f8_0x1a95f8");
#endif

    switch (ctx->pc) {
        case 0x1a9604u: goto label_1a9604;
        default: break;
    }

    ctx->pc = 0x1a95f8u;

label_1a95f8:
    // 0x1a95f8: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x1a95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a95fc:
    // 0x1a95fc: 0x60f809  jalr        $v1
label_1a9600:
    if (ctx->pc == 0x1A9600u) {
        ctx->pc = 0x1A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95FCu;
        // 0x1a9600: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9604u;
        goto label_1a9604;
    }
    ctx->pc = 0x1A95FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9604u);
        ctx->pc = 0x1A9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95FCu;
        // 0x1a9600: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95FCu, 0x1A9604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9604u;
label_1a9604:
    // 0x1a9604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a9608u;
}
