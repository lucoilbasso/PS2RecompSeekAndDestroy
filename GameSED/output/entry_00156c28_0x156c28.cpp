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

// Function: entry_00156c28
// Address: 0x156c28 - 0x156c4c
void entry_00156c28_0x156c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c28_0x156c28");
#endif

    ctx->pc = 0x156c28u;

label_156c28:
    // 0x156c28: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x156c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156c2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x156c30: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x156c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x156c34: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x156C34u;
    {
        const bool branch_taken_0x156c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156c34) {
            ctx->pc = 0x156C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C34u;
            // 0x156c38: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C50u;
            return;
        }
    }
    ctx->pc = 0x156C3Cu;
    // 0x156c3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x156c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x156c40: 0x0  nop
    ctx->pc = 0x156c40u;
    // NOP
    // 0x156c44: 0x5482fff8  bnel        $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x156C44u;
    {
        const bool branch_taken_0x156c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x156c44) {
            ctx->pc = 0x156C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C44u;
            // 0x156c48: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156c28;
        }
    }
    ctx->pc = 0x156C4Cu;
}
