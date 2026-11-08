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

// Function: entry_00144130
// Address: 0x144130 - 0x144148
void entry_00144130_0x144130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144130_0x144130");
#endif

    switch (ctx->pc) {
        case 0x144138u: goto label_144138;
        default: break;
    }

    ctx->pc = 0x144130u;

    // 0x144130: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x144130u;
    SET_GPR_U32(ctx, 31, 0x144138u);
    ctx->pc = 0x144134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144130u;
    // 0x144134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x144130u, 0x144138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144138u;
label_144138:
    // 0x144138: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x14413c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14413Cu;
    {
        const bool branch_taken_0x14413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14413Cu;
        // 0x144140: 0xac622680  sw          $v0, 0x2680($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 9856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14413c) {
            ctx->pc = 0x144160u;
            return;
        }
    }
    ctx->pc = 0x144144u;
    // 0x144144: 0x0  nop
    ctx->pc = 0x144144u;
    // NOP
    ctx->pc = 0x144148u;
}
