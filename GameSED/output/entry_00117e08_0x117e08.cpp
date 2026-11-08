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

// Function: entry_00117e08
// Address: 0x117e08 - 0x117e10
void entry_00117e08_0x117e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e08_0x117e08");
#endif

    ctx->pc = 0x117e08u;

    // 0x117e08: 0x26240258  addiu       $a0, $s1, 0x258
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
    // 0x117e0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x117e10u;
}
