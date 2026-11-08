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

// Function: entry_001201f4
// Address: 0x1201f4 - 0x120208
void entry_001201f4_0x1201f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001201f4_0x1201f4");
#endif

    ctx->pc = 0x1201f4u;

    // 0x1201f4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1201f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1201f8: 0x244a0790  addiu       $t2, $v0, 0x790
    ctx->pc = 0x1201f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1201fc: 0x24697250  addiu       $t1, $v1, 0x7250
    ctx->pc = 0x1201fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x120200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120204: 0x0  nop
    ctx->pc = 0x120204u;
    // NOP
    ctx->pc = 0x120208u;
}
