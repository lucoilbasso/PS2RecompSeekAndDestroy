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

// Function: entry_001c83f8
// Address: 0x1c83f8 - 0x1c83fc
void entry_001c83f8_0x1c83f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c83f8_0x1c83f8");
#endif

    ctx->pc = 0x1c83f8u;

    // 0x1c83f8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1c83fcu;
}
