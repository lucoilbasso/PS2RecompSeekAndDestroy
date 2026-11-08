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

// Function: entry_001d42f8
// Address: 0x1d42f8 - 0x1d4300
void entry_001d42f8_0x1d42f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d42f8_0x1d42f8");
#endif

    ctx->pc = 0x1d42f8u;

    // 0x1d42f8: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D42F8u;
    {
        const bool branch_taken_0x1d42f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42F8u;
        // 0x1d42fc: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42f8) {
            ctx->pc = 0x1D4328u;
            return;
        }
    }
    ctx->pc = 0x1D4300u;
}
