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

// Function: entry_001a5140
// Address: 0x1a5140 - 0x1a514c
void entry_001a5140_0x1a5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5140_0x1a5140");
#endif

    ctx->pc = 0x1a5140u;

    // 0x1a5140: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a5140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a5144: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5144u;
    {
        const bool branch_taken_0x1a5144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5144u;
        // 0x1a5148: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5144) {
            ctx->pc = 0x1A5158u;
            return;
        }
    }
    ctx->pc = 0x1A514Cu;
}
