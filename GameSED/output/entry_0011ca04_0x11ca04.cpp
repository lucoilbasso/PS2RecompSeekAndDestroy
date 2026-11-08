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

// Function: entry_0011ca04
// Address: 0x11ca04 - 0x11ca0c
void entry_0011ca04_0x11ca04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca04_0x11ca04");
#endif

    ctx->pc = 0x11ca04u;

    // 0x11ca04: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CA04u;
    {
        const bool branch_taken_0x11ca04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x11CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA04u;
        // 0x11ca08: 0x28c30003  slti        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca04) {
            ctx->pc = 0x11CA10u;
            return;
        }
    }
    ctx->pc = 0x11CA0Cu;
}
