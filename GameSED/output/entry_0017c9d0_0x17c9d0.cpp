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

// Function: entry_0017c9d0
// Address: 0x17c9d0 - 0x17c9d4
void entry_0017c9d0_0x17c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c9d0_0x17c9d0");
#endif

    ctx->pc = 0x17c9d0u;

    // 0x17c9d0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x17c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x17c9d4u;
}
