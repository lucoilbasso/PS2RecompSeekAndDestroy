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

// Function: entry_001d3b5c
// Address: 0x1d3b5c - 0x1d3b94
void entry_001d3b5c_0x1d3b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b5c_0x1d3b5c");
#endif

    ctx->pc = 0x1d3b5cu;

    // 0x1d3b5c: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D3B5Cu;
    {
        const bool branch_taken_0x1d3b5c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B5Cu;
        // 0x1d3b60: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b5c) {
            ctx->pc = 0x1D3B94u;
            return;
        }
    }
    ctx->pc = 0x1D3B64u;
    // 0x1d3b64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3b68: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3B68u;
    {
        const bool branch_taken_0x1d3b68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B68u;
        // 0x1d3b6c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b68) {
            ctx->pc = 0x1D3B94u;
            return;
        }
    }
    ctx->pc = 0x1D3B70u;
    // 0x1d3b70: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1d3b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d3b74: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x1d3b74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x1d3b78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3b7c: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1d3b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d3b80: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1d3b84: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3b88: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d3b8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d3b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d3b90: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1d3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x1d3b94u;
}
