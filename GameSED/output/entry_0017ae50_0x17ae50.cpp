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

// Function: entry_0017ae50
// Address: 0x17ae50 - 0x17ae70
void entry_0017ae50_0x17ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ae50_0x17ae50");
#endif

    switch (ctx->pc) {
        case 0x17ae64u: goto label_17ae64;
        default: break;
    }

    ctx->pc = 0x17ae50u;

    // 0x17ae50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ae54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AE54u;
    {
        const bool branch_taken_0x17ae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE54u;
        // 0x17ae58: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae54) {
            ctx->pc = 0x17AE70u;
            return;
        }
    }
    ctx->pc = 0x17AE5Cu;
    // 0x17ae5c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AE5Cu;
    SET_GPR_U32(ctx, 31, 0x17AE64u);
    ctx->pc = 0x17AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE5Cu;
    // 0x17ae60: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AE5Cu, 0x17AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE64u;
label_17ae64:
    // 0x17ae64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AE64u;
    {
        const bool branch_taken_0x17ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE64u;
        // 0x17ae68: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae64) {
            ctx->pc = 0x17AE84u;
            return;
        }
    }
    ctx->pc = 0x17AE6Cu;
    // 0x17ae6c: 0x0  nop
    ctx->pc = 0x17ae6cu;
    // NOP
    ctx->pc = 0x17ae70u;
}
