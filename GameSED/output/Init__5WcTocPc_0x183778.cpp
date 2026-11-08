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

// Function: Init__5WcTocPc
// Address: 0x183778 - 0x1837d4
void Init__5WcTocPc_0x183778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5WcTocPc_0x183778");
#endif

    switch (ctx->pc) {
        case 0x183794u: goto label_183794;
        case 0x1837c0u: goto label_1837c0;
        default: break;
    }

    ctx->pc = 0x183778u;

    // 0x183778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18377c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183780: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x183780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x183784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x183788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18378c: 0xc05f3b0  jal         func_17CEC0
    ctx->pc = 0x18378Cu;
    SET_GPR_U32(ctx, 31, 0x183794u);
    ctx->pc = 0x183790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18378Cu;
    // 0x183790: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CEC0u, 0x18378Cu, 0x183794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183794u;
label_183794:
    // 0x183794: 0x24020605  addiu       $v0, $zero, 0x605
    ctx->pc = 0x183794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x183798: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x183798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x18379c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18379cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1837a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1837a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837a4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1837a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1837a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1837a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837ac: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x1837acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x1837b0: 0xa620002a  sh          $zero, 0x2A($s1)
    ctx->pc = 0x1837b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1837b4: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x1837b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1837b8: 0xc060cf2  jal         func_1833C8
    ctx->pc = 0x1837B8u;
    SET_GPR_U32(ctx, 31, 0x1837C0u);
    ctx->pc = 0x1837BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837B8u;
    // 0x1837bc: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1833C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1833C8u, 0x1837B8u, 0x1837C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837C0u;
label_1837c0:
    // 0x1837c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1837c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1837c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1837c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1837c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1837c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1837cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1837CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837CCu;
        // 0x1837d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1837CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837D4u;
}
