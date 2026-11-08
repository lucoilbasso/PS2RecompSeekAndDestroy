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

// Function: entry_001d5b24
// Address: 0x1d5b24 - 0x1d5b40
void entry_001d5b24_0x1d5b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b24_0x1d5b24");
#endif

    switch (ctx->pc) {
        case 0x1d5b2cu: goto label_1d5b2c;
        default: break;
    }

    ctx->pc = 0x1d5b24u;

    // 0x1d5b24: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5B24u;
    SET_GPR_U32(ctx, 31, 0x1D5B2Cu);
    ctx->pc = 0x1D5B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B24u;
    // 0x1d5b28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5B24u, 0x1D5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B2Cu;
label_1d5b2c:
    // 0x1d5b2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d5b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b30: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5B30u;
    {
        const bool branch_taken_0x1d5b30 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B30u;
        // 0x1d5b34: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b30) {
            ctx->pc = 0x1D5B5Cu;
            return;
        }
    }
    ctx->pc = 0x1D5B38u;
    // 0x1d5b38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d5b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b3c: 0x0  nop
    ctx->pc = 0x1d5b3cu;
    // NOP
    ctx->pc = 0x1d5b40u;
}
