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

// Function: entry_00192e98
// Address: 0x192e98 - 0x192eb4
void entry_00192e98_0x192e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192e98_0x192e98");
#endif

    ctx->pc = 0x192e98u;

    // 0x192e98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x192e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192ea0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x192ea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192eac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x192eb0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x192eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x192eb4u;
}
