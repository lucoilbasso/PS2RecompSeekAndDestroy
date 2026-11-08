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

// Function: entry_001a1050
// Address: 0x1a1050 - 0x1a1090
void entry_001a1050_0x1a1050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1050_0x1a1050");
#endif

    ctx->pc = 0x1a1050u;

    // 0x1a1050: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1a1054: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1a1054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a1058: 0x8c842c00  lw          $a0, 0x2C00($a0)
    ctx->pc = 0x1a1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11264)));
    // 0x1a105c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A105Cu;
    {
        const bool branch_taken_0x1a105c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a105c) {
            ctx->pc = 0x1A1090u;
            return;
        }
    }
    ctx->pc = 0x1A1064u;
    // 0x1a1064: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a1068: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a106c: 0x8c422c04  lw          $v0, 0x2C04($v0)
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x1a1070: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1078: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a107c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1080: 0xac232c00  sw          $v1, 0x2C00($at)
    ctx->pc = 0x1a1080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 3));
    // 0x1a1084: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1088: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a108c: 0xac222c04  sw          $v0, 0x2C04($at)
    ctx->pc = 0x1a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11268), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1090u;
}
