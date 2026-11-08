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

// Function: entry_0018cc90
// Address: 0x18cc90 - 0x18ccb4
void entry_0018cc90_0x18cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc90_0x18cc90");
#endif

    ctx->pc = 0x18cc90u;

    // 0x18cc90: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x18cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x18cc94: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x18cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18cc98: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x18cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x18cc9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18cca0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CCA0u;
    {
        const bool branch_taken_0x18cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x18CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCA0u;
        // 0x18cca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cca0) {
            ctx->pc = 0x18CCB4u;
            return;
        }
    }
    ctx->pc = 0x18CCA8u;
    // 0x18cca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccac: 0xc063b70  jal         func_18EDC0
    ctx->pc = 0x18CCACu;
    SET_GPR_U32(ctx, 31, 0x18CCB4u);
    ctx->pc = 0x18CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCACu;
    // 0x18ccb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18CCACu, 0x18CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCB4u;
}
