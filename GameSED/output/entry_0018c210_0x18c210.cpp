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

// Function: entry_0018c210
// Address: 0x18c210 - 0x18c228
void entry_0018c210_0x18c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c210_0x18c210");
#endif

    ctx->pc = 0x18c210u;

    // 0x18c210: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x18c210u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x18c214: 0x26e20002  addiu       $v0, $s7, 0x2
    ctx->pc = 0x18c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    // 0x18c218: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x18c21c: 0x324182a  slt         $v1, $t9, $a0
    ctx->pc = 0x18c21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18c220: 0x1460ff09  bnez        $v1, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x18C220u;
    {
        const bool branch_taken_0x18c220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C220u;
        // 0x18c224: 0x57b80b  movn        $s7, $v0, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c220) {
            ctx->pc = 0x18BE48u;
            return;
        }
    }
    ctx->pc = 0x18C228u;
}
