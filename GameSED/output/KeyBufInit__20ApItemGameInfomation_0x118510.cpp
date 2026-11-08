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

// Function: KeyBufInit__20ApItemGameInfomation
// Address: 0x118510 - 0x118544
void KeyBufInit__20ApItemGameInfomation_0x118510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyBufInit__20ApItemGameInfomation_0x118510");
#endif

    switch (ctx->pc) {
        case 0x118520u: goto label_118520;
        default: break;
    }

    ctx->pc = 0x118510u;

    // 0x118510: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x118514: 0x24840c32  addiu       $a0, $a0, 0xC32
    ctx->pc = 0x118514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3122));
    // 0x118518: 0x2446c090  addiu       $a2, $v0, -0x3F70
    ctx->pc = 0x118518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951056));
    // 0x11851c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11851cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118520:
    // 0x118520: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x118520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x118524: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x118524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x118528: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11852c: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x11852cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x118530: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x118530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x118534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118534u;
    {
        const bool branch_taken_0x118534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118534u;
        // 0x118538: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118534) {
            ctx->pc = 0x118520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118520;
        }
    }
    ctx->pc = 0x11853Cu;
    // 0x11853c: 0x3e00008  jr          $ra
    ctx->pc = 0x11853Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11853Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118544u;
}
