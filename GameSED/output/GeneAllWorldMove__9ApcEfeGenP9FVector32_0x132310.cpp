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

// Function: GeneAllWorldMove__9ApcEfeGenP9FVector32
// Address: 0x132310 - 0x132360
void GeneAllWorldMove__9ApcEfeGenP9FVector32_0x132310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneAllWorldMove__9ApcEfeGenP9FVector32_0x132310");
#endif

    switch (ctx->pc) {
        case 0x132338u: goto label_132338;
        case 0x132340u: goto label_132340;
        default: break;
    }

    ctx->pc = 0x132310u;

    // 0x132310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13231c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132324: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x132324u;
    {
        const bool branch_taken_0x132324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x132328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132324u;
        // 0x132328: 0x8c900150  lw          $s0, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132324) {
            ctx->pc = 0x13234Cu;
            goto label_13234c;
        }
    }
    ctx->pc = 0x13232Cu;
    // 0x13232c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13232Cu;
    {
        const bool branch_taken_0x13232c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13232c) {
            ctx->pc = 0x132330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13232Cu;
            // 0x132330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132350u;
            goto label_132350;
        }
    }
    ctx->pc = 0x132334u;
    // 0x132334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132338:
    // 0x132338: 0xc04c308  jal         func_130C20
    ctx->pc = 0x132338u;
    SET_GPR_U32(ctx, 31, 0x132340u);
    ctx->pc = 0x13233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132338u;
    // 0x13233c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C20u, 0x132338u, 0x132340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132340u;
label_132340:
    // 0x132340: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x132340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x132344: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x132344u;
    {
        const bool branch_taken_0x132344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x132348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132344u;
        // 0x132348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132344) {
            ctx->pc = 0x132338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132338;
        }
    }
    ctx->pc = 0x13234Cu;
label_13234c:
    // 0x13234c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13234cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132350:
    // 0x132350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132358: 0x3e00008  jr          $ra
    ctx->pc = 0x132358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132358u;
        // 0x13235c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132360u;
}
