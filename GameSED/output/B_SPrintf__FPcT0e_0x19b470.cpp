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

// Function: B_SPrintf__FPcT0e
// Address: 0x19b470 - 0x19b4cc
void B_SPrintf__FPcT0e_0x19b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_SPrintf__FPcT0e_0x19b470");
#endif

    switch (ctx->pc) {
        case 0x19b4c0u: goto label_19b4c0;
        default: break;
    }

    ctx->pc = 0x19b470u;

    // 0x19b470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19b474: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x19b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b478: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x19b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x19b47c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19b47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b484: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x19b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x19b488: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x19b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x19b48c: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x19b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x19b490: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x19b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x19b494: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x19b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x19b498: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x19b498u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19b49c: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x19b49cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19b4a0: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x19b4a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19b4a4: 0xe7af002c  swc1        $f15, 0x2C($sp)
    ctx->pc = 0x19b4a4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19b4a8: 0xe7b00030  swc1        $f16, 0x30($sp)
    ctx->pc = 0x19b4a8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19b4ac: 0xe7b10034  swc1        $f17, 0x34($sp)
    ctx->pc = 0x19b4acu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x19b4b0: 0xe7b20038  swc1        $f18, 0x38($sp)
    ctx->pc = 0x19b4b0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x19b4b4: 0xe7b3003c  swc1        $f19, 0x3C($sp)
    ctx->pc = 0x19b4b4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x19b4b8: 0xc066c26  jal         func_19B098
    ctx->pc = 0x19B4B8u;
    SET_GPR_U32(ctx, 31, 0x19B4C0u);
    ctx->pc = 0x19B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4B8u;
    // 0x19b4bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B098u, 0x19B4B8u, 0x19B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4C0u;
label_19b4c0:
    // 0x19b4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4C4u;
        // 0x19b4c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4CCu;
}
