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

// Function: entry_00100a3c
// Address: 0x100a3c - 0x100a60
void entry_00100a3c_0x100a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a3c_0x100a3c");
#endif

    switch (ctx->pc) {
        case 0x100a44u: goto label_100a44;
        default: break;
    }

    ctx->pc = 0x100a3cu;

    // 0x100a3c: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x100A3Cu;
    SET_GPR_U32(ctx, 31, 0x100A44u);
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x100A3Cu, 0x100A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A44u;
label_100a44:
    // 0x100a44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x100A44u;
    {
        const bool branch_taken_0x100a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a44) {
            ctx->pc = 0x100A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100A44u;
            // 0x100a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100A64u;
            return;
        }
    }
    ctx->pc = 0x100A4Cu;
    // 0x100a4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a54: 0x24a51940  addiu       $a1, $a1, 0x1940
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6464));
    // 0x100a58: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100A58u;
    SET_GPR_U32(ctx, 31, 0x100A60u);
    ctx->pc = 0x100A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A58u;
    // 0x100a5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100A58u, 0x100A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A60u;
}
