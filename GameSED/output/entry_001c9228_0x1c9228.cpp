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

// Function: entry_001c9228
// Address: 0x1c9228 - 0x1c9230
void entry_001c9228_0x1c9228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9228_0x1c9228");
#endif

    ctx->pc = 0x1c9228u;

    // 0x1c9228: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c922c: 0x466825  or          $t5, $v0, $a2
    ctx->pc = 0x1c922cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->pc = 0x1c9230u;
}
