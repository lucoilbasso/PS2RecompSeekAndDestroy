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

// Function: entry_0018f0f8
// Address: 0x18f0f8 - 0x18f108
void entry_0018f0f8_0x18f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f0f8_0x18f0f8");
#endif

    ctx->pc = 0x18f0f8u;

    // 0x18f0f8: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18f0fc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18f100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18f104: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x18f104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    ctx->pc = 0x18f108u;
}
