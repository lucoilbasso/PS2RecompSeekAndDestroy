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

// Function: entry_00195350
// Address: 0x195350 - 0x195364
void entry_00195350_0x195350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195350_0x195350");
#endif

    ctx->pc = 0x195350u;

    // 0x195350: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x195350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x195354: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195358: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x195358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19535c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195360: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x195360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x195364u;
}
