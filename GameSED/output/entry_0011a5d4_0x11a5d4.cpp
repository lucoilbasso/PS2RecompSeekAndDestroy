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

// Function: entry_0011a5d4
// Address: 0x11a5d4 - 0x11a5d8
void entry_0011a5d4_0x11a5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5d4_0x11a5d4");
#endif

    ctx->pc = 0x11a5d4u;

    // 0x11a5d4: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x11a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    ctx->pc = 0x11a5d8u;
}
