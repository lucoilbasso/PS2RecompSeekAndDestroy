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

// Function: entry_0014cc90
// Address: 0x14cc90 - 0x14ccb0
void entry_0014cc90_0x14cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cc90_0x14cc90");
#endif

    switch (ctx->pc) {
        case 0x14cca8u: goto label_14cca8;
        default: break;
    }

    ctx->pc = 0x14cc90u;

    // 0x14cc90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CC90u;
    {
        const bool branch_taken_0x14cc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC90u;
        // 0x14cc94: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc90) {
            ctx->pc = 0x14CCB0u;
            return;
        }
    }
    ctx->pc = 0x14CC98u;
    // 0x14cc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc9c: 0x26656bd8  addiu       $a1, $s3, 0x6BD8
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 27608));
    // 0x14cca0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CCA0u;
    SET_GPR_U32(ctx, 31, 0x14CCA8u);
    ctx->pc = 0x14CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCA0u;
    // 0x14cca4: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CCA0u, 0x14CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCA8u;
label_14cca8:
    // 0x14cca8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14CCA8u;
    {
        const bool branch_taken_0x14cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCA8u;
        // 0x14ccac: 0x8e8201c0  lw          $v0, 0x1C0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cca8) {
            ctx->pc = 0x14CCD4u;
            return;
        }
    }
    ctx->pc = 0x14CCB0u;
}
