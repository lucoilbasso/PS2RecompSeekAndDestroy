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

// Function: entry_001bc788
// Address: 0x1bc788 - 0x1bc790
void entry_001bc788_0x1bc788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc788_0x1bc788");
#endif

    ctx->pc = 0x1bc788u;

    // 0x1bc788: 0x2502db30  addiu       $v0, $t0, -0x24D0
    ctx->pc = 0x1bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957872));
    // 0x1bc78c: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x1bc78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
    ctx->pc = 0x1bc790u;
}
