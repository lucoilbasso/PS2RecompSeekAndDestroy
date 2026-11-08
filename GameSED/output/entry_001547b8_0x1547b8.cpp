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

// Function: entry_001547b8
// Address: 0x1547b8 - 0x1547cc
void entry_001547b8_0x1547b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001547b8_0x1547b8");
#endif

    ctx->pc = 0x1547b8u;

    // 0x1547b8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1547bc: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1547c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1547c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1547c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1547c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1547c8: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x1547c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    ctx->pc = 0x1547ccu;
}
