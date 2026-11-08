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

// Function: entry_001a8b68
// Address: 0x1a8b68 - 0x1a8b6c
void entry_001a8b68_0x1a8b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8b68_0x1a8b68");
#endif

    ctx->pc = 0x1a8b68u;

    // 0x1a8b68: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8b68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1a8b6cu;
}
