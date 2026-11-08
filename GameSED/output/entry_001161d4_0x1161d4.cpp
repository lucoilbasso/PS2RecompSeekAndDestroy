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

// Function: entry_001161d4
// Address: 0x1161d4 - 0x1161fc
void entry_001161d4_0x1161d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001161d4_0x1161d4");
#endif

    switch (ctx->pc) {
        case 0x1161e8u: goto label_1161e8;
        case 0x1161f8u: goto label_1161f8;
        default: break;
    }

    ctx->pc = 0x1161d4u;

    // 0x1161d4: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1161D4u;
    {
        const bool branch_taken_0x1161d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1161D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161D4u;
        // 0x1161d8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161d4) {
            ctx->pc = 0x1161FCu;
            return;
        }
    }
    ctx->pc = 0x1161DCu;
    // 0x1161dc: 0x26e44308  addiu       $a0, $s7, 0x4308
    ctx->pc = 0x1161dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17160));
    // 0x1161e0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1161E0u;
    SET_GPR_U32(ctx, 31, 0x1161E8u);
    ctx->pc = 0x1161E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161E0u;
    // 0x1161e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1161E0u, 0x1161E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161E8u;
label_1161e8:
    // 0x1161e8: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x1161e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x1161ec: 0x26c54318  addiu       $a1, $s6, 0x4318
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17176));
    // 0x1161f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1161F0u;
    SET_GPR_U32(ctx, 31, 0x1161F8u);
    ctx->pc = 0x1161F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161F0u;
    // 0x1161f4: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1161F0u, 0x1161F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161F8u;
label_1161f8:
    // 0x1161f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1161fcu;
}
