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

// Function: entry_001afa78
// Address: 0x1afa78 - 0x1afa88
void entry_001afa78_0x1afa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afa78_0x1afa78");
#endif

    switch (ctx->pc) {
        case 0x1afa80u: goto label_1afa80;
        default: break;
    }

    ctx->pc = 0x1afa78u;

    // 0x1afa78: 0xc06c0e8  jal         func_1B03A0
    ctx->pc = 0x1AFA78u;
    SET_GPR_U32(ctx, 31, 0x1AFA80u);
    ctx->pc = 0x1AFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA78u;
    // 0x1afa7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03A0u, 0x1AFA78u, 0x1AFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA80u;
label_1afa80:
    // 0x1afa80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFA80u;
    {
        const bool branch_taken_0x1afa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA80u;
        // 0x1afa84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa80) {
            ctx->pc = 0x1AFA90u;
            return;
        }
    }
    ctx->pc = 0x1AFA88u;
}
