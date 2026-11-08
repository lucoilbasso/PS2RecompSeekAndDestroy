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

// Function: entry_00119844
// Address: 0x119844 - 0x119848
void entry_00119844_0x119844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119844_0x119844");
#endif

    ctx->pc = 0x119844u;

    // 0x119844: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x119844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x119848u;
}
