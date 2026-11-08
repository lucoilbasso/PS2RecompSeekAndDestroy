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

// Function: entry_001b0f40
// Address: 0x1b0f40 - 0x1b0f4c
void entry_001b0f40_0x1b0f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f40_0x1b0f40");
#endif

    ctx->pc = 0x1b0f40u;

    // 0x1b0f40: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0f40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0f44: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
    ctx->pc = 0x1B0F44u;
    {
        const bool branch_taken_0x1b0f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F44u;
        // 0x1b0f48: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f44) {
            ctx->pc = 0x1B09D8u;
            return;
        }
    }
    ctx->pc = 0x1B0F4Cu;
}
