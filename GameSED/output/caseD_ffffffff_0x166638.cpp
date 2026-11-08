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

// Function: caseD_ffffffff
// Address: 0x166638 - 0x166640
void caseD_ffffffff_0x166638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x166638");
#endif

    ctx->pc = 0x166638u;

    // 0x166638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16663c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->pc = 0x166640u;
}
