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

// Function: entry_001307f4
// Address: 0x1307f4 - 0x130810
void entry_001307f4_0x1307f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001307f4_0x1307f4");
#endif

    switch (ctx->pc) {
        case 0x1307fcu: goto label_1307fc;
        default: break;
    }

    ctx->pc = 0x1307f4u;

    // 0x1307f4: 0xc04844a  jal         func_121128
    ctx->pc = 0x1307F4u;
    SET_GPR_U32(ctx, 31, 0x1307FCu);
    ctx->pc = 0x1307F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307F4u;
    // 0x1307f8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1307F4u, 0x1307FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307FCu;
label_1307fc:
    // 0x1307fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1307fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130800: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x130800u;
    {
        const bool branch_taken_0x130800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x130800) {
            ctx->pc = 0x130804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130800u;
            // 0x130804: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130810u;
            return;
        }
    }
    ctx->pc = 0x130808u;
    // 0x130808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130808u;
    {
        const bool branch_taken_0x130808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130808u;
        // 0x13080c: 0xae200134  sw          $zero, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130808) {
            ctx->pc = 0x13081Cu;
            return;
        }
    }
    ctx->pc = 0x130810u;
}
