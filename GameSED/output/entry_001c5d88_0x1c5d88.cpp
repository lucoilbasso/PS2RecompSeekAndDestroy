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

// Function: entry_001c5d88
// Address: 0x1c5d88 - 0x1c5d98
void entry_001c5d88_0x1c5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5d88_0x1c5d88");
#endif

    switch (ctx->pc) {
        case 0x1c5d90u: goto label_1c5d90;
        default: break;
    }

    ctx->pc = 0x1c5d88u;

    // 0x1c5d88: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C5D88u;
    SET_GPR_U32(ctx, 31, 0x1C5D90u);
    ctx->pc = 0x1C5D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D88u;
    // 0x1c5d8c: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C5D88u, 0x1C5D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D90u;
label_1c5d90:
    // 0x1c5d90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C5D90u;
    {
        const bool branch_taken_0x1c5d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D90u;
        // 0x1c5d94: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d90) {
            ctx->pc = 0x1C5E24u;
            return;
        }
    }
    ctx->pc = 0x1C5D98u;
}
