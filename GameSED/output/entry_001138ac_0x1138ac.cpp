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

// Function: entry_001138ac
// Address: 0x1138ac - 0x1138e8
void entry_001138ac_0x1138ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001138ac_0x1138ac");
#endif

    switch (ctx->pc) {
        case 0x1138b4u: goto label_1138b4;
        default: break;
    }

    ctx->pc = 0x1138acu;

    // 0x1138ac: 0xc05166e  jal         func_1459B8
    ctx->pc = 0x1138ACu;
    SET_GPR_U32(ctx, 31, 0x1138B4u);
    ctx->pc = 0x1459B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1459B8u, 0x1138ACu, 0x1138B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138B4u;
label_1138b4:
    // 0x1138b4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1138b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1138b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1138b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1138bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1138bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138c0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1138c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1138c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1138c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1138c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1138C8u;
    {
        const bool branch_taken_0x1138c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138C8u;
        // 0x1138cc: 0x32650300  andi        $a1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138c8) {
            ctx->pc = 0x1138E8u;
            return;
        }
    }
    ctx->pc = 0x1138D0u;
    // 0x1138d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1138d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1138d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1138d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1138d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1138dc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1138dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1138e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1138E0u;
    {
        const bool branch_taken_0x1138e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138E0u;
        // 0x1138e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138e0) {
            ctx->pc = 0x113910u;
            return;
        }
    }
    ctx->pc = 0x1138E8u;
}
