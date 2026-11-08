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

// Function: entry_0019d0f4
// Address: 0x19d0f4 - 0x19d0f8
void entry_0019d0f4_0x19d0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0f4_0x19d0f4");
#endif

    ctx->pc = 0x19d0f4u;

    // 0x19d0f4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->pc = 0x19d0f8u;
}
