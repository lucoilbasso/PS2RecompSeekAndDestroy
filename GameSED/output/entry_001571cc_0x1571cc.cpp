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

// Function: entry_001571cc
// Address: 0x1571cc - 0x1571d0
void entry_001571cc_0x1571cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001571cc_0x1571cc");
#endif

    ctx->pc = 0x1571ccu;

    // 0x1571cc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1571ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x1571d0u;
}
