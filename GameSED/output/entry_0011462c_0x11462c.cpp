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

// Function: entry_0011462c
// Address: 0x11462c - 0x114640
void entry_0011462c_0x11462c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011462c_0x11462c");
#endif

    ctx->pc = 0x11462cu;

    // 0x11462c: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x11462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x114630: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x114630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x114634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114638: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x114638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11463c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11463cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x114640u;
}
