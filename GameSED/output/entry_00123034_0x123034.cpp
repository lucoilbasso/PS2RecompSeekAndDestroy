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

// Function: entry_00123034
// Address: 0x123034 - 0x12307c
void entry_00123034_0x123034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123034_0x123034");
#endif

    ctx->pc = 0x123034u;

    // 0x123034: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x123034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x123038: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x123038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12303c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x123040: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x123040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x123044: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123048: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x123048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x12304c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12304cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x123050: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x123050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x123054: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x123054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x123058: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12305c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12305cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x123060: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x123060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x123064: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x123064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x123068: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12306c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12306cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x123070: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x123070u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123074: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x123074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x123078: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12307cu;
}
