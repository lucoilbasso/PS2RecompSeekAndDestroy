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

// Function: entry_0013c610
// Address: 0x13c610 - 0x13c61c
void entry_0013c610_0x13c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c610_0x13c610");
#endif

    ctx->pc = 0x13c610u;

    // 0x13c610: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x13c614: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x13c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x13c618: 0xae4201e0  sw          $v0, 0x1E0($s2)
    ctx->pc = 0x13c618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
    ctx->pc = 0x13c61cu;
}
