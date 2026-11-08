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

// Function: entry_00142a50
// Address: 0x142a50 - 0x142a64
void entry_00142a50_0x142a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142a50_0x142a50");
#endif

    ctx->pc = 0x142a50u;

    // 0x142a50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x142a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x142a54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x142a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x142a58: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x142a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x142a5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x142a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142a60: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x142a60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x142a64u;
}
