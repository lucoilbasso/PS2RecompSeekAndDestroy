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

// Function: Cmd_EXPLO_SIZE_Entry__FP15BsSCDEntControl
// Address: 0x10c850 - 0x10c904
void Cmd_EXPLO_SIZE_Entry__FP15BsSCDEntControl_0x10c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXPLO_SIZE_Entry__FP15BsSCDEntControl_0x10c850");
#endif

    switch (ctx->pc) {
        case 0x10c878u: goto label_10c878;
        case 0x10c88cu: goto label_10c88c;
        default: break;
    }

    ctx->pc = 0x10c850u;

    // 0x10c850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c854: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c858: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c85c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10c860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c86c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10c870: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C870u;
    SET_GPR_U32(ctx, 31, 0x10C878u);
    ctx->pc = 0x10C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C870u;
    // 0x10c874: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C870u, 0x10C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C878u;
label_10c878:
    // 0x10c878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c87c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10c87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c880: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10c880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c884: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10C884u;
    SET_GPR_U32(ctx, 31, 0x10C88Cu);
    ctx->pc = 0x10C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C884u;
    // 0x10c888: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10C884u, 0x10C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C88Cu;
label_10c88c:
    // 0x10c88c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x10c88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c890: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x10c890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10c894: 0xe6000220  swc1        $f0, 0x220($s0)
    ctx->pc = 0x10c894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
    // 0x10c898: 0xc6050170  lwc1        $f5, 0x170($s0)
    ctx->pc = 0x10c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x10c89c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x10c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c8a0: 0xe6020228  swc1        $f2, 0x228($s0)
    ctx->pc = 0x10c8a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x10c8a4: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x10c8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x10c8a8: 0xe602022c  swc1        $f2, 0x22C($s0)
    ctx->pc = 0x10c8a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x10c8ac: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x10c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c8b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x10c8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c8b4: 0xc6030174  lwc1        $f3, 0x174($s0)
    ctx->pc = 0x10c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10c8b8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x10c8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x10c8bc: 0xc604017c  lwc1        $f4, 0x17C($s0)
    ctx->pc = 0x10c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10c8c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10c8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c8c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c8c8: 0x0  nop
    ctx->pc = 0x10c8c8u;
    // NOP
    // 0x10c8cc: 0x0  nop
    ctx->pc = 0x10c8ccu;
    // NOP
    // 0x10c8d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10c8d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x10c8d4: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x10c8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x10c8d8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x10c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c8dc: 0xe602023c  swc1        $f2, 0x23C($s0)
    ctx->pc = 0x10c8dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 572), bits); }
    // 0x10c8e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x10c8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10c8e4: 0xe6020238  swc1        $f2, 0x238($s0)
    ctx->pc = 0x10c8e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 568), bits); }
    // 0x10c8e8: 0x0  nop
    ctx->pc = 0x10c8e8u;
    // NOP
    // 0x10c8ec: 0x0  nop
    ctx->pc = 0x10c8ecu;
    // NOP
    // 0x10c8f0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x10c8f0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x10c8f4: 0xe6010234  swc1        $f1, 0x234($s0)
    ctx->pc = 0x10c8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    // 0x10c8f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10c8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8FCu;
        // 0x10c900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C904u;
}
