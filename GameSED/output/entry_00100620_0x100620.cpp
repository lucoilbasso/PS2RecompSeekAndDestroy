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

// Function: entry_00100620
// Address: 0x100620 - 0x100648
void entry_00100620_0x100620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100620_0x100620");
#endif

    ctx->pc = 0x100620u;

    // 0x100620: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x100624: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x100624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x100628: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x100628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10062c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100634: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100638: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100638u;
    {
        const bool branch_taken_0x100638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100638u;
        // 0x10063c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100638) {
            ctx->pc = 0x100648u;
            return;
        }
    }
    ctx->pc = 0x100640u;
    // 0x100640: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100640u;
    SET_GPR_U32(ctx, 31, 0x100648u);
    ctx->pc = 0x100644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100640u;
    // 0x100644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100640u, 0x100648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100648u;
}
