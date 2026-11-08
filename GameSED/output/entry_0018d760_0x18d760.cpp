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

// Function: entry_0018d760
// Address: 0x18d760 - 0x18d778
void entry_0018d760_0x18d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d760_0x18d760");
#endif

    ctx->pc = 0x18d760u;

label_18d760:
    // 0x18d760: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d764:
    // 0x18d764: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_18d768:
    if (ctx->pc == 0x18D768u) {
        ctx->pc = 0x18D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D764u;
        // 0x18d768: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D76Cu;
        goto label_18d76c;
    }
    ctx->pc = 0x18D764u;
    {
        const bool branch_taken_0x18d764 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D764u;
        // 0x18d768: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d764) {
            ctx->pc = 0x18D778u;
            return;
        }
    }
    ctx->pc = 0x18D76Cu;
label_18d76c:
    // 0x18d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d770:
    // 0x18d770: 0x2a0f809  jalr        $s5
label_18d774:
    if (ctx->pc == 0x18D774u) {
        ctx->pc = 0x18D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D770u;
        // 0x18d774: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D778u;
        goto label_fallthrough_0x18d770;
    }
    ctx->pc = 0x18D770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x18D778u);
        ctx->pc = 0x18D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D770u;
        // 0x18d774: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D770u, 0x18D778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x18d770:
    ctx->pc = 0x18D778u;
}
