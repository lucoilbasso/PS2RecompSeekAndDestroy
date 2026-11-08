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

// Function: entry_001b1e1c
// Address: 0x1b1e1c - 0x1b1e48
void entry_001b1e1c_0x1b1e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1e1c_0x1b1e1c");
#endif

    switch (ctx->pc) {
        case 0x1b1e24u: goto label_1b1e24;
        default: break;
    }

    ctx->pc = 0x1b1e1cu;

    // 0x1b1e1c: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E24u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1E1Cu, 0x1B1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E24u;
label_1b1e24:
    // 0x1b1e24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1e28: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1b1e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b1e2c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1b1e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1b1e30: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1b1e34: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1b1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1b1e38: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1b1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b1e3c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1E3Cu;
    {
        const bool branch_taken_0x1b1e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e3c) {
            ctx->pc = 0x1B1E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E3Cu;
            // 0x1b1e40: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E78u;
            return;
        }
    }
    ctx->pc = 0x1B1E44u;
    // 0x1b1e44: 0x0  nop
    ctx->pc = 0x1b1e44u;
    // NOP
    ctx->pc = 0x1b1e48u;
}
