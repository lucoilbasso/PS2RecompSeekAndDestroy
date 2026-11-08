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

// Function: entry_001d38e0
// Address: 0x1d38e0 - 0x1d38f0
void entry_001d38e0_0x1d38e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d38e0_0x1d38e0");
#endif

    ctx->pc = 0x1d38e0u;

    // 0x1d38e0: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x1d38e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38e4: 0x8fbe002c  lw          $fp, 0x2C($sp)
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d38e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d38ec: 0x8fb50054  lw          $s5, 0x54($sp)
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x1d38f0u;
}
