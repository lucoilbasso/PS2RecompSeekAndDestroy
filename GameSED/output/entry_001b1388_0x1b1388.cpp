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

// Function: entry_001b1388
// Address: 0x1b1388 - 0x1b13a0
void entry_001b1388_0x1b1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1388_0x1b1388");
#endif

    ctx->pc = 0x1b1388u;

    // 0x1b1388: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b138c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b138cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1b1390: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b1394: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1b1394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1b1398: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1b1398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b139c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1b139cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1b13a0u;
}
