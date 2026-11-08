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

// Function: entry_001a86dc
// Address: 0x1a86dc - 0x1a86e0
void entry_001a86dc_0x1a86dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86dc_0x1a86dc");
#endif

    ctx->pc = 0x1a86dcu;

    // 0x1a86dc: 0x28820c40  slti        $v0, $a0, 0xC40
    ctx->pc = 0x1a86dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
    ctx->pc = 0x1a86e0u;
}
