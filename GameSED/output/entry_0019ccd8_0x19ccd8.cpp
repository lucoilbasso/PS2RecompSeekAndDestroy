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

// Function: entry_0019ccd8
// Address: 0x19ccd8 - 0x19cce4
void entry_0019ccd8_0x19ccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ccd8_0x19ccd8");
#endif

    ctx->pc = 0x19ccd8u;

    // 0x19ccd8: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19ccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ccdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cce0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x19cce4u;
}
