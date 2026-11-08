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

// Function: entry_001b6b54
// Address: 0x1b6b54 - 0x1b6b60
void entry_001b6b54_0x1b6b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b54_0x1b6b54");
#endif

    ctx->pc = 0x1b6b54u;

    // 0x1b6b54: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6B54u;
    {
        const bool branch_taken_0x1b6b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b54) {
            ctx->pc = 0x1B6B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6B54u;
            // 0x1b6b58: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6B80u;
            return;
        }
    }
    ctx->pc = 0x1B6B5Cu;
    // 0x1b6b5c: 0x0  nop
    ctx->pc = 0x1b6b5cu;
    // NOP
    ctx->pc = 0x1b6b60u;
}
