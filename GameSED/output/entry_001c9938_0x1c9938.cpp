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

// Function: entry_001c9938
// Address: 0x1c9938 - 0x1c993c
void entry_001c9938_0x1c9938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9938_0x1c9938");
#endif

    ctx->pc = 0x1c9938u;

    // 0x1c9938: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1c9938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x1c993cu;
}
