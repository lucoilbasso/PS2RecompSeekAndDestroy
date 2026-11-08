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

// Function: entry_0013bd90
// Address: 0x13bd90 - 0x13bdb4
void entry_0013bd90_0x13bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd90_0x13bd90");
#endif

    ctx->pc = 0x13bd90u;

    // 0x13bd90: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13bd94: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bd98: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x13bd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13bd9c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x13bd9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13bda0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13bda4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BDA4u;
    {
        const bool branch_taken_0x13bda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bda4) {
            ctx->pc = 0x13BDB4u;
            return;
        }
    }
    ctx->pc = 0x13BDACu;
    // 0x13bdac: 0xc061920  jal         func_186480
    ctx->pc = 0x13BDACu;
    SET_GPR_U32(ctx, 31, 0x13BDB4u);
    ctx->pc = 0x13BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDACu;
    // 0x13bdb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13BDACu, 0x13BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDB4u;
}
