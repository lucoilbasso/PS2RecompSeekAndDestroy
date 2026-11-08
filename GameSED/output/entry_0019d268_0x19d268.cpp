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

// Function: entry_0019d268
// Address: 0x19d268 - 0x19d27c
void entry_0019d268_0x19d268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d268_0x19d268");
#endif

    ctx->pc = 0x19d268u;

label_19d268:
    // 0x19d268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d26c:
    // 0x19d26c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19d270:
    if (ctx->pc == 0x19D270u) {
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D26Cu;
        // 0x19d270: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D274u;
        goto label_19d274;
    }
    ctx->pc = 0x19D26Cu;
    {
        const bool branch_taken_0x19d26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D26Cu;
        // 0x19d270: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d26c) {
            ctx->pc = 0x19D27Cu;
            return;
        }
    }
    ctx->pc = 0x19D274u;
label_19d274:
    // 0x19d274: 0x40f809  jalr        $v0
label_19d278:
    if (ctx->pc == 0x19D278u) {
        ctx->pc = 0x19D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D274u;
        // 0x19d278: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D27Cu;
        goto label_fallthrough_0x19d274;
    }
    ctx->pc = 0x19D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D27Cu);
        ctx->pc = 0x19D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D274u;
        // 0x19d278: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D274u, 0x19D27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19d274:
    ctx->pc = 0x19D27Cu;
}
