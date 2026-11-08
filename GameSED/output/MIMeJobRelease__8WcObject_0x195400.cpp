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

// Function: MIMeJobRelease__8WcObject
// Address: 0x195400 - 0x195450
void MIMeJobRelease__8WcObject_0x195400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MIMeJobRelease__8WcObject_0x195400");
#endif

    switch (ctx->pc) {
        case 0x19542cu: goto label_19542c;
        default: break;
    }

    ctx->pc = 0x195400u;

    // 0x195400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19540c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x195410: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195414: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x195414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x195418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195418u;
    {
        const bool branch_taken_0x195418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195418u;
        // 0x19541c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195418) {
            ctx->pc = 0x195440u;
            goto label_195440;
        }
    }
    ctx->pc = 0x195420u;
    // 0x195420: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x195420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x195424: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x195424u;
    SET_GPR_U32(ctx, 31, 0x19542Cu);
    ctx->pc = 0x195428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195424u;
    // 0x195428: 0x2484de50  addiu       $a0, $a0, -0x21B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x195424u, 0x19542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19542Cu;
label_19542c:
    // 0x19542c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x195430: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x195430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x195434: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x195434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x195438: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x195438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19543c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x19543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_195440:
    // 0x195440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195444: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x195444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195448: 0x3e00008  jr          $ra
    ctx->pc = 0x195448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195448u;
        // 0x19544c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195450u;
}
