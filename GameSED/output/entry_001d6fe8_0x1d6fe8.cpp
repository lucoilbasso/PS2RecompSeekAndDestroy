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

// Function: entry_001d6fe8
// Address: 0x1d6fe8 - 0x1d6ff8
void entry_001d6fe8_0x1d6fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6fe8_0x1d6fe8");
#endif

    ctx->pc = 0x1d6fe8u;

    // 0x1d6fe8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d6fec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6FECu;
    {
        const bool branch_taken_0x1d6fec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FECu;
        // 0x1d6ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fec) {
            ctx->pc = 0x1D701Cu;
            return;
        }
    }
    ctx->pc = 0x1D6FF4u;
    // 0x1d6ff4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1d6ff8u;
}
