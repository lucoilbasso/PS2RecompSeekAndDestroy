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

// Function: entry_001262e8
// Address: 0x1262e8 - 0x1262f8
void entry_001262e8_0x1262e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001262e8_0x1262e8");
#endif

    ctx->pc = 0x1262e8u;

    // 0x1262e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1262e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1262ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1262ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1262f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1262f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1262f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1262f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->pc = 0x1262f8u;
}
