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

// Function: entry_001a0d10
// Address: 0x1a0d10 - 0x1a0d28
void entry_001a0d10_0x1a0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d10_0x1a0d10");
#endif

    switch (ctx->pc) {
        case 0x1a0d24u: goto label_1a0d24;
        default: break;
    }

    ctx->pc = 0x1a0d10u;

    // 0x1a0d10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d18: 0x24a58868  addiu       $a1, $a1, -0x7798
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936680));
    // 0x1a0d1c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D24u);
    ctx->pc = 0x1A0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D1Cu;
    // 0x1a0d20: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0D1Cu, 0x1A0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D24u;
label_1a0d24:
    // 0x1a0d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a0d28u;
}
