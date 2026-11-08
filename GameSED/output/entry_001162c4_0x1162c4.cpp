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

// Function: entry_001162c4
// Address: 0x1162c4 - 0x1162c8
void entry_001162c4_0x1162c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162c4_0x1162c4");
#endif

    ctx->pc = 0x1162c4u;

    // 0x1162c4: 0x3c1e0024  lui         $fp, 0x24
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x1162c8u;
}
