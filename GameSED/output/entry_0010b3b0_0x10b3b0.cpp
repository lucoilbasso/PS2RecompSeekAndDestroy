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

// Function: entry_0010b3b0
// Address: 0x10b3b0 - 0x10b3e8
void entry_0010b3b0_0x10b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b3b0_0x10b3b0");
#endif

    switch (ctx->pc) {
        case 0x10b3c8u: goto label_10b3c8;
        default: break;
    }

    ctx->pc = 0x10b3b0u;

    // 0x10b3b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b3b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b3bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b3c0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B3C0u;
    SET_GPR_U32(ctx, 31, 0x10B3C8u);
    ctx->pc = 0x10B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3C0u;
    // 0x10b3c4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B3C0u, 0x10B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3C8u;
label_10b3c8:
    // 0x10b3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3cc: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b3d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B3D0u;
    {
        const bool branch_taken_0x10b3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3D0u;
        // 0x10b3d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3d0) {
            ctx->pc = 0x10B3E8u;
            return;
        }
    }
    ctx->pc = 0x10B3D8u;
    // 0x10b3d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b3dc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b3e0: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B3E0u;
    {
        const bool branch_taken_0x10b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b3e0) {
            ctx->pc = 0x10B3ECu;
            return;
        }
    }
    ctx->pc = 0x10B3E8u;
}
