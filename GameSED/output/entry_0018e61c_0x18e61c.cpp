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

// Function: entry_0018e61c
// Address: 0x18e61c - 0x18e620
void entry_0018e61c_0x18e61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e61c_0x18e61c");
#endif

    ctx->pc = 0x18e61cu;

    // 0x18e61c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x18e620u;
}
