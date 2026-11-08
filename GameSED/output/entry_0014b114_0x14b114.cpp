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

// Function: entry_0014b114
// Address: 0x14b114 - 0x14b11c
void entry_0014b114_0x14b114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b114_0x14b114");
#endif

    ctx->pc = 0x14b114u;

    // 0x14b114: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B114u;
    {
        const bool branch_taken_0x14b114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x14b114) {
            ctx->pc = 0x14B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B114u;
            // 0x14b118: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B12Cu;
            return;
        }
    }
    ctx->pc = 0x14B11Cu;
}
