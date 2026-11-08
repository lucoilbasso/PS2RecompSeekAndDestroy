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

// Function: entry_0016e1c0
// Address: 0x16e1c0 - 0x16e1cc
void entry_0016e1c0_0x16e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1c0_0x16e1c0");
#endif

    ctx->pc = 0x16e1c0u;

    // 0x16e1c0: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x16e1c4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E1C4u;
    {
        const bool branch_taken_0x16e1c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16e1c4) {
            ctx->pc = 0x16E1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1C4u;
            // 0x16e1c8: 0xac6000e0  sw          $zero, 0xE0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E1CCu;
            return;
        }
    }
    ctx->pc = 0x16E1CCu;
}
