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

// Function: BMemPMgrAllocBufferedBank__FUiUib
// Address: 0x1a02d8 - 0x1a031c
void BMemPMgrAllocBufferedBank__FUiUib_0x1a02d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrAllocBufferedBank__FUiUib_0x1a02d8");
#endif

    ctx->pc = 0x1a02d8u;

    // 0x1a02d8: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x1a02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1a02dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a02dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a02e4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a02e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a02ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a02ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02f0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A02F0u;
    {
        const bool branch_taken_0x1a02f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02F0u;
        // 0x1a02f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02f0) {
            ctx->pc = 0x1A030Cu;
            goto label_1a030c;
        }
    }
    ctx->pc = 0x1A02F8u;
    // 0x1a02f8: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a02fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A02FCu;
    {
        const bool branch_taken_0x1a02fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02FCu;
        // 0x1a0300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02fc) {
            ctx->pc = 0x1A0310u;
            goto label_1a0310;
        }
    }
    ctx->pc = 0x1A0304u;
    // 0x1a0304: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a0304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a0308: 0x8c43f640  lw          $v1, -0x9C0($v0)
    ctx->pc = 0x1a0308u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
label_1a030c:
    // 0x1a030c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0310:
    // 0x1a0310: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a0310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0314: 0x8067d0e  j           func_19F438
    ctx->pc = 0x1A0314u;
    ctx->pc = 0x1A0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0314u;
    // 0x1a0318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F438u;
    BMemPMgrAllocMgr__FUiP8BMemPoolUib_0x19f438(rdram, ctx, runtime); return;
    ctx->pc = 0x1A031Cu;
}
