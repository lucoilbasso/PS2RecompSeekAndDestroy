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

// Function: entry_00135fb0
// Address: 0x135fb0 - 0x135fb8
void entry_00135fb0_0x135fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135fb0_0x135fb0");
#endif

    ctx->pc = 0x135fb0u;

    // 0x135fb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x135fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135fb4: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x135fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    ctx->pc = 0x135fb8u;
}
