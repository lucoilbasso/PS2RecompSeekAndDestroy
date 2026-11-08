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

// Function: entry_00116f60
// Address: 0x116f60 - 0x116f7c
void entry_00116f60_0x116f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f60_0x116f60");
#endif

    ctx->pc = 0x116f60u;

    // 0x116f60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x116f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x116f64: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116f6c: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x116f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x116f70: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x116f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x116f74: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x116F74u;
    {
        const bool branch_taken_0x116f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F74u;
        // 0x116f78: 0x3250ffff  andi        $s0, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f74) {
            ctx->pc = 0x116E88u;
            return;
        }
    }
    ctx->pc = 0x116F7Cu;
}
