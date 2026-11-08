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

// Function: entry_001376f4
// Address: 0x1376f4 - 0x137700
void entry_001376f4_0x1376f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001376f4_0x1376f4");
#endif

    ctx->pc = 0x1376f4u;

    // 0x1376f4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1376f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1376f8: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1376F8u;
    {
        const bool branch_taken_0x1376f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1376f8) {
            ctx->pc = 0x1376FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1376F8u;
            // 0x1376fc: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137688u;
            return;
        }
    }
    ctx->pc = 0x137700u;
}
