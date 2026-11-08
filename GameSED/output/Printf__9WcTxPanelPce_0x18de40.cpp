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

// Function: Printf__9WcTxPanelPce
// Address: 0x18de40 - 0x18de9c
void Printf__9WcTxPanelPce_0x18de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Printf__9WcTxPanelPce_0x18de40");
#endif

    switch (ctx->pc) {
        case 0x18de90u: goto label_18de90;
        default: break;
    }

    ctx->pc = 0x18de40u;

    // 0x18de40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18de44: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18de48: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x18de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x18de4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18de4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18de54: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x18de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x18de58: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x18de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x18de5c: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x18de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x18de60: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x18de60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x18de64: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x18de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x18de68: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x18de68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x18de6c: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x18de6cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x18de70: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x18de70u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x18de74: 0xe7af002c  swc1        $f15, 0x2C($sp)
    ctx->pc = 0x18de74u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18de78: 0xe7b00030  swc1        $f16, 0x30($sp)
    ctx->pc = 0x18de78u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18de7c: 0xe7b10034  swc1        $f17, 0x34($sp)
    ctx->pc = 0x18de7cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18de80: 0xe7b20038  swc1        $f18, 0x38($sp)
    ctx->pc = 0x18de80u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x18de84: 0xe7b3003c  swc1        $f19, 0x3C($sp)
    ctx->pc = 0x18de84u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x18de88: 0xc063764  jal         func_18DD90
    ctx->pc = 0x18DE88u;
    SET_GPR_U32(ctx, 31, 0x18DE90u);
    ctx->pc = 0x18DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE88u;
    // 0x18de8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x18DE88u, 0x18DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE90u;
label_18de90:
    // 0x18de90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18de90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18de94: 0x3e00008  jr          $ra
    ctx->pc = 0x18DE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE94u;
        // 0x18de98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DE9Cu;
}
