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

// Function: entry_0016fb44
// Address: 0x16fb44 - 0x16fb48
void entry_0016fb44_0x16fb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb44_0x16fb44");
#endif

    ctx->pc = 0x16fb44u;

    // 0x16fb44: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x16fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x16fb48u;
}
