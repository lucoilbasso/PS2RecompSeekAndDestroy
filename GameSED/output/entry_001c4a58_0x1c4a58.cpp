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

// Function: entry_001c4a58
// Address: 0x1c4a58 - 0x1c4a5c
void entry_001c4a58_0x1c4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a58_0x1c4a58");
#endif

    ctx->pc = 0x1c4a58u;

    // 0x1c4a58: 0x34028130  ori         $v0, $zero, 0x8130
    ctx->pc = 0x1c4a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    ctx->pc = 0x1c4a5cu;
}
