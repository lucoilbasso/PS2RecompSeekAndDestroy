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

// Function: entry_001100a8
// Address: 0x1100a8 - 0x1100d0
void entry_001100a8_0x1100a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001100a8_0x1100a8");
#endif

    switch (ctx->pc) {
        case 0x1100b8u: goto label_1100b8;
        default: break;
    }

    ctx->pc = 0x1100a8u;

    // 0x1100a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1100a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1100ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1100acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1100b0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1100B0u;
    SET_GPR_U32(ctx, 31, 0x1100B8u);
    ctx->pc = 0x1100B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100B0u;
    // 0x1100b4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1100B0u, 0x1100B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100B8u;
label_1100b8:
    // 0x1100b8: 0x8c510164  lw          $s1, 0x164($v0)
    ctx->pc = 0x1100b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x1100bc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1100bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1100c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1100c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1100c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100c8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1100C8u;
    SET_GPR_U32(ctx, 31, 0x1100D0u);
    ctx->pc = 0x1100CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100C8u;
    // 0x1100cc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1100C8u, 0x1100D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100D0u;
}
