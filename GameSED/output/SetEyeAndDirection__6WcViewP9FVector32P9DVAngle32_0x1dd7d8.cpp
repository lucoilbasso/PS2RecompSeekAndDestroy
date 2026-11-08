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

// Function: SetEyeAndDirection__6WcViewP9FVector32P9DVAngle32
// Address: 0x1dd7d8 - 0x1dd834
void SetEyeAndDirection__6WcViewP9FVector32P9DVAngle32_0x1dd7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEyeAndDirection__6WcViewP9FVector32P9DVAngle32_0x1dd7d8");
#endif

    switch (ctx->pc) {
        case 0x1dd800u: goto label_1dd800;
        case 0x1dd814u: goto label_1dd814;
        default: break;
    }

    ctx->pc = 0x1dd7d8u;

    // 0x1dd7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd7e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd7e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dd7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dd7f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD7F0u;
    {
        const bool branch_taken_0x1dd7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7F0u;
        // 0x1dd7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7f0) {
            ctx->pc = 0x1DD800u;
            goto label_1dd800;
        }
    }
    ctx->pc = 0x1DD7F8u;
    // 0x1dd7f8: 0xc0618c2  jal         func_186308
    ctx->pc = 0x1DD7F8u;
    SET_GPR_U32(ctx, 31, 0x1DD800u);
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x1DD7F8u, 0x1DD800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD800u;
label_1dd800:
    // 0x1dd800: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD800u;
    {
        const bool branch_taken_0x1dd800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD800u;
        // 0x1dd804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd800) {
            ctx->pc = 0x1DD814u;
            goto label_1dd814;
        }
    }
    ctx->pc = 0x1DD808u;
    // 0x1dd808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd80c: 0xc0618da  jal         func_186368
    ctx->pc = 0x1DD80Cu;
    SET_GPR_U32(ctx, 31, 0x1DD814u);
    ctx->pc = 0x1DD810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD80Cu;
    // 0x1dd810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1DD80Cu, 0x1DD814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD814u;
label_1dd814:
    // 0x1dd814: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1dd818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd81c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1dd81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1dd820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd824: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x1dd824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x1dd828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD82Cu;
        // 0x1dd830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD834u;
}
