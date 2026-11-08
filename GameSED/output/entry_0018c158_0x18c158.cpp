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

// Function: entry_0018c158
// Address: 0x18c158 - 0x18c15c
void entry_0018c158_0x18c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c158_0x18c158");
#endif

    ctx->pc = 0x18c158u;

    // 0x18c158: 0x33c22000  andi        $v0, $fp, 0x2000
    ctx->pc = 0x18c158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
    ctx->pc = 0x18c15cu;
}
