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

// Function: entry_0016f3bc
// Address: 0x16f3bc - 0x16f3f4
void entry_0016f3bc_0x16f3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f3bc_0x16f3bc");
#endif

    ctx->pc = 0x16f3bcu;

    // 0x16f3bc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F3BCu;
    {
        const bool branch_taken_0x16f3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3BCu;
        // 0x16f3c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3bc) {
            ctx->pc = 0x16F428u;
            return;
        }
    }
    ctx->pc = 0x16F3C4u;
    // 0x16f3c4: 0x8f828b60  lw          $v0, -0x74A0($gp)
    ctx->pc = 0x16f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x16f3c8: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x16F3C8u;
    {
        const bool branch_taken_0x16f3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f3c8) {
            ctx->pc = 0x16F3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F3C8u;
            // 0x16f3cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F490u;
            return;
        }
    }
    ctx->pc = 0x16F3D0u;
    // 0x16f3d0: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16f3d4: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x16f3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16f3d8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F3D8u;
    {
        const bool branch_taken_0x16f3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3D8u;
        // 0x16f3dc: 0xaf829150  sw          $v0, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3d8) {
            ctx->pc = 0x16F3F4u;
            return;
        }
    }
    ctx->pc = 0x16F3E0u;
    // 0x16f3e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16f3e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3e8: 0x24a57590  addiu       $a1, $a1, 0x7590
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30096));
    // 0x16f3ec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16F3ECu;
    SET_GPR_U32(ctx, 31, 0x16F3F4u);
    ctx->pc = 0x16F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3ECu;
    // 0x16f3f0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16F3ECu, 0x16F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3F4u;
}
