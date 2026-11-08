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

// Function: entry_0017f9a0
// Address: 0x17f9a0 - 0x17f9a4
void entry_0017f9a0_0x17f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f9a0_0x17f9a0");
#endif

    ctx->pc = 0x17f9a0u;

    // 0x17f9a0: 0x109202b  sltu        $a0, $t0, $t1
    ctx->pc = 0x17f9a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    ctx->pc = 0x17f9a4u;
}
