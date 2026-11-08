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

// Function: entry_001c2d34
// Address: 0x1c2d34 - 0x1c2d48
void entry_001c2d34_0x1c2d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2d34_0x1c2d34");
#endif

    ctx->pc = 0x1c2d34u;

    // 0x1c2d34: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1c2d34u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d38: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1c2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1c2d3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c2d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c2d40: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C2D40u;
    {
        const bool branch_taken_0x1c2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D40u;
        // 0x1c2d44: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d40) {
            ctx->pc = 0x1C2DFCu;
            return;
        }
    }
    ctx->pc = 0x1C2D48u;
}
