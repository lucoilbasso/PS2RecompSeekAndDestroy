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

// Function: entry_0013f6b0
// Address: 0x13f6b0 - 0x13f6b8
void entry_0013f6b0_0x13f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6b0_0x13f6b0");
#endif

    ctx->pc = 0x13f6b0u;

    // 0x13f6b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13f6b4: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x13f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x13f6b8u;
}
