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

// Function: entry_001cebdc
// Address: 0x1cebdc - 0x1cec08
void entry_001cebdc_0x1cebdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cebdc_0x1cebdc");
#endif

    ctx->pc = 0x1cebdcu;

    // 0x1cebdc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CEBDCu;
    {
        const bool branch_taken_0x1cebdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBDCu;
        // 0x1cebe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebdc) {
            ctx->pc = 0x1CEC08u;
            return;
        }
    }
    ctx->pc = 0x1CEBE4u;
    // 0x1cebe4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cebe8: 0x27c51ea0  addiu       $a1, $fp, 0x1EA0
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 7840));
    // 0x1cebec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cebecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebf0: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cebf4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebf8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1cebf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cec00: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEC00u;
    SET_GPR_U32(ctx, 31, 0x1CEC08u);
    ctx->pc = 0x1CEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC00u;
    // 0x1cec04: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEC00u, 0x1CEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC08u;
}
