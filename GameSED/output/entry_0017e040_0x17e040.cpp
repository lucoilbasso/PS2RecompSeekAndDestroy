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

// Function: entry_0017e040
// Address: 0x17e040 - 0x17e054
void entry_0017e040_0x17e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e040_0x17e040");
#endif

    switch (ctx->pc) {
        case 0x17e050u: goto label_17e050;
        default: break;
    }

    ctx->pc = 0x17e040u;

    // 0x17e040: 0x50900004  beql        $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E040u;
    {
        const bool branch_taken_0x17e040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x17e040) {
            ctx->pc = 0x17E044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E040u;
            // 0x17e044: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E054u;
            return;
        }
    }
    ctx->pc = 0x17E048u;
    // 0x17e048: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17E048u;
    SET_GPR_U32(ctx, 31, 0x17E050u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17E048u, 0x17E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E050u;
label_17e050:
    // 0x17e050: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17e050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x17e054u;
}
