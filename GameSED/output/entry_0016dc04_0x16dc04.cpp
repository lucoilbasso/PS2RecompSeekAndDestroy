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

// Function: entry_0016dc04
// Address: 0x16dc04 - 0x16dc20
void entry_0016dc04_0x16dc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc04_0x16dc04");
#endif

    switch (ctx->pc) {
        case 0x16dc10u: goto label_16dc10;
        default: break;
    }

    ctx->pc = 0x16dc04u;

    // 0x16dc04: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x16dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
    // 0x16dc08: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16DC08u;
    SET_GPR_U32(ctx, 31, 0x16DC10u);
    ctx->pc = 0x16DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DC08u;
    // 0x16dc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DC08u, 0x16DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC10u;
label_16dc10:
    // 0x16dc10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DC10u;
    {
        const bool branch_taken_0x16dc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc10) {
            ctx->pc = 0x16DC20u;
            return;
        }
    }
    ctx->pc = 0x16DC18u;
    // 0x16dc18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16DC18u;
    {
        const bool branch_taken_0x16dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC18u;
        // 0x16dc1c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc18) {
            ctx->pc = 0x16DC5Cu;
            return;
        }
    }
    ctx->pc = 0x16DC20u;
}
