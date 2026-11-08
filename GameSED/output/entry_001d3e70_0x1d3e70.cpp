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

// Function: entry_001d3e70
// Address: 0x1d3e70 - 0x1d3eb8
void entry_001d3e70_0x1d3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e70_0x1d3e70");
#endif

    switch (ctx->pc) {
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3eb4u: goto label_1d3eb4;
        default: break;
    }

    ctx->pc = 0x1d3e70u;

    // 0x1d3e70: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D3E70u;
    {
        const bool branch_taken_0x1d3e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E70u;
        // 0x1d3e74: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e70) {
            ctx->pc = 0x1D3EB8u;
            return;
        }
    }
    ctx->pc = 0x1D3E78u;
    // 0x1d3e78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d3e7c: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D3E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E84u);
    ctx->pc = 0x1D3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E7Cu;
    // 0x1d3e80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D3E7Cu, 0x1D3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E84u;
label_1d3e84:
    // 0x1d3e84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1d3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3e88: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1d3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1d3e8c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3e90: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1d3e94: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1d3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d3e98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d3e9c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1D3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3EA4u);
    ctx->pc = 0x1D3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E9Cu;
    // 0x1d3ea0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1D3E9Cu, 0x1D3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EA4u;
label_1d3ea4:
    // 0x1d3ea4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ea8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3eac: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3EACu;
    SET_GPR_U32(ctx, 31, 0x1D3EB4u);
    ctx->pc = 0x1D3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EACu;
    // 0x1d3eb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3EACu, 0x1D3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EB4u;
label_1d3eb4:
    // 0x1d3eb4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3eb8u;
}
