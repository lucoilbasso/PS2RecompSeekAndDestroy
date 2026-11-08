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

// Function: entry_00190730
// Address: 0x190730 - 0x190740
void entry_00190730_0x190730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190730_0x190730");
#endif

    ctx->pc = 0x190730u;

    // 0x190730: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x190730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190734: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x190734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190738: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x190738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19073c: 0x0  nop
    ctx->pc = 0x19073cu;
    // NOP
    ctx->pc = 0x190740u;
}
