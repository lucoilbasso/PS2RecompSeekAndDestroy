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

// Function: entry_001a8d40
// Address: 0x1a8d40 - 0x1a8d44
void entry_001a8d40_0x1a8d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d40_0x1a8d40");
#endif

    ctx->pc = 0x1a8d40u;

    // 0x1a8d40: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8d40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1a8d44u;
}
