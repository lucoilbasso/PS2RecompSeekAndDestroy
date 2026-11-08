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

// Function: entry_00120f78
// Address: 0x120f78 - 0x120f84
void entry_00120f78_0x120f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120f78_0x120f78");
#endif

    ctx->pc = 0x120f78u;

    // 0x120f78: 0x5480ffd5  bnel        $a0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x120f78) {
            ctx->pc = 0x120F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120F78u;
            // 0x120f7c: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120ED0u;
            return;
        }
    }
    ctx->pc = 0x120F80u;
    // 0x120f80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x120f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x120f84u;
}
