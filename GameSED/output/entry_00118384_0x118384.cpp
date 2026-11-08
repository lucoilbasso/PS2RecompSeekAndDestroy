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

// Function: entry_00118384
// Address: 0x118384 - 0x118388
void entry_00118384_0x118384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118384_0x118384");
#endif

    ctx->pc = 0x118384u;

    // 0x118384: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x118384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
    ctx->pc = 0x118388u;
}
