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

// Function: entry_0019921c
// Address: 0x19921c - 0x199224
void entry_0019921c_0x19921c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019921c_0x19921c");
#endif

    ctx->pc = 0x19921cu;

    // 0x19921c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x19921cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x199220: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x199220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x199224u;
}
