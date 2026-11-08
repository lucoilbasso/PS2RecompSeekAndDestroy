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

// Function: entry_001a07e8
// Address: 0x1a07e8 - 0x1a0828
void entry_001a07e8_0x1a07e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a07e8_0x1a07e8");
#endif

    switch (ctx->pc) {
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a081cu: goto label_1a081c;
        default: break;
    }

    ctx->pc = 0x1a07e8u;

    // 0x1a07e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a07e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07ec: 0x24a59030  addiu       $a1, $a1, -0x6FD0
    ctx->pc = 0x1a07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938672));
    // 0x1a07f0: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A07F0u;
    SET_GPR_U32(ctx, 31, 0x1A07F8u);
    ctx->pc = 0x1A07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07F0u;
    // 0x1a07f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A07F0u, 0x1A07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07F8u;
label_1a07f8:
    // 0x1a07f8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1a07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a07fc: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A07FCu;
    {
        const bool branch_taken_0x1a07fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a07fc) {
            ctx->pc = 0x1A0800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A07FCu;
            // 0x1a0800: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0828u;
            return;
        }
    }
    ctx->pc = 0x1A0804u;
    // 0x1a0804: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a0808: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a080c: 0x24a59048  addiu       $a1, $a1, -0x6FB8
    ctx->pc = 0x1a080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    // 0x1a0810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0814: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0814u;
    SET_GPR_U32(ctx, 31, 0x1A081Cu);
    ctx->pc = 0x1A0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0814u;
    // 0x1a0818: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0814u, 0x1A081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A081Cu;
label_1a081c:
    // 0x1a081c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A081Cu;
    {
        const bool branch_taken_0x1a081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A081Cu;
        // 0x1a0820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a081c) {
            ctx->pc = 0x1A0874u;
            return;
        }
    }
    ctx->pc = 0x1A0824u;
    // 0x1a0824: 0x0  nop
    ctx->pc = 0x1a0824u;
    // NOP
    ctx->pc = 0x1a0828u;
}
