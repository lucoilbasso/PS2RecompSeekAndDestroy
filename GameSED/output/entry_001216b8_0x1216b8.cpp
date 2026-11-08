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

// Function: entry_001216b8
// Address: 0x1216b8 - 0x1216c0
void entry_001216b8_0x1216b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001216b8_0x1216b8");
#endif

    ctx->pc = 0x1216b8u;

    // 0x1216b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1216b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1216bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1216bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1216c0u;
}
