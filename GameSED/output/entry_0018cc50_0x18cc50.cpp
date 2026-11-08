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

// Function: entry_0018cc50
// Address: 0x18cc50 - 0x18cc88
void entry_0018cc50_0x18cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc50_0x18cc50");
#endif

    ctx->pc = 0x18cc50u;

    // 0x18cc50: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x18cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x18cc54: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x18cc54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc58: 0x8e060238  lw          $a2, 0x238($s0)
    ctx->pc = 0x18cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18cc5c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x18cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x18cc60: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x18cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x18cc64: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x18cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18cc68: 0x8e03021c  lw          $v1, 0x21C($s0)
    ctx->pc = 0x18cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x18cc6c: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18cc70: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18cc74: 0x16a40006  bne         $s5, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CC74u;
    {
        const bool branch_taken_0x18cc74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x18CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC74u;
        // 0x18cc78: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc74) {
            ctx->pc = 0x18CC90u;
            return;
        }
    }
    ctx->pc = 0x18CC7Cu;
    // 0x18cc7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18cc80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18CC80u;
    {
        const bool branch_taken_0x18cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC80u;
        // 0x18cc84: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc80) {
            ctx->pc = 0x18CCD0u;
            return;
        }
    }
    ctx->pc = 0x18CC88u;
}
