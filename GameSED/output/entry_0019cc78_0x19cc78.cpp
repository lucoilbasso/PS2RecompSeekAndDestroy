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

// Function: entry_0019cc78
// Address: 0x19cc78 - 0x19cc7c
void entry_0019cc78_0x19cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc78_0x19cc78");
#endif

    ctx->pc = 0x19cc78u;

    // 0x19cc78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x19cc7cu;
}
