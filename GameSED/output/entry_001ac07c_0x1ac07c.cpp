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

// Function: entry_001ac07c
// Address: 0x1ac07c - 0x1ac08c
void entry_001ac07c_0x1ac07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac07c_0x1ac07c");
#endif

    ctx->pc = 0x1ac07cu;

    // 0x1ac07c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ac080: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ac084: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1ac084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x1ac088: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1ac088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->pc = 0x1ac08cu;
}
