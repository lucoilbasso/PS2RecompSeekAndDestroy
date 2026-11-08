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

// Function: entry_001c8b38
// Address: 0x1c8b38 - 0x1c8b3c
void entry_001c8b38_0x1c8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8b38_0x1c8b38");
#endif

    ctx->pc = 0x1c8b38u;

    // 0x1c8b38: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1c8b38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->pc = 0x1c8b3cu;
}
