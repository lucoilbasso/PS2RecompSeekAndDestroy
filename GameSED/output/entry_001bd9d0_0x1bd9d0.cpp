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

// Function: entry_001bd9d0
// Address: 0x1bd9d0 - 0x1bd9dc
void entry_001bd9d0_0x1bd9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd9d0_0x1bd9d0");
#endif

    ctx->pc = 0x1bd9d0u;

    // 0x1bd9d0: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x1bd9d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BD9D4u;
    {
        const bool branch_taken_0x1bd9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9d4) {
            ctx->pc = 0x1BD9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD9D4u;
            // 0x1bd9d8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9DCu;
            return;
        }
    }
    ctx->pc = 0x1BD9DCu;
}
