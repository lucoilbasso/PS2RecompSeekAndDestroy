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

// Function: entry_001d1398
// Address: 0x1d1398 - 0x1d13a0
void entry_001d1398_0x1d1398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1398_0x1d1398");
#endif

    ctx->pc = 0x1d1398u;

    // 0x1d1398: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1d1398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d139c: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x1d139cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x1d13a0u;
}
