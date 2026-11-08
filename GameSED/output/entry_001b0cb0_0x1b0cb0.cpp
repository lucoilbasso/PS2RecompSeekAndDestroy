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

// Function: entry_001b0cb0
// Address: 0x1b0cb0 - 0x1b0ce8
void entry_001b0cb0_0x1b0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0cb0_0x1b0cb0");
#endif

    switch (ctx->pc) {
        case 0x1b0cb8u: goto label_1b0cb8;
        case 0x1b0cd4u: goto label_1b0cd4;
        default: break;
    }

    ctx->pc = 0x1b0cb0u;

label_1b0cb0:
    // 0x1b0cb0: 0xc072232  jal         func_1C88C8
    ctx->pc = 0x1B0CB0u;
    SET_GPR_U32(ctx, 31, 0x1B0CB8u);
    ctx->pc = 0x1B0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CB0u;
    // 0x1b0cb4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C88C8u, 0x1B0CB0u, 0x1B0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CB8u;
label_1b0cb8:
    // 0x1b0cb8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b0cbc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1b0cbcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1b0cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0cc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0ccc: 0xc07208c  jal         func_1C8230
    ctx->pc = 0x1B0CCCu;
    SET_GPR_U32(ctx, 31, 0x1B0CD4u);
    ctx->pc = 0x1B0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CCCu;
    // 0x1b0cd0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1B0CCCu, 0x1B0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CD4u;
label_1b0cd4:
    // 0x1b0cd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b0cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cd8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0CD8u;
    {
        const bool branch_taken_0x1b0cd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD8u;
        // 0x1b0cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cd8) {
            ctx->pc = 0x1B0CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0cb0;
        }
    }
    ctx->pc = 0x1B0CE0u;
    // 0x1b0ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0CE0u;
    {
        const bool branch_taken_0x1b0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ce0) {
            ctx->pc = 0x1B0CECu;
            return;
        }
    }
    ctx->pc = 0x1B0CE8u;
}
