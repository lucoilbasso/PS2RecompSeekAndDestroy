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

// Function: entry_0017979c
// Address: 0x17979c - 0x1797a0
void entry_0017979c_0x17979c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017979c_0x17979c");
#endif

    ctx->pc = 0x17979cu;

    // 0x17979c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1797a0u;
}
