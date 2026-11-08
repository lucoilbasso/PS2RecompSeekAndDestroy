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

// Function: entry_0017dd30
// Address: 0x17dd30 - 0x17dd50
void entry_0017dd30_0x17dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd30_0x17dd30");
#endif

    ctx->pc = 0x17dd30u;

    // 0x17dd30: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17dd34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DD34u;
    {
        const bool branch_taken_0x17dd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd34) {
            ctx->pc = 0x17DD50u;
            return;
        }
    }
    ctx->pc = 0x17DD3Cu;
    // 0x17dd3c: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17dd3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17dd40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DD40u;
    {
        const bool branch_taken_0x17dd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd40) {
            ctx->pc = 0x17DD50u;
            return;
        }
    }
    ctx->pc = 0x17DD48u;
    // 0x17dd48: 0xc05f6f6  jal         func_17DBD8
    ctx->pc = 0x17DD48u;
    SET_GPR_U32(ctx, 31, 0x17DD50u);
    ctx->pc = 0x17DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD48u;
    // 0x17dd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBD8u, 0x17DD48u, 0x17DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD50u;
}
