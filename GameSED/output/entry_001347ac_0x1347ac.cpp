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

// Function: entry_001347ac
// Address: 0x1347ac - 0x1347c0
void entry_001347ac_0x1347ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001347ac_0x1347ac");
#endif

    switch (ctx->pc) {
        case 0x1347b4u: goto label_1347b4;
        default: break;
    }

    ctx->pc = 0x1347acu;

    // 0x1347ac: 0xc061422  jal         func_185088
    ctx->pc = 0x1347ACu;
    SET_GPR_U32(ctx, 31, 0x1347B4u);
    ctx->pc = 0x1347B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347ACu;
    // 0x1347b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1347ACu, 0x1347B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347B4u;
label_1347b4:
    // 0x1347b4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1347B4u;
    {
        const bool branch_taken_0x1347b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B4u;
        // 0x1347b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347b4) {
            ctx->pc = 0x1348A4u;
            return;
        }
    }
    ctx->pc = 0x1347BCu;
    // 0x1347bc: 0x0  nop
    ctx->pc = 0x1347bcu;
    // NOP
    ctx->pc = 0x1347c0u;
}
