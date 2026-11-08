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

// Function: entry_001a83a0
// Address: 0x1a83a0 - 0x1a83b8
void entry_001a83a0_0x1a83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a83a0_0x1a83a0");
#endif

    switch (ctx->pc) {
        case 0x1a83b0u: goto label_1a83b0;
        default: break;
    }

    ctx->pc = 0x1a83a0u;

    // 0x1a83a0: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A83A0u;
    {
        const bool branch_taken_0x1a83a0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a83a0) {
            ctx->pc = 0x1A83A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A83A0u;
            // 0x1a83a4: 0x52823  negu        $a1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A83B8u;
            return;
        }
    }
    ctx->pc = 0x1A83A8u;
    // 0x1a83a8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A83A8u;
    SET_GPR_U32(ctx, 31, 0x1A83B0u);
    ctx->pc = 0x1A83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83A8u;
    // 0x1a83ac: 0x2684d930  addiu       $a0, $s4, -0x26D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A83A8u, 0x1A83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83B0u;
label_1a83b0:
    // 0x1a83b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A83B0u;
    {
        const bool branch_taken_0x1a83b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83B0u;
        // 0x1a83b4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83b0) {
            ctx->pc = 0x1A83C4u;
            return;
        }
    }
    ctx->pc = 0x1A83B8u;
}
