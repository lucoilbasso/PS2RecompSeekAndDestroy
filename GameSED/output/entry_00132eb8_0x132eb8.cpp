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

// Function: entry_00132eb8
// Address: 0x132eb8 - 0x132ec8
void entry_00132eb8_0x132eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132eb8_0x132eb8");
#endif

    switch (ctx->pc) {
        case 0x132ec0u: goto label_132ec0;
        default: break;
    }

    ctx->pc = 0x132eb8u;

    // 0x132eb8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x132EB8u;
    SET_GPR_U32(ctx, 31, 0x132EC0u);
    ctx->pc = 0x132EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EB8u;
    // 0x132ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x132EB8u, 0x132EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EC0u;
label_132ec0:
    // 0x132ec0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x132EC0u;
    {
        const bool branch_taken_0x132ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EC0u;
        // 0x132ec4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ec0) {
            ctx->pc = 0x132F98u;
            return;
        }
    }
    ctx->pc = 0x132EC8u;
}
