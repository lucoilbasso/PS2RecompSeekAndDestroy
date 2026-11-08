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

// Function: entry_0013c23c
// Address: 0x13c23c - 0x13c240
void entry_0013c23c_0x13c23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c23c_0x13c23c");
#endif

    ctx->pc = 0x13c23cu;

    // 0x13c23c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x13c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    ctx->pc = 0x13c240u;
}
