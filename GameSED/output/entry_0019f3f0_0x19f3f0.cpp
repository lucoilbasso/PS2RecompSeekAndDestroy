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

// Function: entry_0019f3f0
// Address: 0x19f3f0 - 0x19f3fc
void entry_0019f3f0_0x19f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f3f0_0x19f3f0");
#endif

    ctx->pc = 0x19f3f0u;

    // 0x19f3f0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x19f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x19f3f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f3f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x19f3fcu;
}
