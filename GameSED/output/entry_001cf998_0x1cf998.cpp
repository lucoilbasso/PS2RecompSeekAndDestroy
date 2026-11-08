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

// Function: entry_001cf998
// Address: 0x1cf998 - 0x1cf9a4
void entry_001cf998_0x1cf998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf998_0x1cf998");
#endif

    ctx->pc = 0x1cf998u;

    // 0x1cf998: 0x501013d  bgez        $t0, . + 4 + (0x13D << 2)
    ctx->pc = 0x1CF998u;
    {
        const bool branch_taken_0x1cf998 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1CF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF998u;
        // 0x1cf99c: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf998) {
            ctx->pc = 0x1CFE90u;
            return;
        }
    }
    ctx->pc = 0x1CF9A0u;
    // 0x1cf9a0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1cf9a4u;
}
