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

// Function: entry_0019cb88
// Address: 0x19cb88 - 0x19cb8c
void entry_0019cb88_0x19cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb88_0x19cb88");
#endif

    ctx->pc = 0x19cb88u;

    // 0x19cb88: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x19cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x19cb8cu;
}
