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

// Function: Cmd_PARTICLE_TEST_Entry__FP15BsSCDEntControl
// Address: 0x130f78 - 0x130fc0
void Cmd_PARTICLE_TEST_Entry__FP15BsSCDEntControl_0x130f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTICLE_TEST_Entry__FP15BsSCDEntControl_0x130f78");
#endif

    switch (ctx->pc) {
        case 0x130fb4u: goto label_130fb4;
        default: break;
    }

    ctx->pc = 0x130f78u;

    // 0x130f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130f7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130f80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130f84: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x130f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x130f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x130f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130f8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x130f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x130f90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x130f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x130f94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x130f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x130f98: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x130f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x130f9c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x130f9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x130fa0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x130fa0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x130fa4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x130fa4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130fa8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x130fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x130fac: 0xc04ca18  jal         func_132860
    ctx->pc = 0x130FACu;
    SET_GPR_U32(ctx, 31, 0x130FB4u);
    ctx->pc = 0x130FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FACu;
    // 0x130fb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132860u, 0x130FACu, 0x130FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FB4u;
label_130fb4:
    // 0x130fb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x130FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FB8u;
        // 0x130fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130FC0u;
}
