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

// Function: entry_0010636c
// Address: 0x10636c - 0x10639c
void entry_0010636c_0x10636c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010636c_0x10636c");
#endif

    switch (ctx->pc) {
        case 0x106388u: goto label_106388;
        default: break;
    }

    ctx->pc = 0x10636cu;

    // 0x10636c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10636Cu;
    {
        const bool branch_taken_0x10636c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x106370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10636Cu;
        // 0x106370: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10636c) {
            ctx->pc = 0x10639Cu;
            return;
        }
    }
    ctx->pc = 0x106374u;
    // 0x106374: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x106374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x106378: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x106378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10637c: 0x24843818  addiu       $a0, $a0, 0x3818
    ctx->pc = 0x10637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    // 0x106380: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x106380u;
    SET_GPR_U32(ctx, 31, 0x106388u);
    ctx->pc = 0x106384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106380u;
    // 0x106384: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x106380u, 0x106388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106388u;
label_106388:
    // 0x106388: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10638c: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x10638cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x106390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106394: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106394u;
    SET_GPR_U32(ctx, 31, 0x10639Cu);
    ctx->pc = 0x106398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106394u;
    // 0x106398: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106394u, 0x10639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10639Cu;
}
