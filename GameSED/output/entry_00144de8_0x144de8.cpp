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

// Function: entry_00144de8
// Address: 0x144de8 - 0x144e10
void entry_00144de8_0x144de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144de8_0x144de8");
#endif

    switch (ctx->pc) {
        case 0x144df8u: goto label_144df8;
        default: break;
    }

    ctx->pc = 0x144de8u;

    // 0x144de8: 0x54820015  bnel        $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x144DE8u;
    {
        const bool branch_taken_0x144de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x144de8) {
            ctx->pc = 0x144DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144DE8u;
            // 0x144dec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144E40u;
            return;
        }
    }
    ctx->pc = 0x144DF0u;
    // 0x144df0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144DF0u;
    SET_GPR_U32(ctx, 31, 0x144DF8u);
    ctx->pc = 0x144DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DF0u;
    // 0x144df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144DF0u, 0x144DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DF8u;
label_144df8:
    // 0x144df8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dfc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x144DFCu;
    {
        const bool branch_taken_0x144dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DFCu;
        // 0x144e00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dfc) {
            ctx->pc = 0x144E10u;
            return;
        }
    }
    ctx->pc = 0x144E04u;
    // 0x144e04: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x144e08: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x144E08u;
    {
        const bool branch_taken_0x144e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E08u;
        // 0x144e0c: 0xe4544004  swc1        $f20, 0x4004($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e08) {
            ctx->pc = 0x1450BCu;
            return;
        }
    }
    ctx->pc = 0x144E10u;
}
