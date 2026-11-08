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

// Function: entry_0019fb08
// Address: 0x19fb08 - 0x19fb1c
void entry_0019fb08_0x19fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb08_0x19fb08");
#endif

    ctx->pc = 0x19fb08u;

    // 0x19fb08: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB08u;
    {
        const bool branch_taken_0x19fb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb08) {
            ctx->pc = 0x19FB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB08u;
            // 0x19fb0c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB1Cu;
            return;
        }
    }
    ctx->pc = 0x19FB10u;
    // 0x19fb10: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fb14: 0x8c43f640  lw          $v1, -0x9C0($v0)
    ctx->pc = 0x19fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
    // 0x19fb18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x19fb1cu;
}
