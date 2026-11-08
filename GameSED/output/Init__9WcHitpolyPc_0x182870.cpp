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

// Function: Init__9WcHitpolyPc
// Address: 0x182870 - 0x1828c4
void Init__9WcHitpolyPc_0x182870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcHitpolyPc_0x182870");
#endif

    switch (ctx->pc) {
        case 0x18288cu: goto label_18288c;
        case 0x1828b0u: goto label_1828b0;
        default: break;
    }

    ctx->pc = 0x182870u;

    // 0x182870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x182874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18287c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182884: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x182884u;
    SET_GPR_U32(ctx, 31, 0x18288Cu);
    ctx->pc = 0x182888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182884u;
    // 0x182888: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x182884u, 0x18288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18288Cu;
label_18288c:
    // 0x18288c: 0x24020405  addiu       $v0, $zero, 0x405
    ctx->pc = 0x18288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x182890: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x182890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x182894: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x182894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x182898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18289c: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x18289cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1828a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1828a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828a4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1828a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1828a8: 0xc060a32  jal         func_1828C8
    ctx->pc = 0x1828A8u;
    SET_GPR_U32(ctx, 31, 0x1828B0u);
    ctx->pc = 0x1828ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1828A8u;
    // 0x1828ac: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C8u, 0x1828A8u, 0x1828B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828B0u;
label_1828b0:
    // 0x1828b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1828b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1828b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1828b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1828b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1828BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828BCu;
        // 0x1828c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1828C4u;
}
