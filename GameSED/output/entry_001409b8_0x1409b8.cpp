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

// Function: entry_001409b8
// Address: 0x1409b8 - 0x1409bc
void entry_001409b8_0x1409b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001409b8_0x1409b8");
#endif

    ctx->pc = 0x1409b8u;

    // 0x1409b8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1409b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1409bcu;
}
