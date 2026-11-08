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

// Function: entry_00188fa0
// Address: 0x188fa0 - 0x188fb0
void entry_00188fa0_0x188fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fa0_0x188fa0");
#endif

    ctx->pc = 0x188fa0u;

    // 0x188fa0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x188fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x188fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x188fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188fa8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x188fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188fac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x188facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x188fb0u;
}
