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

// Function: entry_0017c018
// Address: 0x17c018 - 0x17c038
void entry_0017c018_0x17c018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c018_0x17c018");
#endif

    switch (ctx->pc) {
        case 0x17c02cu: goto label_17c02c;
        default: break;
    }

    ctx->pc = 0x17c018u;

    // 0x17c018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c01c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C01Cu;
    {
        const bool branch_taken_0x17c01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C01Cu;
        // 0x17c020: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c01c) {
            ctx->pc = 0x17C038u;
            return;
        }
    }
    ctx->pc = 0x17C024u;
    // 0x17c024: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C024u;
    SET_GPR_U32(ctx, 31, 0x17C02Cu);
    ctx->pc = 0x17C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C024u;
    // 0x17c028: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C024u, 0x17C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C02Cu;
label_17c02c:
    // 0x17c02c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C02Cu;
    {
        const bool branch_taken_0x17c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C02Cu;
        // 0x17c030: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c02c) {
            ctx->pc = 0x17C050u;
            return;
        }
    }
    ctx->pc = 0x17C034u;
    // 0x17c034: 0x0  nop
    ctx->pc = 0x17c034u;
    // NOP
    ctx->pc = 0x17c038u;
}
