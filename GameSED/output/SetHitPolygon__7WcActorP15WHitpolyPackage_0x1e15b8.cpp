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

// Function: SetHitPolygon__7WcActorP15WHitpolyPackage
// Address: 0x1e15b8 - 0x1e1630
void SetHitPolygon__7WcActorP15WHitpolyPackage_0x1e15b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHitPolygon__7WcActorP15WHitpolyPackage_0x1e15b8");
#endif

    ctx->pc = 0x1e15b8u;

    // 0x1e15b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e15b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e15bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e15bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e15c0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1e15c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e15c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e15c8: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1e15c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15cc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e15d0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1e15d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e15d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e15d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e15d8: 0xac8600dc  sw          $a2, 0xDC($a0)
    ctx->pc = 0x1e15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 6));
    // 0x1e15dc: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x1e15dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1e15e0: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x1e15e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1e15e4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1e15e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e15e8: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x1e15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
    // 0x1e15ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E15ECu;
    {
        const bool branch_taken_0x1e15ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15ECu;
        // 0x1e15f0: 0xe48100e4  swc1        $f1, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15ec) {
            ctx->pc = 0x1E160Cu;
            goto label_1e160c;
        }
    }
    ctx->pc = 0x1E15F4u;
    // 0x1e15f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e15f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e15f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e15f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e15fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E15FCu;
    {
        const bool branch_taken_0x1e15fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15FCu;
        // 0x1e1600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15fc) {
            ctx->pc = 0x1E1608u;
            goto label_1e1608;
        }
    }
    ctx->pc = 0x1E1604u;
    // 0x1e1604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e1604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1608:
    // 0x1e1608: 0xac8200d8  sw          $v0, 0xD8($a0)
    ctx->pc = 0x1e1608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
label_1e160c:
    // 0x1e160c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1e160cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1e1610: 0xfc820110  sd          $v0, 0x110($a0)
    ctx->pc = 0x1e1610u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 272), GPR_U64(ctx, 2));
    // 0x1e1614: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x1e1614u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1e1618: 0xfc830118  sd          $v1, 0x118($a0)
    ctx->pc = 0x1e1618u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 280), GPR_U64(ctx, 3));
    // 0x1e161c: 0xdcc20030  ld          $v0, 0x30($a2)
    ctx->pc = 0x1e161cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1e1620: 0xfc820120  sd          $v0, 0x120($a0)
    ctx->pc = 0x1e1620u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 288), GPR_U64(ctx, 2));
    // 0x1e1624: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x1e1624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1e1628: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1628u;
        // 0x1e162c: 0xfc830128  sd          $v1, 0x128($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 296), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1630u;
}
