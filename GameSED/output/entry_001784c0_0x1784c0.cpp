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

// Function: entry_001784c0
// Address: 0x1784c0 - 0x1784c8
void entry_001784c0_0x1784c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001784c0_0x1784c0");
#endif

    ctx->pc = 0x1784c0u;

    // 0x1784c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1784c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1784c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1784c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1784c8u;
}
