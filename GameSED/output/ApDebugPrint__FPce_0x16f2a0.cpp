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

// Function: ApDebugPrint__FPce
// Address: 0x16f2a0 - 0x16f328
void ApDebugPrint__FPce_0x16f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDebugPrint__FPce_0x16f2a0");
#endif

    switch (ctx->pc) {
        case 0x16f30cu: goto label_16f30c;
        case 0x16f318u: goto label_16f318;
        default: break;
    }

    ctx->pc = 0x16f2a0u;

    // 0x16f2a0: 0x8f828b58  lw          $v0, -0x74A8($gp)
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x16f2a4: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x16f2a8: 0xffa50448  sd          $a1, 0x448($sp)
    ctx->pc = 0x16f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 5));
    // 0x16f2ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2b0: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x16f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x16f2b4: 0xffbf0418  sd          $ra, 0x418($sp)
    ctx->pc = 0x16f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 31));
    // 0x16f2b8: 0xffa60450  sd          $a2, 0x450($sp)
    ctx->pc = 0x16f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 6));
    // 0x16f2bc: 0xffa70458  sd          $a3, 0x458($sp)
    ctx->pc = 0x16f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 7));
    // 0x16f2c0: 0xffa80460  sd          $t0, 0x460($sp)
    ctx->pc = 0x16f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 8));
    // 0x16f2c4: 0xffa90468  sd          $t1, 0x468($sp)
    ctx->pc = 0x16f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 9));
    // 0x16f2c8: 0xffaa0470  sd          $t2, 0x470($sp)
    ctx->pc = 0x16f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 10));
    // 0x16f2cc: 0xffab0478  sd          $t3, 0x478($sp)
    ctx->pc = 0x16f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 11));
    // 0x16f2d0: 0xe7ac0428  swc1        $f12, 0x428($sp)
    ctx->pc = 0x16f2d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
    // 0x16f2d4: 0xe7ad042c  swc1        $f13, 0x42C($sp)
    ctx->pc = 0x16f2d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
    // 0x16f2d8: 0xe7ae0430  swc1        $f14, 0x430($sp)
    ctx->pc = 0x16f2d8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
    // 0x16f2dc: 0xe7af0434  swc1        $f15, 0x434($sp)
    ctx->pc = 0x16f2dcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
    // 0x16f2e0: 0xe7b00438  swc1        $f16, 0x438($sp)
    ctx->pc = 0x16f2e0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
    // 0x16f2e4: 0xe7b1043c  swc1        $f17, 0x43C($sp)
    ctx->pc = 0x16f2e4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
    // 0x16f2e8: 0xe7b20440  swc1        $f18, 0x440($sp)
    ctx->pc = 0x16f2e8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
    // 0x16f2ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16F2ECu;
    {
        const bool branch_taken_0x16f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2ECu;
        // 0x16f2f0: 0xe7b30444  swc1        $f19, 0x444($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2ec) {
            ctx->pc = 0x16F318u;
            goto label_16f318;
        }
    }
    ctx->pc = 0x16F2F4u;
    // 0x16f2f4: 0x27a20448  addiu       $v0, $sp, 0x448
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
    // 0x16f2f8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f304: 0xc066c26  jal         func_19B098
    ctx->pc = 0x16F304u;
    SET_GPR_U32(ctx, 31, 0x16F30Cu);
    ctx->pc = 0x16F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F304u;
    // 0x16f308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B098u, 0x16F304u, 0x16F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F30Cu;
label_16f30c:
    // 0x16f30c: 0x8f848b58  lw          $a0, -0x74A8($gp)
    ctx->pc = 0x16f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937432)));
    // 0x16f310: 0xc063b42  jal         func_18ED08
    ctx->pc = 0x16F310u;
    SET_GPR_U32(ctx, 31, 0x16F318u);
    ctx->pc = 0x16F314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F310u;
    // 0x16f314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED08u, 0x16F310u, 0x16F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F318u;
label_16f318:
    // 0x16f318: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x16f318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x16f31c: 0xdfbf0418  ld          $ra, 0x418($sp)
    ctx->pc = 0x16f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x16f320: 0x3e00008  jr          $ra
    ctx->pc = 0x16F320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F320u;
        // 0x16f324: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F328u;
}
