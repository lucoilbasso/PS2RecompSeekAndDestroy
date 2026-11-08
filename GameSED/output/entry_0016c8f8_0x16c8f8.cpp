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

// Function: entry_0016c8f8
// Address: 0x16c8f8 - 0x16c910
void entry_0016c8f8_0x16c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c8f8_0x16c8f8");
#endif

    switch (ctx->pc) {
        case 0x16c900u: goto label_16c900;
        default: break;
    }

    ctx->pc = 0x16c8f8u;

    // 0x16c8f8: 0xc061422  jal         func_185088
    ctx->pc = 0x16C8F8u;
    SET_GPR_U32(ctx, 31, 0x16C900u);
    ctx->pc = 0x16C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8F8u;
    // 0x16c8fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16C8F8u, 0x16C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C900u;
label_16c900:
    // 0x16c900: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x16c904: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16C904u;
    {
        const bool branch_taken_0x16c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C904u;
        // 0x16c908: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c904) {
            ctx->pc = 0x16C94Cu;
            return;
        }
    }
    ctx->pc = 0x16C90Cu;
    // 0x16c90c: 0x0  nop
    ctx->pc = 0x16c90cu;
    // NOP
    ctx->pc = 0x16c910u;
}
