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

// Function: entry_00187444
// Address: 0x187444 - 0x18744c
void entry_00187444_0x187444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187444_0x187444");
#endif

    ctx->pc = 0x187444u;

    // 0x187444: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x187448: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x187448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    ctx->pc = 0x18744cu;
}
