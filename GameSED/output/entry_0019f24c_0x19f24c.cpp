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

// Function: entry_0019f24c
// Address: 0x19f24c - 0x19f250
void entry_0019f24c_0x19f24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f24c_0x19f24c");
#endif

    ctx->pc = 0x19f24cu;

    // 0x19f24c: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x19f250u;
}
