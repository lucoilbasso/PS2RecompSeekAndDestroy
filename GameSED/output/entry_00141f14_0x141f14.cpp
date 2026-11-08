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

// Function: entry_00141f14
// Address: 0x141f14 - 0x141f1c
void entry_00141f14_0x141f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f14_0x141f14");
#endif

    ctx->pc = 0x141f14u;

    // 0x141f14: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141F14u;
    {
        const bool branch_taken_0x141f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f14) {
            ctx->pc = 0x141F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F14u;
            // 0x141f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141F30u;
            return;
        }
    }
    ctx->pc = 0x141F1Cu;
}
