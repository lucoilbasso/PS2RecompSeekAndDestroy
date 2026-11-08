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

// Function: BMemPMgrAllocUpper__FUiUi
// Address: 0x1a02a0 - 0x1a02d4
void BMemPMgrAllocUpper__FUiUi_0x1a02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrAllocUpper__FUiUi_0x1a02a0");
#endif

    ctx->pc = 0x1a02a0u;

    // 0x1a02a0: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1a02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a02a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a02a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a02a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a02a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a02acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A02B0u;
    {
        const bool branch_taken_0x1a02b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02B0u;
        // 0x1a02b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02b0) {
            ctx->pc = 0x1A02C0u;
            goto label_1a02c0;
        }
    }
    ctx->pc = 0x1A02B8u;
    // 0x1a02b8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a02bc: 0x8c42f640  lw          $v0, -0x9C0($v0)
    ctx->pc = 0x1a02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
label_1a02c0:
    // 0x1a02c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a02c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a02c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a02c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02cc: 0x8067d0e  j           func_19F438
    ctx->pc = 0x1A02CCu;
    ctx->pc = 0x1A02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02CCu;
    // 0x1a02d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F438u;
    BMemPMgrAllocMgr__FUiP8BMemPoolUib_0x19f438(rdram, ctx, runtime); return;
    ctx->pc = 0x1A02D4u;
}
