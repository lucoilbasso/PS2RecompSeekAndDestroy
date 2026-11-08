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

// Function: entry_00134ae0
// Address: 0x134ae0 - 0x134af0
void entry_00134ae0_0x134ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ae0_0x134ae0");
#endif

    switch (ctx->pc) {
        case 0x134ae8u: goto label_134ae8;
        default: break;
    }

    ctx->pc = 0x134ae0u;

    // 0x134ae0: 0xc04e704  jal         func_139C10
    ctx->pc = 0x134AE0u;
    SET_GPR_U32(ctx, 31, 0x134AE8u);
    ctx->pc = 0x134AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AE0u;
    // 0x134ae4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C10u, 0x134AE0u, 0x134AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AE8u;
label_134ae8:
    // 0x134ae8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AE8u;
        // 0x134aec: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134AF0u;
}
