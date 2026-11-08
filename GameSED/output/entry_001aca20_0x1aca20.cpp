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

// Function: entry_001aca20
// Address: 0x1aca20 - 0x1aca2c
void entry_001aca20_0x1aca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aca20_0x1aca20");
#endif

    ctx->pc = 0x1aca20u;

    // 0x1aca20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aca24: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1aca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x1aca28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1aca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x1aca2cu;
}
