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

// Function: entry_00125a90
// Address: 0x125a90 - 0x125aa0
void entry_00125a90_0x125a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a90_0x125a90");
#endif

    ctx->pc = 0x125a90u;

    // 0x125a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125a98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x125a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x125a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x125a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x125aa0u;
}
