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

// Function: entry_001d3558
// Address: 0x1d3558 - 0x1d3590
void entry_001d3558_0x1d3558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3558_0x1d3558");
#endif

    switch (ctx->pc) {
        case 0x1d3580u: goto label_1d3580;
        default: break;
    }

    ctx->pc = 0x1d3558u;

    // 0x1d3558: 0x1e8823  negu        $s1, $fp
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x1d355c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D355Cu;
    {
        const bool branch_taken_0x1d355c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D355Cu;
        // 0x1d3560: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d355c) {
            ctx->pc = 0x1D35BCu;
            return;
        }
    }
    ctx->pc = 0x1D3564u;
    // 0x1d3564: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d3564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3568: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d3568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d356c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1d356cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1d3570: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d3574: 0xdc84c680  ld          $a0, -0x3980($a0)
    ctx->pc = 0x1d3574u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294952576)));
    // 0x1d3578: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D3578u;
    SET_GPR_U32(ctx, 31, 0x1D3580u);
    ctx->pc = 0x1D357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3578u;
    // 0x1d357c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D3578u, 0x1D3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3580u;
label_1d3580:
    // 0x1d3580: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3580u;
    {
        const bool branch_taken_0x1d3580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3580u;
        // 0x1d3584: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3580) {
            ctx->pc = 0x1D35BCu;
            return;
        }
    }
    ctx->pc = 0x1D3588u;
    // 0x1d3588: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d358c: 0x2451c748  addiu       $s1, $v0, -0x38B8
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
    ctx->pc = 0x1d3590u;
}
