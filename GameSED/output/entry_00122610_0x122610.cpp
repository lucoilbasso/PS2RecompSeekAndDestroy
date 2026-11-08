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

// Function: entry_00122610
// Address: 0x122610 - 0x122620
void entry_00122610_0x122610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122610_0x122610");
#endif

    ctx->pc = 0x122610u;

    // 0x122610: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x122610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x122614: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x122614u;
    {
        const bool branch_taken_0x122614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x122614) {
            ctx->pc = 0x122618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122614u;
            // 0x122618: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225F0u;
            return;
        }
    }
    ctx->pc = 0x12261Cu;
    // 0x12261c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x12261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->pc = 0x122620u;
}
