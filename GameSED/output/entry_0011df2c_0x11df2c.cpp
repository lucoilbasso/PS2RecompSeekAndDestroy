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

// Function: entry_0011df2c
// Address: 0x11df2c - 0x11df34
void entry_0011df2c_0x11df2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df2c_0x11df2c");
#endif

    ctx->pc = 0x11df2cu;

    // 0x11df2c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF2Cu;
    {
        const bool branch_taken_0x11df2c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF2Cu;
        // 0x11df30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df2c) {
            ctx->pc = 0x11DF40u;
            return;
        }
    }
    ctx->pc = 0x11DF34u;
}
