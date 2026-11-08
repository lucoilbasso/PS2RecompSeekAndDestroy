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

// Function: entry_001b0d88
// Address: 0x1b0d88 - 0x1b0db8
void entry_001b0d88_0x1b0d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0d88_0x1b0d88");
#endif

    switch (ctx->pc) {
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0dacu: goto label_1b0dac;
        default: break;
    }

    ctx->pc = 0x1b0d88u;

label_1b0d88:
    // 0x1b0d88: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x1B0D88u;
    SET_GPR_U32(ctx, 31, 0x1B0D90u);
    ctx->pc = 0x1B0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D88u;
    // 0x1b0d8c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x1B0D88u, 0x1B0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D90u;
label_1b0d90:
    // 0x1b0d90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b0d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b0d94: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1b0d94u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1b0d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b0d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0da0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b0da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0da4: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x1B0DA4u;
    SET_GPR_U32(ctx, 31, 0x1B0DACu);
    ctx->pc = 0x1B0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DA4u;
    // 0x1b0da8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x1B0DA4u, 0x1B0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DACu;
label_1b0dac:
    // 0x1b0dac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b0dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0db0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0DB0u;
    {
        const bool branch_taken_0x1b0db0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0db0) {
            ctx->pc = 0x1B0D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0d88;
        }
    }
    ctx->pc = 0x1B0DB8u;
}
