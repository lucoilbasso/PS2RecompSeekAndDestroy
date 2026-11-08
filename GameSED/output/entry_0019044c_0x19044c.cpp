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

// Function: entry_0019044c
// Address: 0x19044c - 0x190450
void entry_0019044c_0x19044c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019044c_0x19044c");
#endif

    ctx->pc = 0x19044cu;

    // 0x19044c: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x19044cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    ctx->pc = 0x190450u;
}
