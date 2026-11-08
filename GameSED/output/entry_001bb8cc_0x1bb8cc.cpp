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

// Function: entry_001bb8cc
// Address: 0x1bb8cc - 0x1bb8ec
void entry_001bb8cc_0x1bb8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb8cc_0x1bb8cc");
#endif

    switch (ctx->pc) {
        case 0x1bb8e4u: goto label_1bb8e4;
        default: break;
    }

    ctx->pc = 0x1bb8ccu;

    // 0x1bb8cc: 0x8ec4c090  lw          $a0, -0x3F70($s6)
    ctx->pc = 0x1bb8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
    // 0x1bb8d0: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB8D0u;
    {
        const bool branch_taken_0x1bb8d0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1bb8d0) {
            ctx->pc = 0x1BB8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB8D0u;
            // 0x1bb8d4: 0xaef5c180  sw          $s5, -0x3E80($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294951296), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB8ECu;
            return;
        }
    }
    ctx->pc = 0x1BB8D8u;
    // 0x1bb8d8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1bb8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1bb8dc: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB8DCu;
    SET_GPR_U32(ctx, 31, 0x1BB8E4u);
    ctx->pc = 0x1BB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB8DCu;
    // 0x1bb8e0: 0x2484b1e0  addiu       $a0, $a0, -0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB8DCu, 0x1BB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8E4u;
label_1bb8e4:
    // 0x1bb8e4: 0x8ec4c090  lw          $a0, -0x3F70($s6)
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
    // 0x1bb8e8: 0xaef5c180  sw          $s5, -0x3E80($s7)
    ctx->pc = 0x1bb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294951296), GPR_U32(ctx, 21));
    ctx->pc = 0x1bb8ecu;
}
