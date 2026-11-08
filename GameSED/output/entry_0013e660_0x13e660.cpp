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

// Function: entry_0013e660
// Address: 0x13e660 - 0x13e690
void entry_0013e660_0x13e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e660_0x13e660");
#endif

    switch (ctx->pc) {
        case 0x13e668u: goto label_13e668;
        default: break;
    }

    ctx->pc = 0x13e660u;

label_13e660:
    // 0x13e660: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13E660u;
    SET_GPR_U32(ctx, 31, 0x13E668u);
    ctx->pc = 0x13E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E660u;
    // 0x13e664: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13E660u, 0x13E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E668u;
label_13e668:
    // 0x13e668: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13e66c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13E66Cu;
    {
        const bool branch_taken_0x13e66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E66Cu;
        // 0x13e670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e66c) {
            ctx->pc = 0x13E660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e660;
        }
    }
    ctx->pc = 0x13E674u;
    // 0x13e674: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13e674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e67c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E67Cu;
    {
        const bool branch_taken_0x13e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E67Cu;
        // 0x13e680: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e67c) {
            ctx->pc = 0x13E690u;
            return;
        }
    }
    ctx->pc = 0x13E684u;
    // 0x13e684: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13e684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13e688: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E688u;
    SET_GPR_U32(ctx, 31, 0x13E690u);
    ctx->pc = 0x13E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E688u;
    // 0x13e68c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E688u, 0x13E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E690u;
}
