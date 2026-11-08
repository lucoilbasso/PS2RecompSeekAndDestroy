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

// Function: UsePartsInit__20ApItemGameInfomation
// Address: 0x118820 - 0x118854
void UsePartsInit__20ApItemGameInfomation_0x118820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UsePartsInit__20ApItemGameInfomation_0x118820");
#endif

    switch (ctx->pc) {
        case 0x118830u: goto label_118830;
        default: break;
    }

    ctx->pc = 0x118820u;

    // 0x118820: 0x24841006  addiu       $a0, $a0, 0x1006
    ctx->pc = 0x118820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4102));
    // 0x118824: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x118824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118828: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x118828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11882c: 0x0  nop
    ctx->pc = 0x11882cu;
    // NOP
label_118830:
    // 0x118830: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118834: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x118834u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x118838: 0x0  nop
    ctx->pc = 0x118838u;
    // NOP
    // 0x11883c: 0x0  nop
    ctx->pc = 0x11883cu;
    // NOP
    // 0x118840: 0x0  nop
    ctx->pc = 0x118840u;
    // NOP
    // 0x118844: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118844u;
    {
        const bool branch_taken_0x118844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118844u;
        // 0x118848: 0x2484fffe  addiu       $a0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118844) {
            ctx->pc = 0x118830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118830;
        }
    }
    ctx->pc = 0x11884Cu;
    // 0x11884c: 0x3e00008  jr          $ra
    ctx->pc = 0x11884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11884Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118854u;
}
