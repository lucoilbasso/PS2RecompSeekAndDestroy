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

// Function: entry_0011cfd0
// Address: 0x11cfd0 - 0x11cfd4
void entry_0011cfd0_0x11cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cfd0_0x11cfd0");
#endif

    ctx->pc = 0x11cfd0u;

    // 0x11cfd0: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x11cfd4u;
}
