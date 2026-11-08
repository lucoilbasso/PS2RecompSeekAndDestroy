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

// Function: entry_00199210
// Address: 0x199210 - 0x19921c
void entry_00199210_0x199210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199210_0x199210");
#endif

    ctx->pc = 0x199210u;

    // 0x199210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199214: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x199214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x199218: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    ctx->pc = 0x19921cu;
}
