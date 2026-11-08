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

// Function: entry_001a2758
// Address: 0x1a2758 - 0x1a2764
void entry_001a2758_0x1a2758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2758_0x1a2758");
#endif

    ctx->pc = 0x1a2758u;

    // 0x1a2758: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a275c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A275Cu;
    {
        const bool branch_taken_0x1a275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A275Cu;
        // 0x1a2760: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a275c) {
            ctx->pc = 0x1A2770u;
            return;
        }
    }
    ctx->pc = 0x1A2764u;
}
