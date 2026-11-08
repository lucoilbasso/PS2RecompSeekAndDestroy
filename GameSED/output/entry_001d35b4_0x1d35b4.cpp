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

// Function: entry_001d35b4
// Address: 0x1d35b4 - 0x1d35bc
void entry_001d35b4_0x1d35b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d35b4_0x1d35b4");
#endif

    ctx->pc = 0x1d35b4u;

    // 0x1d35b4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D35B4u;
    {
        const bool branch_taken_0x1d35b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35B4u;
        // 0x1d35b8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35b4) {
            ctx->pc = 0x1D3590u;
            return;
        }
    }
    ctx->pc = 0x1D35BCu;
}
