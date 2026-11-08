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

// Function: entry_00174de8
// Address: 0x174de8 - 0x174e18
void entry_00174de8_0x174de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174de8_0x174de8");
#endif

    switch (ctx->pc) {
        case 0x174df4u: goto label_174df4;
        default: break;
    }

    ctx->pc = 0x174de8u;

    // 0x174de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dec: 0xc06e96e  jal         func_1BA5B8
    ctx->pc = 0x174DECu;
    SET_GPR_U32(ctx, 31, 0x174DF4u);
    ctx->pc = 0x174DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DECu;
    // 0x174df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA5B8u, 0x174DECu, 0x174DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DF4u;
label_174df4:
    // 0x174df4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x174df8: 0x24847798  addiu       $a0, $a0, 0x7798
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30616));
    // 0x174dfc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x174DFCu;
    {
        const bool branch_taken_0x174dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DFCu;
        // 0x174e00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dfc) {
            ctx->pc = 0x174DD8u;
            return;
        }
    }
    ctx->pc = 0x174E04u;
    // 0x174e04: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174E04u;
    {
        const bool branch_taken_0x174e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E04u;
        // 0x174e08: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e04) {
            ctx->pc = 0x174E18u;
            return;
        }
    }
    ctx->pc = 0x174E0Cu;
    // 0x174e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e10: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x174E10u;
    SET_GPR_U32(ctx, 31, 0x174E18u);
    ctx->pc = 0x174E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E10u;
    // 0x174e14: 0x248477c0  addiu       $a0, $a0, 0x77C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x174E10u, 0x174E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E18u;
}
