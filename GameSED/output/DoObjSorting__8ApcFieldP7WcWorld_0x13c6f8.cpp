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

// Function: DoObjSorting__8ApcFieldP7WcWorld
// Address: 0x13c6f8 - 0x13c750
void DoObjSorting__8ApcFieldP7WcWorld_0x13c6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoObjSorting__8ApcFieldP7WcWorld_0x13c6f8");
#endif

    switch (ctx->pc) {
        case 0x13c730u: goto label_13c730;
        case 0x13c73cu: goto label_13c73c;
        default: break;
    }

    ctx->pc = 0x13c6f8u;

    // 0x13c6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13c708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c70c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c710: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x13c714: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x13c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13c718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C718u;
    {
        const bool branch_taken_0x13c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C718u;
        // 0x13c71c: 0x246500d0  addiu       $a1, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c718) {
            ctx->pc = 0x13C728u;
            goto label_13c728;
        }
    }
    ctx->pc = 0x13C720u;
    // 0x13c720: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13c724: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_13c728:
    // 0x13c728: 0xc04ec24  jal         func_13B090
    ctx->pc = 0x13C728u;
    SET_GPR_U32(ctx, 31, 0x13C730u);
    ctx->pc = 0x13C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C728u;
    // 0x13c72c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B090u, 0x13C728u, 0x13C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C730u;
label_13c730:
    // 0x13c730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c734: 0xc062274  jal         func_1889D0
    ctx->pc = 0x13C734u;
    SET_GPR_U32(ctx, 31, 0x13C73Cu);
    ctx->pc = 0x13C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C734u;
    // 0x13c738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x13C734u, 0x13C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C73Cu;
label_13c73c:
    // 0x13c73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c748: 0x3e00008  jr          $ra
    ctx->pc = 0x13C748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C748u;
        // 0x13c74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C750u;
}
