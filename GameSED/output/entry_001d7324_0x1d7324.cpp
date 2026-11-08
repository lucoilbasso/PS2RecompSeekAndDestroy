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

// Function: entry_001d7324
// Address: 0x1d7324 - 0x1d7348
void entry_001d7324_0x1d7324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7324_0x1d7324");
#endif

    switch (ctx->pc) {
        case 0x1d732cu: goto label_1d732c;
        default: break;
    }

    ctx->pc = 0x1d7324u;

    // 0x1d7324: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D7324u;
    SET_GPR_U32(ctx, 31, 0x1D732Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D7324u, 0x1D732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D732Cu;
label_1d732c:
    // 0x1d732c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D732Cu;
    {
        const bool branch_taken_0x1d732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D732Cu;
        // 0x1d7330: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d732c) {
            ctx->pc = 0x1D7348u;
            return;
        }
    }
    ctx->pc = 0x1D7334u;
    // 0x1d7334: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d733c: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    // 0x1d7340: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D7340u;
    SET_GPR_U32(ctx, 31, 0x1D7348u);
    ctx->pc = 0x1D7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7340u;
    // 0x1d7344: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D7340u, 0x1D7348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7348u;
}
