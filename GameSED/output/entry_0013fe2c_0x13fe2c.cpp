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

// Function: entry_0013fe2c
// Address: 0x13fe2c - 0x13fe30
void entry_0013fe2c_0x13fe2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fe2c_0x13fe2c");
#endif

    ctx->pc = 0x13fe2cu;

    // 0x13fe2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x13fe30u;
}
