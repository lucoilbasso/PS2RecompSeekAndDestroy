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

// Function: entry_00194258
// Address: 0x194258 - 0x19426c
void entry_00194258_0x194258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194258_0x194258");
#endif

    ctx->pc = 0x194258u;

    // 0x194258: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x194258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x19425c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x194260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x194264: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x194264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x194268: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x194268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x19426cu;
}
