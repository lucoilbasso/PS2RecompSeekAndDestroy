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

// Function: entry_00141f84
// Address: 0x141f84 - 0x141f8c
void entry_00141f84_0x141f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f84_0x141f84");
#endif

    ctx->pc = 0x141f84u;

    // 0x141f84: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141F84u;
    {
        const bool branch_taken_0x141f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f84) {
            ctx->pc = 0x141F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F84u;
            // 0x141f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141FA0u;
            return;
        }
    }
    ctx->pc = 0x141F8Cu;
}
