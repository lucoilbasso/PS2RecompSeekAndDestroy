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

// Function: entry_0019b330
// Address: 0x19b330 - 0x19b348
void entry_0019b330_0x19b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b330_0x19b330");
#endif

    ctx->pc = 0x19b330u;

    // 0x19b330: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19b330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b334: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b338: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b33c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b340: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b344: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19b344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19b348u;
}
