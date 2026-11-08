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

// Function: entry_001a15a4
// Address: 0x1a15a4 - 0x1a15c0
void entry_001a15a4_0x1a15a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a15a4_0x1a15a4");
#endif

    switch (ctx->pc) {
        case 0x1a15b4u: goto label_1a15b4;
        default: break;
    }

    ctx->pc = 0x1a15a4u;

label_1a15a4:
    // 0x1a15a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a15a8:
    if (ctx->pc == 0x1A15A8u) {
        ctx->pc = 0x1A15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15A4u;
        // 0x1a15a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15ACu;
        goto label_1a15ac;
    }
    ctx->pc = 0x1A15A4u;
    {
        const bool branch_taken_0x1a15a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15A4u;
        // 0x1a15a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15a4) {
            ctx->pc = 0x1A15F8u;
            return;
        }
    }
    ctx->pc = 0x1A15ACu;
label_1a15ac:
    // 0x1a15ac: 0x40f809  jalr        $v0
label_1a15b0:
    if (ctx->pc == 0x1A15B0u) {
        ctx->pc = 0x1A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15ACu;
        // 0x1a15b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15B4u;
        goto label_1a15b4;
    }
    ctx->pc = 0x1A15ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A15B4u);
        ctx->pc = 0x1A15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15ACu;
        // 0x1a15b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A15ACu, 0x1A15B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A15B4u;
label_1a15b4:
    // 0x1a15b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a15b8:
    if (ctx->pc == 0x1A15B8u) {
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B4u;
        // 0x1a15b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15BCu;
        goto label_1a15bc;
    }
    ctx->pc = 0x1A15B4u;
    {
        const bool branch_taken_0x1a15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15B4u;
        // 0x1a15b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15b4) {
            ctx->pc = 0x1A15FCu;
            return;
        }
    }
    ctx->pc = 0x1A15BCu;
label_1a15bc:
    // 0x1a15bc: 0x0  nop
    ctx->pc = 0x1a15bcu;
    // NOP
    ctx->pc = 0x1a15c0u;
}
