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

// Function: entry_00171f84
// Address: 0x171f84 - 0x171f8c
void entry_00171f84_0x171f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f84_0x171f84");
#endif

    ctx->pc = 0x171f84u;

    // 0x171f84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x171f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x171f88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x171f88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    ctx->pc = 0x171f8cu;
}
