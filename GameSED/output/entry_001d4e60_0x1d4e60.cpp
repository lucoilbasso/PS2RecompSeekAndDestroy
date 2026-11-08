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

// Function: entry_001d4e60
// Address: 0x1d4e60 - 0x1d4e70
void entry_001d4e60_0x1d4e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e60_0x1d4e60");
#endif

    ctx->pc = 0x1d4e60u;

    // 0x1d4e60: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d4e64: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4E64u;
    {
        const bool branch_taken_0x1d4e64 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E64u;
        // 0x1d4e68: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e64) {
            ctx->pc = 0x1D4E94u;
            return;
        }
    }
    ctx->pc = 0x1D4E6Cu;
    // 0x1d4e6c: 0x0  nop
    ctx->pc = 0x1d4e6cu;
    // NOP
    ctx->pc = 0x1d4e70u;
}
