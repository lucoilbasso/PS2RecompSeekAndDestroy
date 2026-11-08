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

// Function: entry_0018d634
// Address: 0x18d634 - 0x18d648
void entry_0018d634_0x18d634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d634_0x18d634");
#endif

    ctx->pc = 0x18d634u;

label_18d634:
    // 0x18d634: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_18d638:
    if (ctx->pc == 0x18D638u) {
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D634u;
        // 0x18d638: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D63Cu;
        goto label_18d63c;
    }
    ctx->pc = 0x18D634u;
    {
        const bool branch_taken_0x18d634 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D634u;
        // 0x18d638: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d634) {
            ctx->pc = 0x18D648u;
            return;
        }
    }
    ctx->pc = 0x18D63Cu;
label_18d63c:
    // 0x18d63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d640:
    // 0x18d640: 0x280f809  jalr        $s4
label_18d644:
    if (ctx->pc == 0x18D644u) {
        ctx->pc = 0x18D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D640u;
        // 0x18d644: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D648u;
        goto label_fallthrough_0x18d640;
    }
    ctx->pc = 0x18D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x18D648u);
        ctx->pc = 0x18D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D640u;
        // 0x18d644: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D640u, 0x18D648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x18d640:
    ctx->pc = 0x18D648u;
}
