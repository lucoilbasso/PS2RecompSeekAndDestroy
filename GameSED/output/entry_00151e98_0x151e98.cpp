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

// Function: entry_00151e98
// Address: 0x151e98 - 0x151eb4
void entry_00151e98_0x151e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151e98_0x151e98");
#endif

    switch (ctx->pc) {
        case 0x151eb0u: goto label_151eb0;
        default: break;
    }

    ctx->pc = 0x151e98u;

    // 0x151e98: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x151e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x151e9c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x151e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151ea0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151EA0u;
    {
        const bool branch_taken_0x151ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ea0) {
            ctx->pc = 0x151EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151EA0u;
            // 0x151ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151EB4u;
            return;
        }
    }
    ctx->pc = 0x151EA8u;
    // 0x151ea8: 0xc061920  jal         func_186480
    ctx->pc = 0x151EA8u;
    SET_GPR_U32(ctx, 31, 0x151EB0u);
    ctx->pc = 0x151EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EA8u;
    // 0x151eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151EA8u, 0x151EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EB0u;
label_151eb0:
    // 0x151eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151eb4u;
}
