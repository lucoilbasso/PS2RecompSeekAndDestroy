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

// Function: entry_00113394
// Address: 0x113394 - 0x1133e4
void entry_00113394_0x113394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113394_0x113394");
#endif

    switch (ctx->pc) {
        case 0x1133a0u: goto label_1133a0;
        case 0x1133b4u: goto label_1133b4;
        case 0x1133bcu: goto label_1133bc;
        case 0x1133c4u: goto label_1133c4;
        case 0x1133ccu: goto label_1133cc;
        default: break;
    }

    ctx->pc = 0x113394u;

    // 0x113394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113398: 0xc045084  jal         func_114210
    ctx->pc = 0x113398u;
    SET_GPR_U32(ctx, 31, 0x1133A0u);
    ctx->pc = 0x11339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113398u;
    // 0x11339c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114210u, 0x113398u, 0x1133A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133A0u;
label_1133a0:
    // 0x1133a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1133a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133a4: 0x5200ffb8  beql        $s0, $zero, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1133A4u;
    {
        const bool branch_taken_0x1133a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1133a4) {
            ctx->pc = 0x1133A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1133A4u;
            // 0x1133a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113288u;
            return;
        }
    }
    ctx->pc = 0x1133ACu;
    // 0x1133ac: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1133ACu;
    SET_GPR_U32(ctx, 31, 0x1133B4u);
    ctx->pc = 0x1133B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133ACu;
    // 0x1133b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1133ACu, 0x1133B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133B4u;
label_1133b4:
    // 0x1133b4: 0xc068064  jal         func_1A0190
    ctx->pc = 0x1133B4u;
    SET_GPR_U32(ctx, 31, 0x1133BCu);
    ctx->pc = 0x1133B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133B4u;
    // 0x1133b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0190u, 0x1133B4u, 0x1133BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133BCu;
label_1133bc:
    // 0x1133bc: 0xc045138  jal         func_1144E0
    ctx->pc = 0x1133BCu;
    SET_GPR_U32(ctx, 31, 0x1133C4u);
    ctx->pc = 0x1144E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144E0u, 0x1133BCu, 0x1133C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133C4u;
label_1133c4:
    // 0x1133c4: 0xc045172  jal         func_1145C8
    ctx->pc = 0x1133C4u;
    SET_GPR_U32(ctx, 31, 0x1133CCu);
    ctx->pc = 0x1145C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1145C8u, 0x1133C4u, 0x1133CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133CCu;
label_1133cc:
    // 0x1133cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1133ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1133d0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1133d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1133d4: 0x262233f8  addiu       $v0, $s1, 0x33F8
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13304));
    // 0x1133d8: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1133D8u;
    {
        const bool branch_taken_0x1133d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D8u;
        // 0x1133dc: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133d8) {
            ctx->pc = 0x1133E4u;
            return;
        }
    }
    ctx->pc = 0x1133E0u;
    // 0x1133e0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1133e4u;
}
