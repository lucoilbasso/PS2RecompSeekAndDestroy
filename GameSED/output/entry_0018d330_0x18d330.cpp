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

// Function: entry_0018d330
// Address: 0x18d330 - 0x18d348
void entry_0018d330_0x18d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d330_0x18d330");
#endif

    ctx->pc = 0x18d330u;

label_18d330:
    // 0x18d330: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d334:
    // 0x18d334: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_18d338:
    if (ctx->pc == 0x18D338u) {
        ctx->pc = 0x18D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D334u;
        // 0x18d338: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D33Cu;
        goto label_18d33c;
    }
    ctx->pc = 0x18D334u;
    {
        const bool branch_taken_0x18d334 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D334u;
        // 0x18d338: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d334) {
            ctx->pc = 0x18D348u;
            return;
        }
    }
    ctx->pc = 0x18D33Cu;
label_18d33c:
    // 0x18d33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d340:
    // 0x18d340: 0x280f809  jalr        $s4
label_18d344:
    if (ctx->pc == 0x18D344u) {
        ctx->pc = 0x18D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D340u;
        // 0x18d344: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D348u;
        goto label_fallthrough_0x18d340;
    }
    ctx->pc = 0x18D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x18D348u);
        ctx->pc = 0x18D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D340u;
        // 0x18d344: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D340u, 0x18D348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x18d340:
    ctx->pc = 0x18D348u;
}
