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

// Function: entry_00154cf0
// Address: 0x154cf0 - 0x154d10
void entry_00154cf0_0x154cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154cf0_0x154cf0");
#endif

    switch (ctx->pc) {
        case 0x154d08u: goto label_154d08;
        default: break;
    }

    ctx->pc = 0x154cf0u;

    // 0x154cf0: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x154cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x154cf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154cf8: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154CF8u;
    {
        const bool branch_taken_0x154cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x154cf8) {
            ctx->pc = 0x154CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154CF8u;
            // 0x154cfc: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154D10u;
            return;
        }
    }
    ctx->pc = 0x154D00u;
    // 0x154d00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154D00u;
    SET_GPR_U32(ctx, 31, 0x154D08u);
    ctx->pc = 0x154D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D00u;
    // 0x154d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154D00u, 0x154D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D08u;
label_154d08:
    // 0x154d08: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x154D08u;
    {
        const bool branch_taken_0x154d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D08u;
        // 0x154d0c: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d08) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154D10u;
}
