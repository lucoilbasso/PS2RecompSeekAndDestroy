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

// Function: entry_00108048
// Address: 0x108048 - 0x108054
void entry_00108048_0x108048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108048_0x108048");
#endif

    ctx->pc = 0x108048u;

    // 0x108048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x108048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10804c: 0xac510044  sw          $s1, 0x44($v0)
    ctx->pc = 0x10804cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
    // 0x108050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x108054u;
}
