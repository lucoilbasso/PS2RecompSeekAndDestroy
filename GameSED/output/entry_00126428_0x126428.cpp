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

// Function: entry_00126428
// Address: 0x126428 - 0x12643c
void entry_00126428_0x126428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126428_0x126428");
#endif

    ctx->pc = 0x126428u;

    // 0x126428: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12642c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12642cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126434: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x126438: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x126438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->pc = 0x12643cu;
}
