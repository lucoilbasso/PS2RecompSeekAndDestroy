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

// Function: entry_001c7328
// Address: 0x1c7328 - 0x1c732c
void entry_001c7328_0x1c7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7328_0x1c7328");
#endif

    ctx->pc = 0x1c7328u;

    // 0x1c7328: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x1c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->pc = 0x1c732cu;
}
