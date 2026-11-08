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

// Function: entry_0017ac0c
// Address: 0x17ac0c - 0x17ac10
void entry_0017ac0c_0x17ac0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac0c_0x17ac0c");
#endif

    ctx->pc = 0x17ac0cu;

    // 0x17ac0c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x17ac10u;
}
