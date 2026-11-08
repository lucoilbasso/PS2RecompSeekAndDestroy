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

// Function: entry_001044c0
// Address: 0x1044c0 - 0x1044c8
void entry_001044c0_0x1044c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044c0_0x1044c0");
#endif

    ctx->pc = 0x1044c0u;

    // 0x1044c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1044c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1044c4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1044c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1044c8u;
}
