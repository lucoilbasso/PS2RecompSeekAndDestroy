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

// Function: SeqStart__9ApcGameDr
// Address: 0x11b3f8 - 0x11b450
void SeqStart__9ApcGameDr_0x11b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqStart__9ApcGameDr_0x11b3f8");
#endif

    switch (ctx->pc) {
        case 0x11b410u: goto label_11b410;
        case 0x11b424u: goto label_11b424;
        default: break;
    }

    ctx->pc = 0x11b3f8u;

    // 0x11b3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b3fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11b400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b40c: 0x2411bfff  addiu       $s1, $zero, -0x4001
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_11b410:
    // 0x11b410: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b418: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x11b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x11b41c: 0xc0665aa  jal         func_1996A8
    ctx->pc = 0x11B41Cu;
    SET_GPR_U32(ctx, 31, 0x11B424u);
    ctx->pc = 0x11B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B41Cu;
    // 0x11b420: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1996A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1996A8u, 0x11B41Cu, 0x11B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B424u;
label_11b424:
    // 0x11b424: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x11b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x11b428: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x11b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x11b42c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B42Cu;
    {
        const bool branch_taken_0x11b42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b42c) {
            ctx->pc = 0x11B430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B42Cu;
            // 0x11b430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B440u;
            goto label_11b440;
        }
    }
    ctx->pc = 0x11B434u;
    // 0x11b434: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x11b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x11b438: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11B438u;
    {
        const bool branch_taken_0x11b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B438u;
        // 0x11b43c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b438) {
            ctx->pc = 0x11B410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b410;
        }
    }
    ctx->pc = 0x11B440u;
label_11b440:
    // 0x11b440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b448: 0x3e00008  jr          $ra
    ctx->pc = 0x11B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B448u;
        // 0x11b44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B450u;
}
