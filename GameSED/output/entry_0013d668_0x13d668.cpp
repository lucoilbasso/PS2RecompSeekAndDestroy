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

// Function: entry_0013d668
// Address: 0x13d668 - 0x13d6a0
void entry_0013d668_0x13d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d668_0x13d668");
#endif

    switch (ctx->pc) {
        case 0x13d688u: goto label_13d688;
        default: break;
    }

    ctx->pc = 0x13d668u;

    // 0x13d668: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13d66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d670: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13d670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d678: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x13d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x13d67c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x13d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13d680: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x13D680u;
    SET_GPR_U32(ctx, 31, 0x13D688u);
    ctx->pc = 0x13D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D680u;
    // 0x13d684: 0x30f00001  andi        $s0, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13D680u, 0x13D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D688u;
label_13d688:
    // 0x13d688: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D688u;
    {
        const bool branch_taken_0x13d688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D688u;
        // 0x13d68c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d688) {
            ctx->pc = 0x13D6A0u;
            return;
        }
    }
    ctx->pc = 0x13D690u;
    // 0x13d690: 0x1222002f  beq         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x13D690u;
    {
        const bool branch_taken_0x13d690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D690u;
        // 0x13d694: 0x101240  sll         $v0, $s0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d690) {
            ctx->pc = 0x13D750u;
            return;
        }
    }
    ctx->pc = 0x13D698u;
    // 0x13d698: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x13D698u;
    {
        const bool branch_taken_0x13d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D698u;
        // 0x13d69c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d698) {
            ctx->pc = 0x13D7F8u;
            return;
        }
    }
    ctx->pc = 0x13D6A0u;
}
