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

// Function: entry_001a0f38
// Address: 0x1a0f38 - 0x1a0f78
void entry_001a0f38_0x1a0f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0f38_0x1a0f38");
#endif

    ctx->pc = 0x1a0f38u;

    // 0x1a0f38: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1a0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f3c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1a0f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a0f40: 0x8c842c00  lw          $a0, 0x2C00($a0)
    ctx->pc = 0x1a0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11264)));
    // 0x1a0f44: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A0F44u;
    {
        const bool branch_taken_0x1a0f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f44) {
            ctx->pc = 0x1A0F78u;
            return;
        }
    }
    ctx->pc = 0x1A0F4Cu;
    // 0x1a0f4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a0f54: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a0f58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0f60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f64: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f68: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    // 0x1a0f6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f70: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f74: 0xac232c00  sw          $v1, 0x2C00($at)
    ctx->pc = 0x1a0f74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 3));
    ctx->pc = 0x1a0f78u;
}
