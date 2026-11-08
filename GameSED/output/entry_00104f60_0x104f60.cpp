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

// Function: entry_00104f60
// Address: 0x104f60 - 0x104f64
void entry_00104f60_0x104f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f60_0x104f60");
#endif

    ctx->pc = 0x104f60u;

    // 0x104f60: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x104f64u;
}
