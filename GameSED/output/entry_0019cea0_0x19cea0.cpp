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

// Function: entry_0019cea0
// Address: 0x19cea0 - 0x19ceb0
void entry_0019cea0_0x19cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cea0_0x19cea0");
#endif

    ctx->pc = 0x19cea0u;

    // 0x19cea0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x19cea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19cea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cea8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19ceac: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19ceacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19ceb0u;
}
