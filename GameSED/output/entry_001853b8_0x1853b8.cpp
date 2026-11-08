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

// Function: entry_001853b8
// Address: 0x1853b8 - 0x1853bc
void entry_001853b8_0x1853b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001853b8_0x1853b8");
#endif

    ctx->pc = 0x1853b8u;

    // 0x1853b8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    ctx->pc = 0x1853bcu;
}
