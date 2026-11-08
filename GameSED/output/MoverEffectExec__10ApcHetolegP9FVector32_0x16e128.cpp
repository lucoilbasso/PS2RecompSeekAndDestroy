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

// Function: MoverEffectExec__10ApcHetolegP9FVector32
// Address: 0x16e128 - 0x16e3e0
void MoverEffectExec__10ApcHetolegP9FVector32_0x16e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoverEffectExec__10ApcHetolegP9FVector32_0x16e128");
#endif

    switch (ctx->pc) {
        case 0x16e178u: goto label_16e178;
        case 0x16e240u: goto label_16e240;
        case 0x16e248u: goto label_16e248;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e36cu: goto label_16e36c;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3b8u: goto label_16e3b8;
        default: break;
    }

    ctx->pc = 0x16e128u;

    // 0x16e128: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16e12c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x16e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x16e130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e134: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x16e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x16e138: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16e138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e13c: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x16e13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16e140: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x16e140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x16e144: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x16e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x16e148: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x16e148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x16e14c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x16e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x16e150: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16e154: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16e154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16e158: 0xc62002e4  lwc1        $f0, 0x2E4($s1)
    ctx->pc = 0x16e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e15c: 0x8e260150  lw          $a2, 0x150($s1)
    ctx->pc = 0x16e15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x16e160: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16e160u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e164: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x16E164u;
    {
        const bool branch_taken_0x16e164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E164u;
        // 0x16e168: 0x8f858b54  lw          $a1, -0x74AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e164) {
            ctx->pc = 0x16E1E8u;
            goto label_16e1e8;
        }
    }
    ctx->pc = 0x16E16Cu;
    // 0x16e16c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e170: 0x262302c8  addiu       $v1, $s1, 0x2C8
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
    // 0x16e174: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16e174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16e178:
    // 0x16e178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e17c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x16e180: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16e180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16e184: 0x0  nop
    ctx->pc = 0x16e184u;
    // NOP
    // 0x16e188: 0x0  nop
    ctx->pc = 0x16e188u;
    // NOP
    // 0x16e18c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16E18Cu;
    {
        const bool branch_taken_0x16e18c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E18Cu;
        // 0x16e190: 0xac4500e0  sw          $a1, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e18c) {
            ctx->pc = 0x16E178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e178;
        }
    }
    ctx->pc = 0x16E194u;
    // 0x16e194: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x16e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e19c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e1a0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E1A0u;
    {
        const bool branch_taken_0x16e1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1a0) {
            ctx->pc = 0x16E1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1A0u;
            // 0x16e1a4: 0x8e2302d8  lw          $v1, 0x2D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E1C0u;
            goto label_16e1c0;
        }
    }
    ctx->pc = 0x16E1A8u;
    // 0x16e1a8: 0x8e2402dc  lw          $a0, 0x2DC($s1)
    ctx->pc = 0x16e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x16e1ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e1b0: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x16e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x16e1b4: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x16e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    // 0x16e1b8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16E1B8u;
    {
        const bool branch_taken_0x16e1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1B8u;
        // 0x16e1bc: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1b8) {
            ctx->pc = 0x16E3B8u;
            goto label_16e3b8;
        }
    }
    ctx->pc = 0x16E1C0u;
label_16e1c0:
    // 0x16e1c0: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x16e1c4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E1C4u;
    {
        const bool branch_taken_0x16e1c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16e1c4) {
            ctx->pc = 0x16E1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1C4u;
            // 0x16e1c8: 0xac6000e0  sw          $zero, 0xE0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E1CCu;
            goto label_16e1cc;
        }
    }
    ctx->pc = 0x16E1CCu;
label_16e1cc:
    // 0x16e1cc: 0x8e2402dc  lw          $a0, 0x2DC($s1)
    ctx->pc = 0x16e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x16e1d0: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x16e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x16e1d4: 0x4420078  bltzl       $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x16E1D4u;
    {
        const bool branch_taken_0x16e1d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16e1d4) {
            ctx->pc = 0x16E1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1D4u;
            // 0x16e1d8: 0xac8000e0  sw          $zero, 0xE0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3B8u;
            goto label_16e3b8;
        }
    }
    ctx->pc = 0x16E1DCu;
    // 0x16e1dc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x16E1DCu;
    {
        const bool branch_taken_0x16e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1DCu;
        // 0x16e1e0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1dc) {
            ctx->pc = 0x16E3BCu;
            goto label_16e3bc;
        }
    }
    ctx->pc = 0x16E1E4u;
    // 0x16e1e4: 0x0  nop
    ctx->pc = 0x16e1e4u;
    // NOP
label_16e1e8:
    // 0x16e1e8: 0x8e2302dc  lw          $v1, 0x2DC($s1)
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x16e1ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e1f0: 0x8e2402d8  lw          $a0, 0x2D8($s1)
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x16e1f4: 0xac8200e0  sw          $v0, 0xE0($a0)
    ctx->pc = 0x16e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 2));
    // 0x16e1f8: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    // 0x16e1fc: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x16e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x16e200: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x16e204: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16E204u;
    {
        const bool branch_taken_0x16e204 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16e204) {
            ctx->pc = 0x16E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E204u;
            // 0x16e208: 0xac6000e0  sw          $zero, 0xE0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E20Cu;
            goto label_16e20c;
        }
    }
    ctx->pc = 0x16E20Cu;
label_16e20c:
    // 0x16e20c: 0x10a0006a  beqz        $a1, . + 4 + (0x6A << 2)
    ctx->pc = 0x16E20Cu;
    {
        const bool branch_taken_0x16e20c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E20Cu;
        // 0x16e210: 0x24a30280  addiu       $v1, $a1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e20c) {
            ctx->pc = 0x16E3B8u;
            goto label_16e3b8;
        }
    }
    ctx->pc = 0x16E214u;
    // 0x16e214: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16e214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e218: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16e218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e21c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16e220: 0x8cd00690  lw          $s0, 0x690($a2)
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1680)));
    // 0x16e224: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16e228: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16e228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16e22c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E230u;
    {
        const bool branch_taken_0x16e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E230u;
        // 0x16e234: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e230) {
            ctx->pc = 0x16E240u;
            goto label_16e240;
        }
    }
    ctx->pc = 0x16E238u;
    // 0x16e238: 0xc061920  jal         func_186480
    ctx->pc = 0x16E238u;
    SET_GPR_U32(ctx, 31, 0x16E240u);
    ctx->pc = 0x16E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E238u;
    // 0x16e23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E238u, 0x16E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E240u;
label_16e240:
    // 0x16e240: 0xc061422  jal         func_185088
    ctx->pc = 0x16E240u;
    SET_GPR_U32(ctx, 31, 0x16E248u);
    ctx->pc = 0x16E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E240u;
    // 0x16e244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E240u, 0x16E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x16e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x16e24c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16e24cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e250: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16e250u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16e254: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x16e254u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16e258: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x16e258u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16e25c: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16e260: 0xfa650010  sqc2        $vf5, 0x10($s3)
    ctx->pc = 0x16e260u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16e264: 0xfa660020  sqc2        $vf6, 0x20($s3)
    ctx->pc = 0x16e264u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16e268: 0xfa670030  sqc2        $vf7, 0x30($s3)
    ctx->pc = 0x16e268u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16e26c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x16e26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x16e270: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x16e270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x16e274: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x16e274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16e278: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x16e278u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e27c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x16e27cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16e280: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x16e280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16e284: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x16e284u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x16e288: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x16e288u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16e28c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x16e28cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e290: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x16e290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e294: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x16e294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16e298: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16e298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16e29c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x16e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16e2a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x16e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e2a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16e2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e2a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16E2A8u;
    {
        const bool branch_taken_0x16e2a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A8u;
        // 0x16e2ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2a8) {
            ctx->pc = 0x16E2B4u;
            goto label_16e2b4;
        }
    }
    ctx->pc = 0x16E2B0u;
    // 0x16e2b0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e2b4:
    // 0x16e2b4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x16e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e2b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e2bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e2c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16E2C0u;
    {
        const bool branch_taken_0x16e2c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2C0u;
        // 0x16e2c4: 0x240a0003  addiu       $t2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2c0) {
            ctx->pc = 0x16E2CCu;
            goto label_16e2cc;
        }
    }
    ctx->pc = 0x16E2C8u;
    // 0x16e2c8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e2cc:
    // 0x16e2cc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16e2d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16e2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e2d4: 0x2449d470  addiu       $t1, $v0, -0x2B90
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956144));
    // 0x16e2d8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e2dc: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x16e2dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e2e0: 0x262702cc  addiu       $a3, $s1, 0x2CC
    ctx->pc = 0x16e2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    // 0x16e2e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x16e2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e2e8:
    // 0x16e2e8: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E2E8u;
    {
        const bool branch_taken_0x16e2e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2e8) {
            ctx->pc = 0x16E340u;
            goto label_16e340;
        }
    }
    ctx->pc = 0x16E2F0u;
    // 0x16e2f0: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x16e2f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e2f8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x16e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16e2fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e300: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x16e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16e304: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x16e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x16e308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e30c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16e310: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x16e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x16e314: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x16e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x16e318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e31c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16e320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16e324: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E324u;
    {
        const bool branch_taken_0x16e324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e324) {
            ctx->pc = 0x16E328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E324u;
            // 0x16e328: 0xaccc00e0  sw          $t4, 0xE0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E340u;
            goto label_16e340;
        }
    }
    ctx->pc = 0x16E32Cu;
    // 0x16e32c: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x16e330: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x16e330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16e334: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E334u;
        // 0x16e338: 0x1a2a00b  movn        $s4, $t5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E340u;
            goto label_16e340;
        }
    }
    ctx->pc = 0x16E33Cu;
    // 0x16e33c: 0xacc000e0  sw          $zero, 0xE0($a2)
    ctx->pc = 0x16e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 0));
label_16e340:
    // 0x16e340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x16e344: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x16e344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16e348: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16E348u;
    {
        const bool branch_taken_0x16e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e348) {
            ctx->pc = 0x16E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E348u;
            // 0x16e34c: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e2e8;
        }
    }
    ctx->pc = 0x16E350u;
    // 0x16e350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e354: 0x16820019  bne         $s4, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16E354u;
    {
        const bool branch_taken_0x16e354 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E354u;
        // 0x16e358: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e354) {
            ctx->pc = 0x16E3BCu;
            goto label_16e3bc;
        }
    }
    ctx->pc = 0x16E35Cu;
    // 0x16e35c: 0x52a00018  beql        $s5, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16E35Cu;
    {
        const bool branch_taken_0x16e35c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e35c) {
            ctx->pc = 0x16E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E35Cu;
            // 0x16e360: 0xdfb10068  ld          $s1, 0x68($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E3C0u;
            goto label_16e3c0;
        }
    }
    ctx->pc = 0x16E364u;
    // 0x16e364: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16E364u;
    SET_GPR_U32(ctx, 31, 0x16E36Cu);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16E364u, 0x16E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E36Cu;
label_16e36c:
    // 0x16e36c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e370: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16e374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e37c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16e37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16e380: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16e380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16e384: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16e384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16e388: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16e38c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e38cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16e390: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e390u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16e394: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e394u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16e398: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16e398u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16e39c: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16E39Cu;
    SET_GPR_U32(ctx, 31, 0x16E3A4u);
    ctx->pc = 0x16E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E39Cu;
    // 0x16e3a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16E39Cu, 0x16E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3A4u;
label_16e3a4:
    // 0x16e3a4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x16e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16e3a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3b0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16E3B0u;
    SET_GPR_U32(ctx, 31, 0x16E3B8u);
    ctx->pc = 0x16E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3B0u;
    // 0x16e3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16E3B0u, 0x16E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3B8u;
label_16e3b8:
    // 0x16e3b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x16e3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16e3bc:
    // 0x16e3bc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x16e3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_16e3c0:
    // 0x16e3c0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x16e3c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e3c4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x16e3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16e3c8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x16e3c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16e3cc: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x16e3ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16e3d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16e3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16e3d4: 0xc7b40098  lwc1        $f20, 0x98($sp)
    ctx->pc = 0x16e3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D8u;
        // 0x16e3dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E3E0u;
}
