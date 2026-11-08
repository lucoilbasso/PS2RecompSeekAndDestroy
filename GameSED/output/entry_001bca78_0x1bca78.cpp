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

// Function: entry_001bca78
// Address: 0x1bca78 - 0x1bca80
void entry_001bca78_0x1bca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bca78_0x1bca78");
#endif

    ctx->pc = 0x1bca78u;

    // 0x1bca78: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1bca7c: 0x0  nop
    ctx->pc = 0x1bca7cu;
    // NOP
    ctx->pc = 0x1bca80u;
}
