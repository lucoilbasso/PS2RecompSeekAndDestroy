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

// Function: entry_001caa80
// Address: 0x1caa80 - 0x1caa84
void entry_001caa80_0x1caa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa80_0x1caa80");
#endif

    ctx->pc = 0x1caa80u;

    // 0x1caa80: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1caa80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->pc = 0x1caa84u;
}
