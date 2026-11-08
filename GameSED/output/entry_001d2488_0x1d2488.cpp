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

// Function: entry_001d2488
// Address: 0x1d2488 - 0x1d24e0
void entry_001d2488_0x1d2488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2488_0x1d2488");
#endif

    switch (ctx->pc) {
        case 0x1d24d0u: goto label_1d24d0;
        default: break;
    }

    ctx->pc = 0x1d2488u;

    // 0x1d2488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d248c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d2490: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1d2490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1d2494: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x1d2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x1d2498: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d249c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d24a0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d24a4: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x1d24a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d24ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d24b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d24b4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d24b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d24b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d24bc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D24BCu;
    {
        const bool branch_taken_0x1d24bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24BCu;
        // 0x1d24c0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24bc) {
            ctx->pc = 0x1D24E0u;
            return;
        }
    }
    ctx->pc = 0x1D24C4u;
    // 0x1d24c4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d24c8: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D24C8u;
    SET_GPR_U32(ctx, 31, 0x1D24D0u);
    ctx->pc = 0x1D24CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24C8u;
    // 0x1d24cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D24C8u, 0x1D24D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24D0u;
label_1d24d0:
    // 0x1d24d0: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x1D24D0u;
    {
        const bool branch_taken_0x1d24d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24D0u;
        // 0x1d24d4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24d0) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D24D8u;
    // 0x1d24d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d24dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d24dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d24e0u;
}
