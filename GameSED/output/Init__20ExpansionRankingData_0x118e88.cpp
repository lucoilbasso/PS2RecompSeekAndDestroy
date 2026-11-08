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

// Function: Init__20ExpansionRankingData
// Address: 0x118e88 - 0x118ecc
void Init__20ExpansionRankingData_0x118e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__20ExpansionRankingData_0x118e88");
#endif

    switch (ctx->pc) {
        case 0x118ea8u: goto label_118ea8;
        default: break;
    }

    ctx->pc = 0x118e88u;

    // 0x118e88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e8c: 0x24830026  addiu       $v1, $a0, 0x26
    ctx->pc = 0x118e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
    // 0x118e90: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x118e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x118e94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x118e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x118e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x118e9c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x118ea0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x118ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x118ea4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x118ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_118ea8:
    // 0x118ea8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x118ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x118eac: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x118eacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x118eb0: 0x0  nop
    ctx->pc = 0x118eb0u;
    // NOP
    // 0x118eb4: 0x0  nop
    ctx->pc = 0x118eb4u;
    // NOP
    // 0x118eb8: 0x0  nop
    ctx->pc = 0x118eb8u;
    // NOP
    // 0x118ebc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118EBCu;
    {
        const bool branch_taken_0x118ebc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x118EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EBCu;
        // 0x118ec0: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ebc) {
            ctx->pc = 0x118EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118ea8;
        }
    }
    ctx->pc = 0x118EC4u;
    // 0x118ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x118EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118ECCu;
}
