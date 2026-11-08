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

// Function: entry_001bb3b8
// Address: 0x1bb3b8 - 0x1bb3f0
void entry_001bb3b8_0x1bb3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb3b8_0x1bb3b8");
#endif

    switch (ctx->pc) {
        case 0x1bb3ccu: goto label_1bb3cc;
        case 0x1bb3ecu: goto label_1bb3ec;
        default: break;
    }

    ctx->pc = 0x1bb3b8u;

    // 0x1bb3b8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bb3bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1bb3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1bb3c0: 0x8c64c0ac  lw          $a0, -0x3F54($v1)
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951084)));
    // 0x1bb3c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB3C4u;
    SET_GPR_U32(ctx, 31, 0x1BB3CCu);
    ctx->pc = 0x1BB3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3C4u;
    // 0x1bb3c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB3C4u, 0x1BB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3CCu;
label_1bb3cc:
    // 0x1bb3cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bb3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bb3d0: 0x8c62c090  lw          $v0, -0x3F70($v1)
    ctx->pc = 0x1bb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24C090u));
    // 0x1bb3d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bb3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb3d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB3D8u;
    {
        const bool branch_taken_0x1bb3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3D8u;
        // 0x1bb3dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3d8) {
            ctx->pc = 0x1BB3F0u;
            return;
        }
    }
    ctx->pc = 0x1BB3E0u;
    // 0x1bb3e0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1bb3e4: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB3E4u;
    SET_GPR_U32(ctx, 31, 0x1BB3ECu);
    ctx->pc = 0x1BB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3E4u;
    // 0x1bb3e8: 0x2484b0b0  addiu       $a0, $a0, -0x4F50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB3E4u, 0x1BB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3ECu;
label_1bb3ec:
    // 0x1bb3ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb3f0u;
}
