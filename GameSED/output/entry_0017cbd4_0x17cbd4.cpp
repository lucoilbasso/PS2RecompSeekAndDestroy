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

// Function: entry_0017cbd4
// Address: 0x17cbd4 - 0x17cbe0
void entry_0017cbd4_0x17cbd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cbd4_0x17cbd4");
#endif

    ctx->pc = 0x17cbd4u;

    // 0x17cbd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x17cbd8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cbdc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x17cbe0u;
}
