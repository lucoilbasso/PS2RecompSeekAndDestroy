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

// Function: entry_00100508
// Address: 0x100508 - 0x100510
void entry_00100508_0x100508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100508_0x100508");
#endif

    ctx->pc = 0x100508u;

    // 0x100508: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x100508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10050c: 0x2447cf28  addiu       $a3, $v0, -0x30D8
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954792));
    ctx->pc = 0x100510u;
}
