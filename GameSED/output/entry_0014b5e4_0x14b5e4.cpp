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

// Function: entry_0014b5e4
// Address: 0x14b5e4 - 0x14b5f4
void entry_0014b5e4_0x14b5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b5e4_0x14b5e4");
#endif

    ctx->pc = 0x14b5e4u;

    // 0x14b5e4: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x14b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x14b5e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14b5ec: 0xae3001bc  sw          $s0, 0x1BC($s1)
    ctx->pc = 0x14b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
    // 0x14b5f0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x14b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->pc = 0x14b5f4u;
}
