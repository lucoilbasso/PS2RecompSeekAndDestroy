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

// Function: entry_001a4fd8
// Address: 0x1a4fd8 - 0x1a4fe4
void entry_001a4fd8_0x1a4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fd8_0x1a4fd8");
#endif

    ctx->pc = 0x1a4fd8u;

    // 0x1a4fd8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a4fdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FDCu;
    {
        const bool branch_taken_0x1a4fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FDCu;
        // 0x1a4fe0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fdc) {
            ctx->pc = 0x1A4FF0u;
            return;
        }
    }
    ctx->pc = 0x1A4FE4u;
}
