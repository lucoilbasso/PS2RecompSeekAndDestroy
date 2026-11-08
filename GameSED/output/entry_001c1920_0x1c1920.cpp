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

// Function: entry_001c1920
// Address: 0x1c1920 - 0x1c1924
void entry_001c1920_0x1c1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1920_0x1c1920");
#endif

    ctx->pc = 0x1c1920u;

    // 0x1c1920: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    ctx->pc = 0x1c1924u;
}
