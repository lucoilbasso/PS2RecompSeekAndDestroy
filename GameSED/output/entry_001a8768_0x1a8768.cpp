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

// Function: entry_001a8768
// Address: 0x1a8768 - 0x1a876c
void entry_001a8768_0x1a8768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8768_0x1a8768");
#endif

    ctx->pc = 0x1a8768u;

    // 0x1a8768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1a876cu;
}
