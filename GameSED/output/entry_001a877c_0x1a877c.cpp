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

// Function: entry_001a877c
// Address: 0x1a877c - 0x1a8780
void entry_001a877c_0x1a877c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a877c_0x1a877c");
#endif

    ctx->pc = 0x1a877cu;

    // 0x1a877c: 0x28820c40  slti        $v0, $a0, 0xC40
    ctx->pc = 0x1a877cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
    ctx->pc = 0x1a8780u;
}
