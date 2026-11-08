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

// Function: entry_001243b8
// Address: 0x1243b8 - 0x1243f0
void entry_001243b8_0x1243b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001243b8_0x1243b8");
#endif

    switch (ctx->pc) {
        case 0x1243e8u: goto label_1243e8;
        default: break;
    }

    ctx->pc = 0x1243b8u;

    // 0x1243b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1243bc: 0x10530018  beq         $v0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1243BCu;
    {
        const bool branch_taken_0x1243bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1243bc) {
            ctx->pc = 0x124420u;
            return;
        }
    }
    ctx->pc = 0x1243C4u;
    // 0x1243c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1243C4u;
    {
        const bool branch_taken_0x1243c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243c4) {
            ctx->pc = 0x1243C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243C4u;
            // 0x1243c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1243F0u;
            return;
        }
    }
    ctx->pc = 0x1243CCu;
    // 0x1243cc: 0x5055001e  beql        $v0, $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x1243CCu;
    {
        const bool branch_taken_0x1243cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1243cc) {
            ctx->pc = 0x1243D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1243CCu;
            // 0x1243d0: 0xae140014  sw          $s4, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124448u;
            return;
        }
    }
    ctx->pc = 0x1243D4u;
    // 0x1243d4: 0x1454001d  bne         $v0, $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x1243D4u;
    {
        const bool branch_taken_0x1243d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1243D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243D4u;
        // 0x1243d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243d4) {
            ctx->pc = 0x12444Cu;
            return;
        }
    }
    ctx->pc = 0x1243DCu;
    // 0x1243dc: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1243dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1243e0: 0xc04901c  jal         func_124070
    ctx->pc = 0x1243E0u;
    SET_GPR_U32(ctx, 31, 0x1243E8u);
    ctx->pc = 0x1243E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243E0u;
    // 0x1243e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124070u, 0x1243E0u, 0x1243E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243E8u;
label_1243e8:
    // 0x1243e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1243E8u;
    {
        const bool branch_taken_0x1243e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243e8) {
            ctx->pc = 0x12444Cu;
            return;
        }
    }
    ctx->pc = 0x1243F0u;
}
