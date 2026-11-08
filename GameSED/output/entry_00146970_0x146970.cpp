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

// Function: entry_00146970
// Address: 0x146970 - 0x146974
void entry_00146970_0x146970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146970_0x146970");
#endif

    ctx->pc = 0x146970u;

    // 0x146970: 0x258a0070  addiu       $t2, $t4, 0x70
    ctx->pc = 0x146970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 112));
    ctx->pc = 0x146974u;
}
