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

// Function: entry_001839c0
// Address: 0x1839c0 - 0x1839f0
void entry_001839c0_0x1839c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001839c0_0x1839c0");
#endif

    ctx->pc = 0x1839c0u;

    // 0x1839c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1839c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1839c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1839c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1839c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1839cc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1839d0: 0xafb1002c  sw          $s1, 0x2C($sp)
    ctx->pc = 0x1839d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 17));
    // 0x1839d4: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x1839d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x1839d8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1839d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1839dc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1839dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1839e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1839e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1839e4: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1839E4u;
    {
        const bool branch_taken_0x1839e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1839E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839E4u;
        // 0x1839e8: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839e4) {
            ctx->pc = 0x1839F0u;
            return;
        }
    }
    ctx->pc = 0x1839ECu;
    // 0x1839ec: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x1839f0u;
}
