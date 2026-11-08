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

// Function: entry_0014105c
// Address: 0x14105c - 0x141060
void entry_0014105c_0x14105c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014105c_0x14105c");
#endif

    ctx->pc = 0x14105cu;

    // 0x14105c: 0x32830070  andi        $v1, $s4, 0x70
    ctx->pc = 0x14105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
    ctx->pc = 0x141060u;
}
