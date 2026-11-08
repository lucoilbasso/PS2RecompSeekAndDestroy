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

// Function: entry_001d639c
// Address: 0x1d639c - 0x1d63a0
void entry_001d639c_0x1d639c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d639c_0x1d639c");
#endif

    ctx->pc = 0x1d639cu;

    // 0x1d639c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1d63a0u;
}
