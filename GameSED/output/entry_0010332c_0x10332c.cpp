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

// Function: entry_0010332c
// Address: 0x10332c - 0x103350
void entry_0010332c_0x10332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010332c_0x10332c");
#endif

    switch (ctx->pc) {
        case 0x103334u: goto label_103334;
        default: break;
    }

    ctx->pc = 0x10332cu;

    // 0x10332c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10332Cu;
    SET_GPR_U32(ctx, 31, 0x103334u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10332Cu, 0x103334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103334u;
label_103334:
    // 0x103334: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103334u;
    {
        const bool branch_taken_0x103334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103334u;
        // 0x103338: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103334) {
            ctx->pc = 0x103350u;
            return;
        }
    }
    ctx->pc = 0x10333Cu;
    // 0x10333c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10333cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x103340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103344: 0x24a51be0  addiu       $a1, $a1, 0x1BE0
    ctx->pc = 0x103344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
    // 0x103348: 0xc068186  jal         func_1A0618
    ctx->pc = 0x103348u;
    SET_GPR_U32(ctx, 31, 0x103350u);
    ctx->pc = 0x10334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103348u;
    // 0x10334c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x103348u, 0x103350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103350u;
}
