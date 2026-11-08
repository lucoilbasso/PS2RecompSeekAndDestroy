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

// Function: entry_00155f08
// Address: 0x155f08 - 0x155f1c
void entry_00155f08_0x155f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f08_0x155f08");
#endif

    ctx->pc = 0x155f08u;

    // 0x155f08: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x155f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x155f0c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x155f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x155f10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155f14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x155f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155f18: 0xac830184  sw          $v1, 0x184($a0)
    ctx->pc = 0x155f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 3));
    ctx->pc = 0x155f1cu;
}
