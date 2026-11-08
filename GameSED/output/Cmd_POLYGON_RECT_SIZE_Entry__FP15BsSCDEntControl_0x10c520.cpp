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

// Function: Cmd_POLYGON_RECT_SIZE_Entry__FP15BsSCDEntControl
// Address: 0x10c520 - 0x10c5ac
void Cmd_POLYGON_RECT_SIZE_Entry__FP15BsSCDEntControl_0x10c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_POLYGON_RECT_SIZE_Entry__FP15BsSCDEntControl_0x10c520");
#endif

    switch (ctx->pc) {
        case 0x10c558u: goto label_10c558;
        case 0x10c564u: goto label_10c564;
        case 0x10c574u: goto label_10c574;
        case 0x10c590u: goto label_10c590;
        default: break;
    }

    ctx->pc = 0x10c520u;

    // 0x10c520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c530: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c53c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x10c53cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10c540: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x10c540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10c544: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10c544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10c548: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10c548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10c54c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c550: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C550u;
    SET_GPR_U32(ctx, 31, 0x10C558u);
    ctx->pc = 0x10C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C550u;
    // 0x10c554: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C550u, 0x10C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C558u;
label_10c558:
    // 0x10c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c55c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C55Cu;
    SET_GPR_U32(ctx, 31, 0x10C564u);
    ctx->pc = 0x10C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C55Cu;
    // 0x10c560: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C55Cu, 0x10C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C564u;
label_10c564:
    // 0x10c564: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x10c564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c568: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x10c568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x10c56c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C56Cu;
    SET_GPR_U32(ctx, 31, 0x10C574u);
    ctx->pc = 0x10C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C56Cu;
    // 0x10c570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C56Cu, 0x10C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C574u;
label_10c574:
    // 0x10c574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c578: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10c578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c57c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x10c57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x10c580: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x10c580u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x10c584: 0x46156b42  mul.s       $f13, $f13, $f21
    ctx->pc = 0x10c584u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[21]);
    // 0x10c588: 0xc063d1e  jal         func_18F478
    ctx->pc = 0x10C588u;
    SET_GPR_U32(ctx, 31, 0x10C590u);
    ctx->pc = 0x10C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C588u;
    // 0x10c58c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F478u, 0x10C588u, 0x10C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C590u;
label_10c590:
    // 0x10c590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c59c: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x10c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c5a0: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x10c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5A4u;
        // 0x10c5a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C5ACu;
}
