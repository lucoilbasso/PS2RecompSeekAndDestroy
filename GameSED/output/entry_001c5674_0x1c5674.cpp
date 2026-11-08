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

// Function: entry_001c5674
// Address: 0x1c5674 - 0x1c5690
void entry_001c5674_0x1c5674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5674_0x1c5674");
#endif

    switch (ctx->pc) {
        case 0x1c5680u: goto label_1c5680;
        default: break;
    }

    ctx->pc = 0x1c5674u;

    // 0x1c5674: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1c5674u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1c5678: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1C5678u;
    SET_GPR_U32(ctx, 31, 0x1C5680u);
    ctx->pc = 0x1C567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5678u;
    // 0x1c567c: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1C5678u, 0x1C5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5680u;
label_1c5680:
    // 0x1c5680: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5680u;
    {
        const bool branch_taken_0x1c5680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5680u;
        // 0x1c5684: 0x3c130041  lui         $s3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5680) {
            ctx->pc = 0x1C5690u;
            return;
        }
    }
    ctx->pc = 0x1C5688u;
    // 0x1c5688: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C5688u;
    {
        const bool branch_taken_0x1c5688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5688u;
        // 0x1c568c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5688) {
            ctx->pc = 0x1C5780u;
            return;
        }
    }
    ctx->pc = 0x1C5690u;
}
