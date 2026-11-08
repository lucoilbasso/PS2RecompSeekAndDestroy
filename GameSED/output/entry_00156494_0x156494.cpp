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

// Function: entry_00156494
// Address: 0x156494 - 0x1564b4
void entry_00156494_0x156494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156494_0x156494");
#endif

    switch (ctx->pc) {
        case 0x1564a8u: goto label_1564a8;
        default: break;
    }

    ctx->pc = 0x156494u;

    // 0x156494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156498: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156498u;
    {
        const bool branch_taken_0x156498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x156498) {
            ctx->pc = 0x15649Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156498u;
            // 0x15649c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1564B4u;
            return;
        }
    }
    ctx->pc = 0x1564A0u;
    // 0x1564a0: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x1564A0u;
    SET_GPR_U32(ctx, 31, 0x1564A8u);
    ctx->pc = 0x1564A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1564A0u;
    // 0x1564a4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1564A0u, 0x1564A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564A8u;
label_1564a8:
    // 0x1564a8: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A8u;
        // 0x1564ac: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x1565FCu;
            return;
        }
    }
    ctx->pc = 0x1564B0u;
    // 0x1564b0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x1564b4u;
}
