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

// Function: entry_0013c48c
// Address: 0x13c48c - 0x13c4b4
void entry_0013c48c_0x13c48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c48c_0x13c48c");
#endif

    switch (ctx->pc) {
        case 0x13c4acu: goto label_13c4ac;
        default: break;
    }

    ctx->pc = 0x13c48cu;

    // 0x13c48c: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x13c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x13c490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C490u;
    {
        const bool branch_taken_0x13c490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c490) {
            ctx->pc = 0x13C494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C490u;
            // 0x13c494: 0xae2201e4  sw          $v0, 0x1E4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C4B4u;
            return;
        }
    }
    ctx->pc = 0x13C498u;
    // 0x13c498: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x13c498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x13c49c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4a0: 0x24a568a0  addiu       $a1, $a1, 0x68A0
    ctx->pc = 0x13c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26784));
    // 0x13c4a4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13C4A4u;
    SET_GPR_U32(ctx, 31, 0x13C4ACu);
    ctx->pc = 0x13C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4A4u;
    // 0x13c4a8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13C4A4u, 0x13C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4ACu;
label_13c4ac:
    // 0x13c4ac: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x13c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x13c4b0: 0xae2201e4  sw          $v0, 0x1E4($s1)
    ctx->pc = 0x13c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
    ctx->pc = 0x13c4b4u;
}
