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

// Function: entry_001806fc
// Address: 0x1806fc - 0x180710
void entry_001806fc_0x1806fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001806fc_0x1806fc");
#endif

    ctx->pc = 0x1806fcu;

    // 0x1806fc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1806fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180700: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x180704: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x180704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x180708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18070c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x18070cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x180710u;
}
