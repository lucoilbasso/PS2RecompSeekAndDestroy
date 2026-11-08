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

// Function: entry_0018964c
// Address: 0x18964c - 0x189654
void entry_0018964c_0x18964c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018964c_0x18964c");
#endif

    ctx->pc = 0x18964cu;

    // 0x18964c: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294956592)));
    // 0x189650: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x189650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    ctx->pc = 0x189654u;
}
