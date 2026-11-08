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

// Function: entry_001c0e70
// Address: 0x1c0e70 - 0x1c0ea8
void entry_001c0e70_0x1c0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0e70_0x1c0e70");
#endif

    switch (ctx->pc) {
        case 0x1c0ea4u: goto label_1c0ea4;
        default: break;
    }

    ctx->pc = 0x1c0e70u;

label_1c0e70:
    // 0x1c0e70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0e74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1c0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1c0e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c0e7c: 0x0  nop
    ctx->pc = 0x1c0e7cu;
    // NOP
    // 0x1c0e80: 0x0  nop
    ctx->pc = 0x1c0e80u;
    // NOP
    // 0x1c0e84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C0E84u;
    {
        const bool branch_taken_0x1c0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e84) {
            ctx->pc = 0x1C0E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0e70;
        }
    }
    ctx->pc = 0x1C0E8Cu;
    // 0x1c0e8c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0E8Cu;
    {
        const bool branch_taken_0x1c0e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E8Cu;
        // 0x1c0e90: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e8c) {
            ctx->pc = 0x1C0EA8u;
            return;
        }
    }
    ctx->pc = 0x1C0E94u;
    // 0x1c0e94: 0x8e450810  lw          $a1, 0x810($s2)
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2064)));
    // 0x1c0e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e9c: 0xc06fe4a  jal         func_1BF928
    ctx->pc = 0x1C0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0EA4u);
    ctx->pc = 0x1C0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E9Cu;
    // 0x1c0ea0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF928u, 0x1C0E9Cu, 0x1C0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EA4u;
label_1c0ea4:
    // 0x1c0ea4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1c0ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1c0ea8u;
}
