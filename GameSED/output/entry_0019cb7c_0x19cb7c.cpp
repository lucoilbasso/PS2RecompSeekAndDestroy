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

// Function: entry_0019cb7c
// Address: 0x19cb7c - 0x19cb80
void entry_0019cb7c_0x19cb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb7c_0x19cb7c");
#endif

    ctx->pc = 0x19cb7cu;

    // 0x19cb7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x19cb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x19cb80u;
}
