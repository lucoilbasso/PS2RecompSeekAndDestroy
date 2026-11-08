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

// Function: entry_00146104
// Address: 0x146104 - 0x146128
void entry_00146104_0x146104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146104_0x146104");
#endif

    switch (ctx->pc) {
        case 0x146120u: goto label_146120;
        default: break;
    }

    ctx->pc = 0x146104u;

    // 0x146104: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x146104u;
    {
        const bool branch_taken_0x146104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x146104) {
            ctx->pc = 0x146108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146104u;
            // 0x146108: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146128u;
            return;
        }
    }
    ctx->pc = 0x14610Cu;
    // 0x14610c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x146110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146114: 0x24a56ab0  addiu       $a1, $a1, 0x6AB0
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27312));
    // 0x146118: 0xc068186  jal         func_1A0618
    ctx->pc = 0x146118u;
    SET_GPR_U32(ctx, 31, 0x146120u);
    ctx->pc = 0x14611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146118u;
    // 0x14611c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x146118u, 0x146120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146120u;
label_146120:
    // 0x146120: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146120u;
    {
        const bool branch_taken_0x146120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146120u;
        // 0x146124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146120) {
            ctx->pc = 0x14614Cu;
            return;
        }
    }
    ctx->pc = 0x146128u;
}
