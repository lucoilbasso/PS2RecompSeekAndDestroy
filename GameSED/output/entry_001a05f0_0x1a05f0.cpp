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

// Function: entry_001a05f0
// Address: 0x1a05f0 - 0x1a0604
void entry_001a05f0_0x1a05f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a05f0_0x1a05f0");
#endif

    ctx->pc = 0x1a05f0u;

    // 0x1a05f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1a05f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a05f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a05f8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a05f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a05fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0600: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    ctx->pc = 0x1a0604u;
}
