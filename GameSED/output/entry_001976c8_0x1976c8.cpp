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

// Function: entry_001976c8
// Address: 0x1976c8 - 0x1976d0
void entry_001976c8_0x1976c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001976c8_0x1976c8");
#endif

    ctx->pc = 0x1976c8u;

    // 0x1976c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1976cc: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x1976ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    ctx->pc = 0x1976d0u;
}
