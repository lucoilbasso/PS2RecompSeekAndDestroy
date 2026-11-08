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

// Function: entry_001a8640
// Address: 0x1a8640 - 0x1a8644
void entry_001a8640_0x1a8640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8640_0x1a8640");
#endif

    ctx->pc = 0x1a8640u;

    // 0x1a8640: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a8640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1a8644u;
}
