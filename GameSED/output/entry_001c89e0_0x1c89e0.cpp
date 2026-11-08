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

// Function: entry_001c89e0
// Address: 0x1c89e0 - 0x1c89f4
void entry_001c89e0_0x1c89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c89e0_0x1c89e0");
#endif

    ctx->pc = 0x1c89e0u;

    // 0x1c89e0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c89e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c89e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c89e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c89e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c89ec: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c89ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c89f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c89f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c89f4u;
}
