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

// Function: entry_001471a0
// Address: 0x1471a0 - 0x1471c4
void entry_001471a0_0x1471a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001471a0_0x1471a0");
#endif

    switch (ctx->pc) {
        case 0x1471c0u: goto label_1471c0;
        default: break;
    }

    ctx->pc = 0x1471a0u;

    // 0x1471a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1471a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1471a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1471a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1471a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1471A8u;
    {
        const bool branch_taken_0x1471a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471a8) {
            ctx->pc = 0x1471C4u;
            return;
        }
    }
    ctx->pc = 0x1471B0u;
    // 0x1471b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1471b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1471b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471b8: 0xc051a64  jal         func_146990
    ctx->pc = 0x1471B8u;
    SET_GPR_U32(ctx, 31, 0x1471C0u);
    ctx->pc = 0x1471BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471B8u;
    // 0x1471bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x1471B8u, 0x1471C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471C0u;
label_1471c0:
    // 0x1471c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1471c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1471c4u;
}
