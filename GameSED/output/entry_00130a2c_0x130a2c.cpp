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

// Function: entry_00130a2c
// Address: 0x130a2c - 0x130a34
void entry_00130a2c_0x130a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130a2c_0x130a2c");
#endif

    ctx->pc = 0x130a2cu;

    // 0x130a2c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x130a2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x130a30: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x130a30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x130a34u;
}
