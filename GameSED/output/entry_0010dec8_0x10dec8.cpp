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

// Function: entry_0010dec8
// Address: 0x10dec8 - 0x10deec
void entry_0010dec8_0x10dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dec8_0x10dec8");
#endif

    ctx->pc = 0x10dec8u;

label_10dec8:
    // 0x10dec8: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DEC8u;
    {
        const bool branch_taken_0x10dec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC8u;
        // 0x10decc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dec8) {
            ctx->pc = 0x10DEF0u;
            return;
        }
    }
    ctx->pc = 0x10DED0u;
    // 0x10ded0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10ded4: 0x0  nop
    ctx->pc = 0x10ded4u;
    // NOP
    // 0x10ded8: 0x0  nop
    ctx->pc = 0x10ded8u;
    // NOP
    // 0x10dedc: 0x0  nop
    ctx->pc = 0x10dedcu;
    // NOP
    // 0x10dee0: 0x0  nop
    ctx->pc = 0x10dee0u;
    // NOP
    // 0x10dee4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10DEE4u;
    {
        const bool branch_taken_0x10dee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dee4) {
            ctx->pc = 0x10DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DEE4u;
            // 0x10dee8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dec8;
        }
    }
    ctx->pc = 0x10DEECu;
}
