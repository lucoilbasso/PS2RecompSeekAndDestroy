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

// Function: entry_0018c470
// Address: 0x18c470 - 0x18c4a0
void entry_0018c470_0x18c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c470_0x18c470");
#endif

    switch (ctx->pc) {
        case 0x18c47cu: goto label_18c47c;
        default: break;
    }

    ctx->pc = 0x18c470u;

    // 0x18c470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c474: 0xc062de2  jal         func_18B788
    ctx->pc = 0x18C474u;
    SET_GPR_U32(ctx, 31, 0x18C47Cu);
    ctx->pc = 0x18C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C474u;
    // 0x18c478: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B788u, 0x18C474u, 0x18C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C47Cu;
label_18c47c:
    // 0x18c47c: 0x8f838d6c  lw          $v1, -0x7294($gp)
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x18c480: 0x24020166  addiu       $v0, $zero, 0x166
    ctx->pc = 0x18c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x18c484: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18C484u;
    {
        const bool branch_taken_0x18c484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C484u;
        // 0x18c488: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c484) {
            ctx->pc = 0x18C4C8u;
            return;
        }
    }
    ctx->pc = 0x18C48Cu;
    // 0x18c48c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18c490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c494: 0x24421688  addiu       $v0, $v0, 0x1688
    ctx->pc = 0x18c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5768));
    // 0x18c498: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x18c49c: 0x0  nop
    ctx->pc = 0x18c49cu;
    // NOP
    ctx->pc = 0x18c4a0u;
}
