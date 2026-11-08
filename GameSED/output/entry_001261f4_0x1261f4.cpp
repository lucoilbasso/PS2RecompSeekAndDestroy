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

// Function: entry_001261f4
// Address: 0x1261f4 - 0x1261f8
void entry_001261f4_0x1261f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001261f4_0x1261f4");
#endif

    ctx->pc = 0x1261f4u;

    // 0x1261f4: 0x3442c900  ori         $v0, $v0, 0xC900
    ctx->pc = 0x1261f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51456);
    ctx->pc = 0x1261f8u;
}
