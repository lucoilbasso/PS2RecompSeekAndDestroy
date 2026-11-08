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

// Function: entry_001d31e0
// Address: 0x1d31e0 - 0x1d31ec
void entry_001d31e0_0x1d31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d31e0_0x1d31e0");
#endif

    ctx->pc = 0x1d31e0u;

    // 0x1d31e0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1d31e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1d31e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d31e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d31e8: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1d31e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x1d31ecu;
}
