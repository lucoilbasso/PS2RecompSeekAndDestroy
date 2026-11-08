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

// Function: entry_00160978
// Address: 0x160978 - 0x1609a0
void entry_00160978_0x160978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160978_0x160978");
#endif

    switch (ctx->pc) {
        case 0x160980u: goto label_160980;
        case 0x16098cu: goto label_16098c;
        default: break;
    }

    ctx->pc = 0x160978u;

    // 0x160978: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x160978u;
    SET_GPR_U32(ctx, 31, 0x160980u);
    ctx->pc = 0x16097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160978u;
    // 0x16097c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160978u, 0x160980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160980u;
label_160980:
    // 0x160980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160984: 0xc06a298  jal         func_1A8A60
    ctx->pc = 0x160984u;
    SET_GPR_U32(ctx, 31, 0x16098Cu);
    ctx->pc = 0x160988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160984u;
    // 0x160988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A60u, 0x160984u, 0x16098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16098Cu;
label_16098c:
    // 0x16098c: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x160990: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x160990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x160994: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x160994u;
    {
        const bool branch_taken_0x160994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160994u;
        // 0x160998: 0xae020dd0  sw          $v0, 0xDD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160994) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x16099Cu;
    // 0x16099c: 0x0  nop
    ctx->pc = 0x16099cu;
    // NOP
    ctx->pc = 0x1609a0u;
}
