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

// Function: entry_001264c8
// Address: 0x1264c8 - 0x1264d8
void entry_001264c8_0x1264c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001264c8_0x1264c8");
#endif

    ctx->pc = 0x1264c8u;

    // 0x1264c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1264c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1264cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1264ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1264d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1264d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1264d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1264d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x1264d8u;
}
