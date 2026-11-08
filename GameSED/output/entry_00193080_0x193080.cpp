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

// Function: entry_00193080
// Address: 0x193080 - 0x19309c
void entry_00193080_0x193080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193080_0x193080");
#endif

    ctx->pc = 0x193080u;

    // 0x193080: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x193084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19308c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193094: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193094u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x193098: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x193098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x19309cu;
}
