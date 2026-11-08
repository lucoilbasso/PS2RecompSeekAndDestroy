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

// Function: entry_001113a4
// Address: 0x1113a4 - 0x1113b8
void entry_001113a4_0x1113a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113a4_0x1113a4");
#endif

    switch (ctx->pc) {
        case 0x1113acu: goto label_1113ac;
        default: break;
    }

    ctx->pc = 0x1113a4u;

    // 0x1113a4: 0xc04171a  jal         func_105C68
    ctx->pc = 0x1113A4u;
    SET_GPR_U32(ctx, 31, 0x1113ACu);
    ctx->pc = 0x1113A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A4u;
    // 0x1113a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x1113A4u, 0x1113ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ACu;
label_1113ac:
    // 0x1113ac: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1113ACu;
    {
        const bool branch_taken_0x1113ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ACu;
        // 0x1113b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ac) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1113B4u;
    // 0x1113b4: 0x0  nop
    ctx->pc = 0x1113b4u;
    // NOP
    ctx->pc = 0x1113b8u;
}
