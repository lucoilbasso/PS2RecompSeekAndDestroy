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

// Function: entry_0018eefc
// Address: 0x18eefc - 0x18ef00
void entry_0018eefc_0x18eefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eefc_0x18eefc");
#endif

    ctx->pc = 0x18eefcu;

    // 0x18eefc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x18eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x18ef00u;
}
