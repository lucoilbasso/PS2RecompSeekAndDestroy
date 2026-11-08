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

// Function: entry_001ac178
// Address: 0x1ac178 - 0x1ac188
void entry_001ac178_0x1ac178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac178_0x1ac178");
#endif

    ctx->pc = 0x1ac178u;

    // 0x1ac178: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ac178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ac17c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1ac17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ac180: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AC180u;
    {
        const bool branch_taken_0x1ac180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC180u;
        // 0x1ac184: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac180) {
            ctx->pc = 0x1AC160u;
            return;
        }
    }
    ctx->pc = 0x1AC188u;
}
