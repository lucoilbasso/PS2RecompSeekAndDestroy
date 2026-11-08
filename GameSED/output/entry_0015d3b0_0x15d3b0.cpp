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

// Function: entry_0015d3b0
// Address: 0x15d3b0 - 0x15d3e8
void entry_0015d3b0_0x15d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3b0_0x15d3b0");
#endif

    switch (ctx->pc) {
        case 0x15d3e4u: goto label_15d3e4;
        default: break;
    }

    ctx->pc = 0x15d3b0u;

label_15d3b0:
    // 0x15d3b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_15d3b4:
    // 0x15d3b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_15d3b8:
    if (ctx->pc == 0x15D3B8u) {
        ctx->pc = 0x15D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3B4u;
        // 0x15d3b8: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3BCu;
        goto label_15d3bc;
    }
    ctx->pc = 0x15D3B4u;
    {
        const bool branch_taken_0x15d3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3b4) {
            ctx->pc = 0x15D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D3B4u;
            // 0x15d3b8: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D400u;
            return;
        }
    }
    ctx->pc = 0x15D3BCu;
label_15d3bc:
    // 0x15d3bc: 0x8e050168  lw          $a1, 0x168($s0)
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_15d3c0:
    // 0x15d3c0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d3c4:
    // 0x15d3c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15d3c8:
    if (ctx->pc == 0x15D3C8u) {
        ctx->pc = 0x15D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3C4u;
        // 0x15d3c8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3CCu;
        goto label_15d3cc;
    }
    ctx->pc = 0x15D3C4u;
    {
        const bool branch_taken_0x15d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3c4) {
            ctx->pc = 0x15D3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D3C4u;
            // 0x15d3c8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D3E8u;
            return;
        }
    }
    ctx->pc = 0x15D3CCu;
label_15d3cc:
    // 0x15d3cc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d3d0:
    // 0x15d3d0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d3d4:
    // 0x15d3d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d3d8:
    // 0x15d3d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d3dc:
    // 0x15d3dc: 0x60f809  jalr        $v1
label_15d3e0:
    if (ctx->pc == 0x15D3E0u) {
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3E4u;
        goto label_15d3e4;
    }
    ctx->pc = 0x15D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D3E4u);
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D3DCu, 0x15D3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D3E4u;
label_15d3e4:
    // 0x15d3e4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15d3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15d3e8u;
}
