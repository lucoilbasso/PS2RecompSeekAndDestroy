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

// Function: entry_00116d1c
// Address: 0x116d1c - 0x116d28
void entry_00116d1c_0x116d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d1c_0x116d1c");
#endif

    ctx->pc = 0x116d1cu;

    // 0x116d1c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116d20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116D20u;
    {
        const bool branch_taken_0x116d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D20u;
        // 0x116d24: 0xac4400b0  sw          $a0, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d20) {
            ctx->pc = 0x116D38u;
            return;
        }
    }
    ctx->pc = 0x116D28u;
}
