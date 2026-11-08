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

// Function: entry_0017d65c
// Address: 0x17d65c - 0x17d690
void entry_0017d65c_0x17d65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d65c_0x17d65c");
#endif

    switch (ctx->pc) {
        case 0x17d664u: goto label_17d664;
        case 0x17d684u: goto label_17d684;
        default: break;
    }

    ctx->pc = 0x17d65cu;

    // 0x17d65c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17D65Cu;
    SET_GPR_U32(ctx, 31, 0x17D664u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17D65Cu, 0x17D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D664u;
label_17d664:
    // 0x17d664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17d664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d668: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D668u;
    {
        const bool branch_taken_0x17d668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D668u;
        // 0x17d66c: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d668) {
            ctx->pc = 0x17D690u;
            return;
        }
    }
    ctx->pc = 0x17D670u;
    // 0x17d670: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d678: 0x24a57c28  addiu       $a1, $a1, 0x7C28
    ctx->pc = 0x17d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31784));
    // 0x17d67c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D67Cu;
    SET_GPR_U32(ctx, 31, 0x17D684u);
    ctx->pc = 0x17D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D67Cu;
    // 0x17d680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D67Cu, 0x17D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D684u;
label_17d684:
    // 0x17d684: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17D684u;
    {
        const bool branch_taken_0x17d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D684u;
        // 0x17d688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d684) {
            ctx->pc = 0x17D6C8u;
            return;
        }
    }
    ctx->pc = 0x17D68Cu;
    // 0x17d68c: 0x0  nop
    ctx->pc = 0x17d68cu;
    // NOP
    ctx->pc = 0x17d690u;
}
