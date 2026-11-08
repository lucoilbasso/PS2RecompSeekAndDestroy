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

// Function: entry_0014d43c
// Address: 0x14d43c - 0x14d440
void entry_0014d43c_0x14d43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d43c_0x14d43c");
#endif

    ctx->pc = 0x14d43cu;

    // 0x14d43c: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x14d43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x14d440u;
}
