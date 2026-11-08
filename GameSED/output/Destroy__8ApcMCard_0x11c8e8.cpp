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

// Function: Destroy__8ApcMCard
// Address: 0x11c8e8 - 0x11c92c
void Destroy__8ApcMCard_0x11c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Destroy__8ApcMCard_0x11c8e8");
#endif

    switch (ctx->pc) {
        case 0x11c8e8u: goto label_11c8e8;
        case 0x11c8ecu: goto label_11c8ec;
        case 0x11c8f0u: goto label_11c8f0;
        case 0x11c8f4u: goto label_11c8f4;
        case 0x11c8f8u: goto label_11c8f8;
        case 0x11c8fcu: goto label_11c8fc;
        case 0x11c900u: goto label_11c900;
        case 0x11c904u: goto label_11c904;
        case 0x11c908u: goto label_11c908;
        case 0x11c90cu: goto label_11c90c;
        case 0x11c910u: goto label_11c910;
        case 0x11c914u: goto label_11c914;
        case 0x11c918u: goto label_11c918;
        case 0x11c91cu: goto label_11c91c;
        case 0x11c920u: goto label_11c920;
        case 0x11c924u: goto label_11c924;
        case 0x11c928u: goto label_11c928;
        default: break;
    }

    ctx->pc = 0x11c8e8u;

label_11c8e8:
    // 0x11c8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11c8ec:
    // 0x11c8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11c8f0:
    // 0x11c8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c8f4:
    // 0x11c8f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11c8f8:
    // 0x11c8f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11c8fc:
    // 0x11c8fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x11c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_11c900:
    // 0x11c900: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11c900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11c904:
    // 0x11c904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11c908:
    // 0x11c908: 0x60f809  jalr        $v1
label_11c90c:
    if (ctx->pc == 0x11C90Cu) {
        ctx->pc = 0x11C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C908u;
        // 0x11c90c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C910u;
        goto label_11c910;
    }
    ctx->pc = 0x11C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C910u);
        ctx->pc = 0x11C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C908u;
        // 0x11c90c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C908u, 0x11C910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C910u;
label_11c910:
    // 0x11c910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c914:
    // 0x11c914: 0xc067f04  jal         func_19FC10
label_11c918:
    if (ctx->pc == 0x11C918u) {
        ctx->pc = 0x11C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C914u;
        // 0x11c918: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C91Cu;
        goto label_11c91c;
    }
    ctx->pc = 0x11C914u;
    SET_GPR_U32(ctx, 31, 0x11C91Cu);
    ctx->pc = 0x11C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C914u;
    // 0x11c918: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x11C914u, 0x11C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C91Cu;
label_11c91c:
    // 0x11c91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11c920:
    // 0x11c920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11c924:
    // 0x11c924: 0x3e00008  jr          $ra
label_11c928:
    if (ctx->pc == 0x11C928u) {
        ctx->pc = 0x11C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C924u;
        // 0x11c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C92Cu;
        goto label_fallthrough_0x11c924;
    }
    ctx->pc = 0x11C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C924u;
        // 0x11c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11c924:
    ctx->pc = 0x11C92Cu;
}
