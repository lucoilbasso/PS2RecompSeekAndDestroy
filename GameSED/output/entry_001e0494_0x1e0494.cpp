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

// Function: entry_001e0494
// Address: 0x1e0494 - 0x1e04c8
void entry_001e0494_0x1e0494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0494_0x1e0494");
#endif

    switch (ctx->pc) {
        case 0x1e049cu: goto label_1e049c;
        case 0x1e04bcu: goto label_1e04bc;
        default: break;
    }

    ctx->pc = 0x1e0494u;

    // 0x1e0494: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1E0494u;
    SET_GPR_U32(ctx, 31, 0x1E049Cu);
    ctx->pc = 0x1E0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0494u;
    // 0x1e0498: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1E0494u, 0x1E049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E049Cu;
label_1e049c:
    // 0x1e049c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04a0: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E04A0u;
    {
        const bool branch_taken_0x1e04a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e04a0) {
            ctx->pc = 0x1E04A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E04A0u;
            // 0x1e04a4: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E04C8u;
            return;
        }
    }
    ctx->pc = 0x1E04A8u;
    // 0x1e04a8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e04ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04b0: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
    // 0x1e04b4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E04B4u;
    SET_GPR_U32(ctx, 31, 0x1E04BCu);
    ctx->pc = 0x1E04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E04B4u;
    // 0x1e04b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E04B4u, 0x1E04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E04BCu;
label_1e04bc:
    // 0x1e04bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E04BCu;
    {
        const bool branch_taken_0x1e04bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04BCu;
        // 0x1e04c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04bc) {
            ctx->pc = 0x1E0520u;
            return;
        }
    }
    ctx->pc = 0x1E04C4u;
    // 0x1e04c4: 0x0  nop
    ctx->pc = 0x1e04c4u;
    // NOP
    ctx->pc = 0x1e04c8u;
}
