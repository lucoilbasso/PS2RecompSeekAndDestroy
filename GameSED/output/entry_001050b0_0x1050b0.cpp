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

// Function: entry_001050b0
// Address: 0x1050b0 - 0x1050c8
void entry_001050b0_0x1050b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001050b0_0x1050b0");
#endif

    ctx->pc = 0x1050b0u;

    // 0x1050b0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1050b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1050b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1050b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1050bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1050bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1050c0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1050c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1050c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1050c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1050c8u;
}
