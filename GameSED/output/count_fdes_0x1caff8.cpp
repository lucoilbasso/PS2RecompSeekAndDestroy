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

// Function: count_fdes
// Address: 0x1caff8 - 0x1cb038
void count_fdes_0x1caff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("count_fdes_0x1caff8");
#endif

    switch (ctx->pc) {
        case 0x1cb008u: goto label_1cb008;
        default: break;
    }

    ctx->pc = 0x1caff8u;

    // 0x1caff8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1caff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1caffc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CAFFCu;
    {
        const bool branch_taken_0x1caffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFFCu;
        // 0x1cb000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caffc) {
            ctx->pc = 0x1CB030u;
            goto label_1cb030;
        }
    }
    ctx->pc = 0x1CB004u;
    // 0x1cb004: 0x0  nop
    ctx->pc = 0x1cb004u;
    // NOP
label_1cb008:
    // 0x1cb008: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cb00c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB00Cu;
    {
        const bool branch_taken_0x1cb00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB00Cu;
        // 0x1cb010: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb00c) {
            ctx->pc = 0x1CB01Cu;
            goto label_1cb01c;
        }
    }
    ctx->pc = 0x1CB014u;
    // 0x1cb014: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cb018: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1cb018u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1cb01c:
    // 0x1cb01c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cb020: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1cb020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb028: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB028u;
    {
        const bool branch_taken_0x1cb028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB028u;
        // 0x1cb02c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb028) {
            ctx->pc = 0x1CB008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb008;
        }
    }
    ctx->pc = 0x1CB030u;
label_1cb030:
    // 0x1cb030: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB030u;
        // 0x1cb034: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB038u;
}
