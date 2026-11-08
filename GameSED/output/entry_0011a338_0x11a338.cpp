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

// Function: entry_0011a338
// Address: 0x11a338 - 0x11a33c
void entry_0011a338_0x11a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a338_0x11a338");
#endif

    ctx->pc = 0x11a338u;

    // 0x11a338: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x11a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x11a33cu;
}
