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

// Function: entry_001b41a4
// Address: 0x1b41a4 - 0x1b41b8
void entry_001b41a4_0x1b41a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b41a4_0x1b41a4");
#endif

    ctx->pc = 0x1b41a4u;

    // 0x1b41a4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B41A4u;
    {
        const bool branch_taken_0x1b41a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b41a4) {
            ctx->pc = 0x1B41B8u;
            return;
        }
    }
    ctx->pc = 0x1B41ACu;
    // 0x1b41ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b41b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B41B0u;
    {
        const bool branch_taken_0x1b41b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41b0) {
            ctx->pc = 0x1B41B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B41B0u;
            // 0x1b41b4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B41C8u;
            return;
        }
    }
    ctx->pc = 0x1B41B8u;
}
