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

// Function: SetupFileData__9WcHitpoly
// Address: 0x1828f0 - 0x182960
void SetupFileData__9WcHitpoly_0x1828f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__9WcHitpoly_0x1828f0");
#endif

    switch (ctx->pc) {
        case 0x182940u: goto label_182940;
        case 0x18294cu: goto label_18294c;
        default: break;
    }

    ctx->pc = 0x1828f0u;

    // 0x1828f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1828f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1828f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1828f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1828f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1828fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1828fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182904: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x182904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x182908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18290c: 0x34634d48  ori         $v1, $v1, 0x4D48
    ctx->pc = 0x18290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19784);
    // 0x182910: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x182914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182918: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x182918u;
    {
        const bool branch_taken_0x182918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182918u;
        // 0x18291c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182918) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182920u;
    // 0x182920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182928: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18292c: 0x805ff44  j           func_17FD10
    ctx->pc = 0x18292Cu;
    ctx->pc = 0x182930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18292Cu;
    // 0x182930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    WHitpolySetupHitPolyLib__FP9WcHitpolyP18WFileBinLinkHeader_0x17fd10(rdram, ctx, runtime); return;
    ctx->pc = 0x182934u;
    // 0x182934: 0x0  nop
    ctx->pc = 0x182934u;
    // NOP
label_182938:
    // 0x182938: 0xc05fee2  jal         func_17FB88
    ctx->pc = 0x182938u;
    SET_GPR_U32(ctx, 31, 0x182940u);
    ctx->pc = 0x17FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB88u, 0x182938u, 0x182940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182940u;
label_182940:
    // 0x182940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182944: 0xc0600a8  jal         func_1802A0
    ctx->pc = 0x182944u;
    SET_GPR_U32(ctx, 31, 0x18294Cu);
    ctx->pc = 0x182948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182944u;
    // 0x182948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1802A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1802A0u, 0x182944u, 0x18294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18294Cu;
label_18294c:
    // 0x18294c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18294cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182958: 0x3e00008  jr          $ra
    ctx->pc = 0x182958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182958u;
        // 0x18295c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182960u;
}
