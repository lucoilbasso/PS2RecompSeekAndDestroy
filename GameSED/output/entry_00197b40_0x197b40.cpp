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

// Function: entry_00197b40
// Address: 0x197b40 - 0x197b50
void entry_00197b40_0x197b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b40_0x197b40");
#endif

    ctx->pc = 0x197b40u;

    // 0x197b40: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x197b44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x197b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x197b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b4c: 0x0  nop
    ctx->pc = 0x197b4cu;
    // NOP
    ctx->pc = 0x197b50u;
}
