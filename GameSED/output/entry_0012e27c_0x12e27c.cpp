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

// Function: entry_0012e27c
// Address: 0x12e27c - 0x12e294
void entry_0012e27c_0x12e27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e27c_0x12e27c");
#endif

    switch (ctx->pc) {
        case 0x12e284u: goto label_12e284;
        default: break;
    }

    ctx->pc = 0x12e27cu;

    // 0x12e27c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E27Cu;
    SET_GPR_U32(ctx, 31, 0x12E284u);
    ctx->pc = 0x12E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E27Cu;
    // 0x12e280: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E27Cu, 0x12E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E284u;
label_12e284:
    // 0x12e284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e288: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E288u;
    {
        const bool branch_taken_0x12e288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e288) {
            ctx->pc = 0x12E28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E288u;
            // 0x12e28c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E294u;
            return;
        }
    }
    ctx->pc = 0x12E290u;
    // 0x12e290: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12e294u;
}
