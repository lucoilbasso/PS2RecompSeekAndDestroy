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

// Function: entry_001c2f24
// Address: 0x1c2f24 - 0x1c2f54
void entry_001c2f24_0x1c2f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2f24_0x1c2f24");
#endif

    switch (ctx->pc) {
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f50u: goto label_1c2f50;
        default: break;
    }

    ctx->pc = 0x1c2f24u;

    // 0x1c2f24: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2F24u;
    {
        const bool branch_taken_0x1c2f24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F24u;
        // 0x1c2f28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f24) {
            ctx->pc = 0x1C2F54u;
            return;
        }
    }
    ctx->pc = 0x1C2F2Cu;
    // 0x1c2f2c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c2f30: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c2f34: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1c2f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c2f38: 0x24a5b6e8  addiu       $a1, $a1, -0x4918
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
    // 0x1c2f3c: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x1C2F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F44u);
    ctx->pc = 0x1C2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F3Cu;
    // 0x1c2f40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x1C2F3Cu, 0x1C2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F44u;
label_1c2f44:
    // 0x1c2f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f48: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C2F48u;
    SET_GPR_U32(ctx, 31, 0x1C2F50u);
    ctx->pc = 0x1C2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F48u;
    // 0x1c2f4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C2F48u, 0x1C2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F50u;
label_1c2f50:
    // 0x1c2f50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c2f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c2f54u;
}
