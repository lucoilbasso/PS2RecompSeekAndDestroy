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

// Function: entry_00133028
// Address: 0x133028 - 0x133050
void entry_00133028_0x133028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133028_0x133028");
#endif

    switch (ctx->pc) {
        case 0x133038u: goto label_133038;
        default: break;
    }

    ctx->pc = 0x133028u;

    // 0x133028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13302c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x13302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x133030: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133030u;
    SET_GPR_U32(ctx, 31, 0x133038u);
    ctx->pc = 0x133034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133030u;
    // 0x133034: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133030u, 0x133038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133038u;
label_133038:
    // 0x133038: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x133038u;
    {
        const bool branch_taken_0x133038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133038u;
        // 0x13303c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133038) {
            ctx->pc = 0x1331B4u;
            return;
        }
    }
    ctx->pc = 0x133040u;
    // 0x133040: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x133040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133044: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x133044u;
    {
        const bool branch_taken_0x133044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x133048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133044u;
        // 0x133048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133044) {
            ctx->pc = 0x133050u;
            return;
        }
    }
    ctx->pc = 0x13304Cu;
    // 0x13304c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13304cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x133050u;
}
