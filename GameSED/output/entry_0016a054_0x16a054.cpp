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

// Function: entry_0016a054
// Address: 0x16a054 - 0x16a07c
void entry_0016a054_0x16a054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a054_0x16a054");
#endif

    ctx->pc = 0x16a054u;

    // 0x16a054: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x16a054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x16a058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a05c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16a060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a064: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x16a064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x16a068: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x16a068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x16a06c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16a070: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x16a070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x16a074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16a074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16a078: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x16a078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    ctx->pc = 0x16a07cu;
}
