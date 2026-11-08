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

// Function: entry_0015ebe8
// Address: 0x15ebe8 - 0x15ec38
void entry_0015ebe8_0x15ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ebe8_0x15ebe8");
#endif

    switch (ctx->pc) {
        case 0x15ebf0u: goto label_15ebf0;
        case 0x15ebfcu: goto label_15ebfc;
        default: break;
    }

    ctx->pc = 0x15ebe8u;

    // 0x15ebe8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15EBE8u;
    SET_GPR_U32(ctx, 31, 0x15EBF0u);
    ctx->pc = 0x15EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBE8u;
    // 0x15ebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15EBE8u, 0x15EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBF0u;
label_15ebf0:
    // 0x15ebf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebf4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x15EBF4u;
    SET_GPR_U32(ctx, 31, 0x15EBFCu);
    ctx->pc = 0x15EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBF4u;
    // 0x15ebf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x15EBF4u, 0x15EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBFCu;
label_15ebfc:
    // 0x15ebfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ebfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec00: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x15ec04: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15ec08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15EC08u;
    {
        const bool branch_taken_0x15ec08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC08u;
        // 0x15ec0c: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec08) {
            ctx->pc = 0x15EC50u;
            return;
        }
    }
    ctx->pc = 0x15EC10u;
    // 0x15ec10: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x15ec14: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15ec18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15ec1c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x15ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x15ec20: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15ec24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15ec28: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15ec2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15ec30: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x15ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x15ec34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x15ec38u;
}
