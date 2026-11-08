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

// Function: entry_0018d46c
// Address: 0x18d46c - 0x18d480
void entry_0018d46c_0x18d46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d46c_0x18d46c");
#endif

    ctx->pc = 0x18d46cu;

label_18d46c:
    // 0x18d46c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_18d470:
    if (ctx->pc == 0x18D470u) {
        ctx->pc = 0x18D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D46Cu;
        // 0x18d470: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D474u;
        goto label_18d474;
    }
    ctx->pc = 0x18D46Cu;
    {
        const bool branch_taken_0x18d46c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D46Cu;
        // 0x18d470: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d46c) {
            ctx->pc = 0x18D480u;
            return;
        }
    }
    ctx->pc = 0x18D474u;
label_18d474:
    // 0x18d474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d478:
    // 0x18d478: 0x2a0f809  jalr        $s5
label_18d47c:
    if (ctx->pc == 0x18D47Cu) {
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D478u;
        // 0x18d47c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D480u;
        goto label_fallthrough_0x18d478;
    }
    ctx->pc = 0x18D478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x18D480u);
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D478u;
        // 0x18d47c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D478u, 0x18D480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x18d478:
    ctx->pc = 0x18D480u;
}
