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

// Function: entry_0010d6d0
// Address: 0x10d6d0 - 0x10d700
void entry_0010d6d0_0x10d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d6d0_0x10d6d0");
#endif

    switch (ctx->pc) {
        case 0x10d6d8u: goto label_10d6d8;
        default: break;
    }

    ctx->pc = 0x10d6d0u;

    // 0x10d6d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10D6D0u;
    SET_GPR_U32(ctx, 31, 0x10D6D8u);
    ctx->pc = 0x10D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6D0u;
    // 0x10d6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10D6D0u, 0x10D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6D8u;
label_10d6d8:
    // 0x10d6d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d6d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6dc: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D6DCu;
    {
        const bool branch_taken_0x10d6dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6DCu;
        // 0x10d6e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6dc) {
            ctx->pc = 0x10D700u;
            return;
        }
    }
    ctx->pc = 0x10D6E4u;
    // 0x10d6e4: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x10d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x10d6e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10d6ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d6f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d6f4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10D6F4u;
    {
        const bool branch_taken_0x10d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6F4u;
        // 0x10d6f8: 0xae2401c0  sw          $a0, 0x1C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6f4) {
            ctx->pc = 0x10D7CCu;
            return;
        }
    }
    ctx->pc = 0x10D6FCu;
    // 0x10d6fc: 0x0  nop
    ctx->pc = 0x10d6fcu;
    // NOP
    ctx->pc = 0x10d700u;
}
