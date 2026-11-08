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

// Function: GetImageImfo__9ApcEfeGeni
// Address: 0x132148 - 0x132190
void GetImageImfo__9ApcEfeGeni_0x132148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetImageImfo__9ApcEfeGeni_0x132148");
#endif

    switch (ctx->pc) {
        case 0x132160u: goto label_132160;
        default: break;
    }

    ctx->pc = 0x132148u;

    // 0x132148: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13214c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13214cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132150: 0x244894f0  addiu       $t0, $v0, -0x6B10
    ctx->pc = 0x132150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x132154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132158: 0x25060040  addiu       $a2, $t0, 0x40
    ctx->pc = 0x132158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x13215c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x13215cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F9530u));
label_132160:
    // 0x132160: 0x24c60048  addiu       $a2, $a2, 0x48
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x132164: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x132164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x132168: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132168u;
    {
        const bool branch_taken_0x132168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132168u;
        // 0x13216c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132168) {
            ctx->pc = 0x132188u;
            goto label_132188;
        }
    }
    ctx->pc = 0x132170u;
    // 0x132170: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x132170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x132174: 0x28e2002c  slti        $v0, $a3, 0x2C
    ctx->pc = 0x132174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x132178: 0x0  nop
    ctx->pc = 0x132178u;
    // NOP
    // 0x13217c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13217Cu;
    {
        const bool branch_taken_0x13217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13217c) {
            ctx->pc = 0x132180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13217Cu;
            // 0x132180: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132160;
        }
    }
    ctx->pc = 0x132184u;
    // 0x132184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132188:
    // 0x132188: 0x3e00008  jr          $ra
    ctx->pc = 0x132188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132190u;
}
