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

// Function: entry_001d3dd4
// Address: 0x1d3dd4 - 0x1d3e20
void entry_001d3dd4_0x1d3dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3dd4_0x1d3dd4");
#endif

    switch (ctx->pc) {
        case 0x1d3e08u: goto label_1d3e08;
        case 0x1d3e18u: goto label_1d3e18;
        default: break;
    }

    ctx->pc = 0x1d3dd4u;

    // 0x1d3dd4: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D3DD4u;
    {
        const bool branch_taken_0x1d3dd4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD4u;
        // 0x1d3dd8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dd4) {
            ctx->pc = 0x1D3E48u;
            return;
        }
    }
    ctx->pc = 0x1D3DDCu;
    // 0x1d3ddc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3de0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d3de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d3de4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D3DE4u;
    {
        const bool branch_taken_0x1d3de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3de4) {
            ctx->pc = 0x1D3E48u;
            return;
        }
    }
    ctx->pc = 0x1D3DECu;
    // 0x1d3dec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d3decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3df0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3DF0u;
    {
        const bool branch_taken_0x1d3df0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF0u;
        // 0x1d3df4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3df0) {
            ctx->pc = 0x1D3E20u;
            return;
        }
    }
    ctx->pc = 0x1D3DF8u;
    // 0x1d3df8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dfc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d3e00: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3E00u;
    SET_GPR_U32(ctx, 31, 0x1D3E08u);
    ctx->pc = 0x1D3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E00u;
    // 0x1d3e04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3E00u, 0x1D3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E08u;
label_1d3e08:
    // 0x1d3e08: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e10: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3E10u;
    SET_GPR_U32(ctx, 31, 0x1D3E18u);
    ctx->pc = 0x1D3E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E10u;
    // 0x1d3e14: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3E10u, 0x1D3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E18u;
label_1d3e18:
    // 0x1d3e18: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3E18u;
    {
        const bool branch_taken_0x1d3e18 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d3e18) {
            ctx->pc = 0x1D3E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E18u;
            // 0x1d3e1c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E30u;
            return;
        }
    }
    ctx->pc = 0x1D3E20u;
}
