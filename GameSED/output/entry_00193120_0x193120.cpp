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

// Function: entry_00193120
// Address: 0x193120 - 0x193138
void entry_00193120_0x193120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193120_0x193120");
#endif

    ctx->pc = 0x193120u;

    // 0x193120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193124: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x193128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19312c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19312cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193130: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193130u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x193134: 0xc6600194  lwc1        $f0, 0x194($s3)
    ctx->pc = 0x193134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x193138u;
}
