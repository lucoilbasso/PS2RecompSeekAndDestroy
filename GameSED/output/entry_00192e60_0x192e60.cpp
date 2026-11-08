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

// Function: entry_00192e60
// Address: 0x192e60 - 0x192e7c
void entry_00192e60_0x192e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192e60_0x192e60");
#endif

    ctx->pc = 0x192e60u;

    // 0x192e60: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x192e64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192e68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192e74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192e78: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x192e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    ctx->pc = 0x192e7cu;
}
