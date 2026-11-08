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

// Function: entry_001cbc74
// Address: 0x1cbc74 - 0x1cbc78
void entry_001cbc74_0x1cbc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc74_0x1cbc74");
#endif

    ctx->pc = 0x1cbc74u;

    // 0x1cbc74: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1cbc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x1cbc78u;
}
