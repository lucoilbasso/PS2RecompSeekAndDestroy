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

// Function: entry_001a36ec
// Address: 0x1a36ec - 0x1a3704
void entry_001a36ec_0x1a36ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36ec_0x1a36ec");
#endif

    ctx->pc = 0x1a36ecu;

    // 0x1a36ec: 0x8503000a  lh          $v1, 0xA($t0)
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1a36f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a36f4: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a36f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a36fc: 0xa502000a  sh          $v0, 0xA($t0)
    ctx->pc = 0x1a36fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a3700: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a3700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a3704u;
}
