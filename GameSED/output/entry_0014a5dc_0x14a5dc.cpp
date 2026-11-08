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

// Function: entry_0014a5dc
// Address: 0x14a5dc - 0x14a5f8
void entry_0014a5dc_0x14a5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a5dc_0x14a5dc");
#endif

    switch (ctx->pc) {
        case 0x14a5e8u: goto label_14a5e8;
        default: break;
    }

    ctx->pc = 0x14a5dcu;

    // 0x14a5dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a5e0: 0xc05250a  jal         func_149428
    ctx->pc = 0x14A5E0u;
    SET_GPR_U32(ctx, 31, 0x14A5E8u);
    ctx->pc = 0x14A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5E0u;
    // 0x14a5e4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x14A5E0u, 0x14A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5E8u;
label_14a5e8:
    // 0x14a5e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a5ec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A5ECu;
    {
        const bool branch_taken_0x14a5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5ECu;
        // 0x14a5f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5ec) {
            ctx->pc = 0x14A60Cu;
            return;
        }
    }
    ctx->pc = 0x14A5F4u;
    // 0x14a5f4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x14a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x14a5f8u;
}
