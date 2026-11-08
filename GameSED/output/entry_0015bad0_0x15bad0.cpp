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

// Function: entry_0015bad0
// Address: 0x15bad0 - 0x15bae0
void entry_0015bad0_0x15bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bad0_0x15bad0");
#endif

    ctx->pc = 0x15bad0u;

    // 0x15bad0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15bad4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15bad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15bad8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15bad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15badc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15badcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x15bae0u;
}
