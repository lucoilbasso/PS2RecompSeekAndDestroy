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

// Function: entry_0019e5e4
// Address: 0x19e5e4 - 0x19e5f0
void entry_0019e5e4_0x19e5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e5e4_0x19e5e4");
#endif

    ctx->pc = 0x19e5e4u;

    // 0x19e5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e5ec: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x19e5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x19e5f0u;
}
