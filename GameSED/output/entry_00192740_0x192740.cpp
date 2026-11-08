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

// Function: entry_00192740
// Address: 0x192740 - 0x192770
void entry_00192740_0x192740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192740_0x192740");
#endif

    switch (ctx->pc) {
        case 0x192748u: goto label_192748;
        default: break;
    }

    ctx->pc = 0x192740u;

label_192740:
    // 0x192740: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x192740u;
    SET_GPR_U32(ctx, 31, 0x192748u);
    ctx->pc = 0x192744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192740u;
    // 0x192744: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x192740u, 0x192748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192748u;
label_192748:
    // 0x192748: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x192748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x19274c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19274Cu;
    {
        const bool branch_taken_0x19274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x192750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19274Cu;
        // 0x192750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19274c) {
            ctx->pc = 0x192740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192740;
        }
    }
    ctx->pc = 0x192754u;
    // 0x192754: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x192754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x192758: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x192758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19275c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19275Cu;
    {
        const bool branch_taken_0x19275c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19275Cu;
        // 0x192760: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19275c) {
            ctx->pc = 0x192770u;
            return;
        }
    }
    ctx->pc = 0x192764u;
    // 0x192764: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x192764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x192768: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x192768u;
    SET_GPR_U32(ctx, 31, 0x192770u);
    ctx->pc = 0x19276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192768u;
    // 0x19276c: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x192768u, 0x192770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192770u;
}
