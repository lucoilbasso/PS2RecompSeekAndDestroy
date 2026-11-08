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

// Function: entry_001cb260
// Address: 0x1cb260 - 0x1cb274
void entry_001cb260_0x1cb260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb260_0x1cb260");
#endif

    ctx->pc = 0x1cb260u;

    // 0x1cb260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cb260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb264: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cb268: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1cb268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1cb26c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1cb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1cb270: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cb270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cb274u;
}
