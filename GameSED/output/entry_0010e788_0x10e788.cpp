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

// Function: entry_0010e788
// Address: 0x10e788 - 0x10e7a0
void entry_0010e788_0x10e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e788_0x10e788");
#endif

    ctx->pc = 0x10e788u;

    // 0x10e788: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E788u;
    {
        const bool branch_taken_0x10e788 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10e788) {
            ctx->pc = 0x10E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E788u;
            // 0x10e78c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E7A0u;
            return;
        }
    }
    ctx->pc = 0x10E790u;
    // 0x10e790: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x10e794: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x10e794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x10e798: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E798u;
    {
        const bool branch_taken_0x10e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E798u;
        // 0x10e79c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e798) {
            ctx->pc = 0x10E7C4u;
            return;
        }
    }
    ctx->pc = 0x10E7A0u;
}
