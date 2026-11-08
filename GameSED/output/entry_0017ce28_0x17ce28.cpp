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

// Function: entry_0017ce28
// Address: 0x17ce28 - 0x17ce4c
void entry_0017ce28_0x17ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ce28_0x17ce28");
#endif

    switch (ctx->pc) {
        case 0x17ce30u: goto label_17ce30;
        default: break;
    }

    ctx->pc = 0x17ce28u;

    // 0x17ce28: 0xc0680a8  jal         func_1A02A0
    ctx->pc = 0x17CE28u;
    SET_GPR_U32(ctx, 31, 0x17CE30u);
    ctx->pc = 0x1A02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A02A0u, 0x17CE28u, 0x17CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE30u;
label_17ce30:
    // 0x17ce30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17CE30u;
    {
        const bool branch_taken_0x17ce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ce30) {
            ctx->pc = 0x17CE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CE30u;
            // 0x17ce34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE54u;
            return;
        }
    }
    ctx->pc = 0x17CE38u;
    // 0x17ce38: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17ce3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ce3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce40: 0x24a57bc0  addiu       $a1, $a1, 0x7BC0
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31680));
    // 0x17ce44: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17CE44u;
    SET_GPR_U32(ctx, 31, 0x17CE4Cu);
    ctx->pc = 0x17CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE44u;
    // 0x17ce48: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17CE44u, 0x17CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE4Cu;
}
