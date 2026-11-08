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

// Function: entry_0010e950
// Address: 0x10e950 - 0x10e98c
void entry_0010e950_0x10e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e950_0x10e950");
#endif

    switch (ctx->pc) {
        case 0x10e960u: goto label_10e960;
        case 0x10e96cu: goto label_10e96c;
        default: break;
    }

    ctx->pc = 0x10e950u;

    // 0x10e950: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e954: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e958: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10E958u;
    SET_GPR_U32(ctx, 31, 0x10E960u);
    ctx->pc = 0x10E95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E958u;
    // 0x10e95c: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10E958u, 0x10E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E960u;
label_10e960:
    // 0x10e960: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10e964: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10E964u;
    SET_GPR_U32(ctx, 31, 0x10E96Cu);
    ctx->pc = 0x10E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E964u;
    // 0x10e968: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10E964u, 0x10E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E96Cu;
label_10e96c:
    // 0x10e96c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e970: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x10e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x10e974: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x10E974u;
    {
        const bool branch_taken_0x10e974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E974u;
        // 0x10e978: 0x50a021  addu        $s4, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e974) {
            ctx->pc = 0x10E9D4u;
            return;
        }
    }
    ctx->pc = 0x10E97Cu;
    // 0x10e97c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10e97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e980: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E980u;
    {
        const bool branch_taken_0x10e980 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E980u;
        // 0x10e984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e980) {
            ctx->pc = 0x10E98Cu;
            return;
        }
    }
    ctx->pc = 0x10E988u;
    // 0x10e988: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x10e98cu;
}
