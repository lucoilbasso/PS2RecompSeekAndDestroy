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

// Function: entry_0011a560
// Address: 0x11a560 - 0x11a564
void entry_0011a560_0x11a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a560_0x11a560");
#endif

    ctx->pc = 0x11a560u;

    // 0x11a560: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x11a560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x11a564u;
}
