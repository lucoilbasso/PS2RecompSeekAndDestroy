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

// Function: entry_0013fd2c
// Address: 0x13fd2c - 0x13fd34
void entry_0013fd2c_0x13fd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fd2c_0x13fd2c");
#endif

    ctx->pc = 0x13fd2cu;

    // 0x13fd2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FD2Cu;
    {
        const bool branch_taken_0x13fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd2c) {
            ctx->pc = 0x13FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD2Cu;
            // 0x13fd30: 0xac400144  sw          $zero, 0x144($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD34u;
            return;
        }
    }
    ctx->pc = 0x13FD34u;
}
