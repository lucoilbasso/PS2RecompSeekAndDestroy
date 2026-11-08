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

// Function: entry_001bd9ac
// Address: 0x1bd9ac - 0x1bd9b8
void entry_001bd9ac_0x1bd9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd9ac_0x1bd9ac");
#endif

    ctx->pc = 0x1bd9acu;

    // 0x1bd9ac: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x1bd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x1bd9b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BD9B0u;
    {
        const bool branch_taken_0x1bd9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd9b0) {
            ctx->pc = 0x1BD9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD9B0u;
            // 0x1bd9b4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD9B8u;
            return;
        }
    }
    ctx->pc = 0x1BD9B8u;
}
