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

// Function: entry_00135f98
// Address: 0x135f98 - 0x135fb0
void entry_00135f98_0x135f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f98_0x135f98");
#endif

    switch (ctx->pc) {
        case 0x135fa8u: goto label_135fa8;
        default: break;
    }

    ctx->pc = 0x135f98u;

    // 0x135f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x135f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135f9c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x135f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x135fa0: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x135FA0u;
    SET_GPR_U32(ctx, 31, 0x135FA8u);
    ctx->pc = 0x135FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135FA0u;
    // 0x135fa4: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x135FA0u, 0x135FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FA8u;
label_135fa8:
    // 0x135fa8: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x135FA8u;
    {
        const bool branch_taken_0x135fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fa8) {
            ctx->pc = 0x135FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135FA8u;
            // 0x135fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135FBCu;
            return;
        }
    }
    ctx->pc = 0x135FB0u;
}
