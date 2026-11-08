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

// Function: entry_001c5bc0
// Address: 0x1c5bc0 - 0x1c5bd0
void entry_001c5bc0_0x1c5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5bc0_0x1c5bc0");
#endif

    switch (ctx->pc) {
        case 0x1c5bc8u: goto label_1c5bc8;
        default: break;
    }

    ctx->pc = 0x1c5bc0u;

    // 0x1c5bc0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C5BC0u;
    SET_GPR_U32(ctx, 31, 0x1C5BC8u);
    ctx->pc = 0x1C5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5BC0u;
    // 0x1c5bc4: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C5BC0u, 0x1C5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BC8u;
label_1c5bc8:
    // 0x1c5bc8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C5BC8u;
    {
        const bool branch_taken_0x1c5bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC8u;
        // 0x1c5bcc: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc8) {
            ctx->pc = 0x1C5C5Cu;
            return;
        }
    }
    ctx->pc = 0x1C5BD0u;
}
