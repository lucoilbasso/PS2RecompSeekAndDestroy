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

// Function: entry_001c1f78
// Address: 0x1c1f78 - 0x1c1f80
void entry_001c1f78_0x1c1f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f78_0x1c1f78");
#endif

    ctx->pc = 0x1c1f78u;

    // 0x1c1f78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1f7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c1f80u;
}
