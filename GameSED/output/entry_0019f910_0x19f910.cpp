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

// Function: entry_0019f910
// Address: 0x19f910 - 0x19f928
void entry_0019f910_0x19f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f910_0x19f910");
#endif

    ctx->pc = 0x19f910u;

    // 0x19f910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f914: 0x2444e130  addiu       $a0, $v0, -0x1ED0
    ctx->pc = 0x19f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x19f918: 0x2463f640  addiu       $v1, $v1, -0x9C0
    ctx->pc = 0x19f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x19f91c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x19f91cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x19f920: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x19f920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19f924: 0x0  nop
    ctx->pc = 0x19f924u;
    // NOP
    ctx->pc = 0x19f928u;
}
