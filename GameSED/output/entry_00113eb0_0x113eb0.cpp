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

// Function: entry_00113eb0
// Address: 0x113eb0 - 0x113eb4
void entry_00113eb0_0x113eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113eb0_0x113eb0");
#endif

    ctx->pc = 0x113eb0u;

    // 0x113eb0: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x113eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    ctx->pc = 0x113eb4u;
}
