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

// Function: entry_00104ae8
// Address: 0x104ae8 - 0x104b20
void entry_00104ae8_0x104ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ae8_0x104ae8");
#endif

    switch (ctx->pc) {
        case 0x104af0u: goto label_104af0;
        default: break;
    }

    ctx->pc = 0x104ae8u;

label_104ae8:
    // 0x104ae8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x104AE8u;
    SET_GPR_U32(ctx, 31, 0x104AF0u);
    ctx->pc = 0x104AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AE8u;
    // 0x104aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x104AE8u, 0x104AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AF0u;
label_104af0:
    // 0x104af0: 0x8f8688a0  lw          $a2, -0x7760($gp)
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104af4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104af8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x104af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x104afc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x104afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x104b00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x104b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x104b04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x104b08: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x104b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x104b0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x104b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x104b10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x104b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104b14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x104b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x104b18: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x104B18u;
    {
        const bool branch_taken_0x104b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104b18) {
            ctx->pc = 0x104AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104ae8;
        }
    }
    ctx->pc = 0x104B20u;
}
