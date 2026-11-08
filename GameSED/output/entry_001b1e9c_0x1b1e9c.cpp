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

// Function: entry_001b1e9c
// Address: 0x1b1e9c - 0x1b1ee0
void entry_001b1e9c_0x1b1e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1e9c_0x1b1e9c");
#endif

    ctx->pc = 0x1b1e9cu;

    // 0x1b1e9c: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1b1ea0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1b1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b1ea4: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1b1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1b1ea8: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1b1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b1eac: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1b1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1b1eb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b1eb4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1b1eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1b1eb8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1b1ebc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b1ec0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1ec4: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1b1ec8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b1ecc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b1ed0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b1ed4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b1ed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b1ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1edc: 0x0  nop
    ctx->pc = 0x1b1edcu;
    // NOP
    ctx->pc = 0x1b1ee0u;
}
