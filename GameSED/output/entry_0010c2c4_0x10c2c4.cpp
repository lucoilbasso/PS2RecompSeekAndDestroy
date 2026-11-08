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

// Function: entry_0010c2c4
// Address: 0x10c2c4 - 0x10c2d0
void entry_0010c2c4_0x10c2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c2c4_0x10c2c4");
#endif

    ctx->pc = 0x10c2c4u;

    // 0x10c2c4: 0x24820150  addiu       $v0, $a0, 0x150
    ctx->pc = 0x10c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x10c2c8: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x10c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x10c2cc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10c2ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x10c2d0u;
}
