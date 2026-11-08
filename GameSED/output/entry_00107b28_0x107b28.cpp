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

// Function: entry_00107b28
// Address: 0x107b28 - 0x107b30
void entry_00107b28_0x107b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b28_0x107b28");
#endif

    ctx->pc = 0x107b28u;

    // 0x107b28: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x107b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x107b2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x107b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x107b30u;
}
