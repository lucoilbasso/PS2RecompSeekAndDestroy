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

// Function: entry_00176d30
// Address: 0x176d30 - 0x176d3c
void entry_00176d30_0x176d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176d30_0x176d30");
#endif

    ctx->pc = 0x176d30u;

    // 0x176d30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176d38: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->pc = 0x176d3cu;
}
