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

// Function: entry_001b430c
// Address: 0x1b430c - 0x1b4320
void entry_001b430c_0x1b430c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b430c_0x1b430c");
#endif

    ctx->pc = 0x1b430cu;

    // 0x1b430c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B430Cu;
    {
        const bool branch_taken_0x1b430c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b430c) {
            ctx->pc = 0x1B4320u;
            return;
        }
    }
    ctx->pc = 0x1B4314u;
    // 0x1b4314: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4318: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4318u;
    {
        const bool branch_taken_0x1b4318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4318) {
            ctx->pc = 0x1B431Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4318u;
            // 0x1b431c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4330u;
            return;
        }
    }
    ctx->pc = 0x1B4320u;
}
