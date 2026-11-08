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

// Function: entry_00119c08
// Address: 0x119c08 - 0x119c0c
void entry_00119c08_0x119c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119c08_0x119c08");
#endif

    ctx->pc = 0x119c08u;

    // 0x119c08: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x119c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x119c0cu;
}
