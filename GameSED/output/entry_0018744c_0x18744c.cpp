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

// Function: entry_0018744c
// Address: 0x18744c - 0x187454
void entry_0018744c_0x18744c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018744c_0x18744c");
#endif

    ctx->pc = 0x18744cu;

    // 0x18744c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x187450: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x187450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    ctx->pc = 0x187454u;
}
