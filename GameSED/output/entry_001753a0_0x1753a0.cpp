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

// Function: entry_001753a0
// Address: 0x1753a0 - 0x1753cc
void entry_001753a0_0x1753a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001753a0_0x1753a0");
#endif

    ctx->pc = 0x1753a0u;

    // 0x1753a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1753a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1753a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1753a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1753a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1753a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1753ac: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1753acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1753b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1753b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1753b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1753b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1753b8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1753b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1753bc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1753bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1753c0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1753c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1753c4: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1753c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1753c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1753c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1753ccu;
}
