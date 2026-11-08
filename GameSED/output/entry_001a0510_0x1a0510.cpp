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

// Function: entry_001a0510
// Address: 0x1a0510 - 0x1a0530
void entry_001a0510_0x1a0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0510_0x1a0510");
#endif

    ctx->pc = 0x1a0510u;

    // 0x1a0510: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1a0510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a0514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0518: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1a0518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a051c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a0520: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    // 0x1a0524: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0528: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a0528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
    // 0x1a052c: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
    ctx->pc = 0x1a0530u;
}
