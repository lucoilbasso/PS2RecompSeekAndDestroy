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

// Function: entry_0019f9e0
// Address: 0x19f9e0 - 0x19f9f8
void entry_0019f9e0_0x19f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9e0_0x19f9e0");
#endif

    ctx->pc = 0x19f9e0u;

    // 0x19f9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f9e4: 0x2445e130  addiu       $a1, $v0, -0x1ED0
    ctx->pc = 0x19f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x19f9e8: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19f9ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19f9ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9f0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x19f9f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x19f9f4: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x19f9f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x19f9f8u;
}
