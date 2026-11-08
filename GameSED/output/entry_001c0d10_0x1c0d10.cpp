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

// Function: entry_001c0d10
// Address: 0x1c0d10 - 0x1c0d3c
void entry_001c0d10_0x1c0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d10_0x1c0d10");
#endif

    switch (ctx->pc) {
        case 0x1c0d18u: goto label_1c0d18;
        default: break;
    }

    ctx->pc = 0x1c0d10u;

    // 0x1c0d10: 0xc07071a  jal         func_1C1C68
    ctx->pc = 0x1C0D10u;
    SET_GPR_U32(ctx, 31, 0x1C0D18u);
    ctx->pc = 0x1C0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D10u;
    // 0x1c0d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C68u, 0x1C0D10u, 0x1C0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D18u;
label_1c0d18:
    // 0x1c0d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d1c: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0D1Cu;
    {
        const bool branch_taken_0x1c0d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D1Cu;
        // 0x1c0d20: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d1c) {
            ctx->pc = 0x1C0D7Cu;
            return;
        }
    }
    ctx->pc = 0x1C0D24u;
    // 0x1c0d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0D24u;
    {
        const bool branch_taken_0x1c0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d24) {
            ctx->pc = 0x1C0D3Cu;
            return;
        }
    }
    ctx->pc = 0x1C0D2Cu;
    // 0x1c0d2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D2Cu;
    {
        const bool branch_taken_0x1c0d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D2Cu;
        // 0x1c0d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d2c) {
            ctx->pc = 0x1C0D50u;
            return;
        }
    }
    ctx->pc = 0x1C0D34u;
    // 0x1c0d34: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0D34u;
    {
        const bool branch_taken_0x1c0d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D34u;
        // 0x1c0d38: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d34) {
            ctx->pc = 0x1C0D9Cu;
            return;
        }
    }
    ctx->pc = 0x1C0D3Cu;
}
