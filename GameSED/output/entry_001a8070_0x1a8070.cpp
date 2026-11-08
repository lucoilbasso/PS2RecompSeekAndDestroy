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

// Function: entry_001a8070
// Address: 0x1a8070 - 0x1a80b0
void entry_001a8070_0x1a8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8070_0x1a8070");
#endif

    ctx->pc = 0x1a8070u;

    // 0x1a8070: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8074: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a8074u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8078: 0x48300a  movz        $a2, $v0, $t0
    ctx->pc = 0x1a8078u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a807c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a8080: 0xad26001c  sw          $a2, 0x1C($t1)
    ctx->pc = 0x1a8080u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 6));
    // 0x1a8084: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a8088: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a808c: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A808Cu;
    {
        const bool branch_taken_0x1a808c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a808c) {
            ctx->pc = 0x1A8090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A808Cu;
            // 0x1a8090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8124u;
            return;
        }
    }
    ctx->pc = 0x1A8094u;
    // 0x1a8094: 0x3c137ffe  lui         $s3, 0x7FFE
    ctx->pc = 0x1a8094u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8098: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1a8098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a809c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1a809cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x1a80a0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1a80a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1a80a4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a80a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a80a8: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x1a80ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1a80b0u;
}
