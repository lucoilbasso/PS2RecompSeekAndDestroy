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

// Function: entry_0019f664
// Address: 0x19f664 - 0x19f678
void entry_0019f664_0x19f664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f664_0x19f664");
#endif

    ctx->pc = 0x19f664u;

    // 0x19f664: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f668: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f66c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f670: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19f670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f674: 0xe35821  addu        $t3, $a3, $v1
    ctx->pc = 0x19f674u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->pc = 0x19f678u;
}
