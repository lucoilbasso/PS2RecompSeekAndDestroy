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

// Function: entry_001318d4
// Address: 0x1318d4 - 0x1318f0
void entry_001318d4_0x1318d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318d4_0x1318d4");
#endif

    ctx->pc = 0x1318d4u;

    // 0x1318d4: 0x8f8289fc  lw          $v0, -0x7604($gp)
    ctx->pc = 0x1318d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x1318d8: 0xae160050  sw          $s6, 0x50($s0)
    ctx->pc = 0x1318d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 22));
    // 0x1318dc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1318dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1318e4: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x1318e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
    // 0x1318e8: 0xaf8289fc  sw          $v0, -0x7604($gp)
    ctx->pc = 0x1318e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 2));
    // 0x1318ec: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1318ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->pc = 0x1318f0u;
}
