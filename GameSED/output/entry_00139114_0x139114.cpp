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

// Function: entry_00139114
// Address: 0x139114 - 0x13911c
void entry_00139114_0x139114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139114_0x139114");
#endif

    ctx->pc = 0x139114u;

    // 0x139114: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x13911cu;
}
