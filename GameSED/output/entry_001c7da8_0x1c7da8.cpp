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

// Function: entry_001c7da8
// Address: 0x1c7da8 - 0x1c7df8
void entry_001c7da8_0x1c7da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7da8_0x1c7da8");
#endif

    switch (ctx->pc) {
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7ddcu: goto label_1c7ddc;
        default: break;
    }

    ctx->pc = 0x1c7da8u;

    // 0x1c7da8: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1c7da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1c7dac: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C7DACu;
    {
        const bool branch_taken_0x1c7dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DACu;
        // 0x1c7db0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7dac) {
            ctx->pc = 0x1C7E80u;
            return;
        }
    }
    ctx->pc = 0x1C7DB4u;
    // 0x1c7db4: 0x6210018  bgez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C7DB4u;
    {
        const bool branch_taken_0x1c7db4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C7DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DB4u;
        // 0x1c7db8: 0x3c05000f  lui         $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7db4) {
            ctx->pc = 0x1C7E18u;
            return;
        }
    }
    ctx->pc = 0x1C7DBCu;
    // 0x1c7dbc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c7dc0: 0xdc45bba8  ld          $a1, -0x4458($v0)
    ctx->pc = 0x1c7dc0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BBA8u));
    // 0x1c7dc4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7DC4u;
    SET_GPR_U32(ctx, 31, 0x1C7DCCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7DC4u, 0x1C7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DCCu;
label_1c7dcc:
    // 0x1c7dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dd4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C7DD4u;
    SET_GPR_U32(ctx, 31, 0x1C7DDCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C7DD4u, 0x1C7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DDCu;
label_1c7ddc:
    // 0x1c7ddc: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C7DDCu;
    {
        const bool branch_taken_0x1c7ddc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c7ddc) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7DE4u;
    // 0x1c7de4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7DE4u;
    {
        const bool branch_taken_0x1c7de4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DE4u;
        // 0x1c7de8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7de4) {
            ctx->pc = 0x1C7DF8u;
            return;
        }
    }
    ctx->pc = 0x1C7DECu;
    // 0x1c7dec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7df0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1C7DF0u;
    {
        const bool branch_taken_0x1c7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DF0u;
        // 0x1c7df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7df0) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7DF8u;
}
