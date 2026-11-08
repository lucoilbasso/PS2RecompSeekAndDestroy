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

// Function: entry_00107ee8
// Address: 0x107ee8 - 0x107f0c
void entry_00107ee8_0x107ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ee8_0x107ee8");
#endif

    ctx->pc = 0x107ee8u;

label_107ee8:
    // 0x107ee8: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x107EE8u;
    {
        const bool branch_taken_0x107ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x107EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EE8u;
        // 0x107eec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ee8) {
            ctx->pc = 0x107F10u;
            return;
        }
    }
    ctx->pc = 0x107EF0u;
    // 0x107ef0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x107ef4: 0x0  nop
    ctx->pc = 0x107ef4u;
    // NOP
    // 0x107ef8: 0x0  nop
    ctx->pc = 0x107ef8u;
    // NOP
    // 0x107efc: 0x0  nop
    ctx->pc = 0x107efcu;
    // NOP
    // 0x107f00: 0x0  nop
    ctx->pc = 0x107f00u;
    // NOP
    // 0x107f04: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x107F04u;
    {
        const bool branch_taken_0x107f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f04) {
            ctx->pc = 0x107F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107F04u;
            // 0x107f08: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ee8;
        }
    }
    ctx->pc = 0x107F0Cu;
}
