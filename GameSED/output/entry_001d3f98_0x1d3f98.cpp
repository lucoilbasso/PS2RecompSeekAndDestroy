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

// Function: entry_001d3f98
// Address: 0x1d3f98 - 0x1d3fd0
void entry_001d3f98_0x1d3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3f98_0x1d3f98");
#endif

    switch (ctx->pc) {
        case 0x1d3fa4u: goto label_1d3fa4;
        default: break;
    }

    ctx->pc = 0x1d3f98u;

    // 0x1d3f98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f9c: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D3F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3FA4u);
    ctx->pc = 0x1D3FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F9Cu;
    // 0x1d3fa0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D3F9Cu, 0x1D3FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FA4u;
label_1d3fa4:
    // 0x1d3fa4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3FA4u;
    {
        const bool branch_taken_0x1d3fa4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FA4u;
        // 0x1d3fa8: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fa4) {
            ctx->pc = 0x1D3FD0u;
            return;
        }
    }
    ctx->pc = 0x1D3FACu;
    // 0x1d3fac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3FACu;
    {
        const bool branch_taken_0x1d3fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fac) {
            ctx->pc = 0x1D3FD0u;
            return;
        }
    }
    ctx->pc = 0x1D3FB4u;
    // 0x1d3fb4: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3FB4u;
    {
        const bool branch_taken_0x1d3fb4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb4) {
            ctx->pc = 0x1D3FD0u;
            return;
        }
    }
    ctx->pc = 0x1D3FBCu;
    // 0x1d3fbc: 0x12840029  beq         $s4, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3FBCu;
    {
        const bool branch_taken_0x1d3fbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FBCu;
        // 0x1d3fc0: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fbc) {
            ctx->pc = 0x1D4064u;
            return;
        }
    }
    ctx->pc = 0x1D3FC4u;
    // 0x1d3fc4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d3fc8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1D3FC8u;
    {
        const bool branch_taken_0x1d3fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FC8u;
        // 0x1d3fcc: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fc8) {
            ctx->pc = 0x1D4190u;
            return;
        }
    }
    ctx->pc = 0x1D3FD0u;
}
