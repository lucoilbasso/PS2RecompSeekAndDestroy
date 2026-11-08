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

// Function: entry_0018ccb4
// Address: 0x18ccb4 - 0x18ccd0
void entry_0018ccb4_0x18ccb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ccb4_0x18ccb4");
#endif

    switch (ctx->pc) {
        case 0x18ccc8u: goto label_18ccc8;
        default: break;
    }

    ctx->pc = 0x18ccb4u;

label_18ccb4:
    // 0x18ccb4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_18ccb8:
    if (ctx->pc == 0x18CCB8u) {
        ctx->pc = 0x18CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCB4u;
        // 0x18ccb8: 0xa6720000  sh          $s2, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCBCu;
        goto label_18ccbc;
    }
    ctx->pc = 0x18CCB4u;
    {
        const bool branch_taken_0x18ccb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCB4u;
        // 0x18ccb8: 0xa6720000  sh          $s2, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccb4) {
            ctx->pc = 0x18CCD0u;
            return;
        }
    }
    ctx->pc = 0x18CCBCu;
label_18ccbc:
    // 0x18ccbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ccc0:
    // 0x18ccc0: 0x280f809  jalr        $s4
label_18ccc4:
    if (ctx->pc == 0x18CCC4u) {
        ctx->pc = 0x18CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC0u;
        // 0x18ccc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCC8u;
        goto label_18ccc8;
    }
    ctx->pc = 0x18CCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x18CCC8u);
        ctx->pc = 0x18CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC0u;
        // 0x18ccc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CCC0u, 0x18CCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CCC8u;
label_18ccc8:
    // 0x18ccc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_18cccc:
    if (ctx->pc == 0x18CCCCu) {
        ctx->pc = 0x18CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC8u;
        // 0x18cccc: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CCD0u;
        goto label_fallthrough_0x18ccc8;
    }
    ctx->pc = 0x18CCC8u;
    {
        const bool branch_taken_0x18ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCC8u;
        // 0x18cccc: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccc8) {
            ctx->pc = 0x18CCD4u;
            return;
        }
    }
label_fallthrough_0x18ccc8:
    ctx->pc = 0x18CCD0u;
}
