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

// Function: entry_001c2b4c
// Address: 0x1c2b4c - 0x1c2b64
void entry_001c2b4c_0x1c2b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b4c_0x1c2b4c");
#endif

    switch (ctx->pc) {
        case 0x1c2b54u: goto label_1c2b54;
        default: break;
    }

    ctx->pc = 0x1c2b4cu;

    // 0x1c2b4c: 0xc070376  jal         func_1C0DD8
    ctx->pc = 0x1C2B4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B54u);
    ctx->pc = 0x1C2B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B4Cu;
    // 0x1c2b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0DD8u, 0x1C2B4Cu, 0x1C2B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B54u;
label_1c2b54:
    // 0x1c2b54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b58: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2B58u;
    {
        const bool branch_taken_0x1c2b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B58u;
        // 0x1c2b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b58) {
            ctx->pc = 0x1C2B64u;
            return;
        }
    }
    ctx->pc = 0x1C2B60u;
    // 0x1c2b60: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1c2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1c2b64u;
}
