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

// Function: ApUnitFrameJobProc__FP7ApcUnitP10WcSequence
// Address: 0x14c240 - 0x14c418
void ApUnitFrameJobProc__FP7ApcUnitP10WcSequence_0x14c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitFrameJobProc__FP7ApcUnitP10WcSequence_0x14c240");
#endif

    switch (ctx->pc) {
        case 0x14c2b8u: goto label_14c2b8;
        case 0x14c2e4u: goto label_14c2e4;
        case 0x14c30cu: goto label_14c30c;
        case 0x14c338u: goto label_14c338;
        case 0x14c370u: goto label_14c370;
        case 0x14c3a0u: goto label_14c3a0;
        case 0x14c3e0u: goto label_14c3e0;
        case 0x14c3ecu: goto label_14c3ec;
        default: break;
    }

    ctx->pc = 0x14c240u;

    // 0x14c240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c244: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x14c244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14c248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c258: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14c25c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x14c25cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14c260: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x14c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x14c264: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x14c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14c268: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x14c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x14c26c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14c26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14c270: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x14C270u;
    {
        const bool branch_taken_0x14c270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c270) {
            ctx->pc = 0x14C274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C270u;
            // 0x14c274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C400u;
            goto label_14c400;
        }
    }
    ctx->pc = 0x14C278u;
    // 0x14c278: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14c27c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x14c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14c280: 0x5440005f  bnel        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x14C280u;
    {
        const bool branch_taken_0x14c280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c280) {
            ctx->pc = 0x14C284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C280u;
            // 0x14c284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C400u;
            goto label_14c400;
        }
    }
    ctx->pc = 0x14C288u;
    // 0x14c288: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14c28c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14C28Cu;
    {
        const bool branch_taken_0x14c28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c28c) {
            ctx->pc = 0x14C290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C28Cu;
            // 0x14c290: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C2BCu;
            goto label_14c2bc;
        }
    }
    ctx->pc = 0x14C294u;
    // 0x14c294: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x14c298: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C298u;
    {
        const bool branch_taken_0x14c298 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14c298) {
            ctx->pc = 0x14C29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C298u;
            // 0x14c29c: 0x8e0201c0  lw          $v0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C2BCu;
            goto label_14c2bc;
        }
    }
    ctx->pc = 0x14C2A0u;
    // 0x14c2a0: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x14c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x14c2a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C2A4u;
    {
        const bool branch_taken_0x14c2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2A4u;
        // 0x14c2a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2a4) {
            ctx->pc = 0x14C2B8u;
            goto label_14c2b8;
        }
    }
    ctx->pc = 0x14C2ACu;
    // 0x14c2ac: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x14c2acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x14c2b0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14C2B0u;
    SET_GPR_U32(ctx, 31, 0x14C2B8u);
    ctx->pc = 0x14C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2B0u;
    // 0x14c2b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14C2B0u, 0x14C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2B8u;
label_14c2b8:
    // 0x14c2b8: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_14c2bc:
    // 0x14c2bc: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x14C2BCu;
    {
        const bool branch_taken_0x14c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c2bc) {
            ctx->pc = 0x14C2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C2BCu;
            // 0x14c2c0: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C388u;
            goto label_14c388;
        }
    }
    ctx->pc = 0x14C2C4u;
    // 0x14c2c4: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14c2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14c2c8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14C2C8u;
    {
        const bool branch_taken_0x14c2c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x14C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2C8u;
        // 0x14c2cc: 0x8e110170  lw          $s1, 0x170($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2c8) {
            ctx->pc = 0x14C2E4u;
            goto label_14c2e4;
        }
    }
    ctx->pc = 0x14C2D0u;
    // 0x14c2d0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14c2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2d8: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14c2dc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14C2DCu;
    SET_GPR_U32(ctx, 31, 0x14C2E4u);
    ctx->pc = 0x14C2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C2DCu;
    // 0x14c2e0: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14C2DCu, 0x14C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2E4u;
label_14c2e4:
    // 0x14c2e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x14c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14c2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2ec: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x14c2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14c2f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14c2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c2f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14c2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c300: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x14c300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14c304: 0xc0514c2  jal         func_145308
    ctx->pc = 0x14C304u;
    SET_GPR_U32(ctx, 31, 0x14C30Cu);
    ctx->pc = 0x14C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C304u;
    // 0x14c308: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x14C304u, 0x14C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C30Cu;
label_14c30c:
    // 0x14c30c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x14c310: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x14c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x14c314: 0x920501ab  lbu         $a1, 0x1AB($s0)
    ctx->pc = 0x14c314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14c318: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2400C4u));
    // 0x14c31c: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x14c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x14c320: 0x8c440418  lw          $a0, 0x418($v0)
    ctx->pc = 0x14c320u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2400C8u));
    // 0x14c324: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C324u;
    {
        const bool branch_taken_0x14c324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C324u;
        // 0x14c328: 0xae040258  sw          $a0, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c324) {
            ctx->pc = 0x14C384u;
            goto label_14c384;
        }
    }
    ctx->pc = 0x14C32Cu;
    // 0x14c32c: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14c32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14c330: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14c330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14c334: 0x0  nop
    ctx->pc = 0x14c334u;
    // NOP
label_14c338:
    // 0x14c338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c33c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14C33Cu;
    {
        const bool branch_taken_0x14c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c33c) {
            ctx->pc = 0x14C340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C33Cu;
            // 0x14c340: 0x920201ab  lbu         $v0, 0x1AB($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C374u;
            goto label_14c374;
        }
    }
    ctx->pc = 0x14C344u;
    // 0x14c344: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x14c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c348: 0x8e050254  lw          $a1, 0x254($s0)
    ctx->pc = 0x14c348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x14c34c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14c34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14c350: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14c354: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14c354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14c358: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x14c358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14c35c: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x14c35cu;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14c360: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x14c360u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x14c364: 0x8e060258  lw          $a2, 0x258($s0)
    ctx->pc = 0x14c364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x14c368: 0xc0567f0  jal         func_159FC0
    ctx->pc = 0x14C368u;
    SET_GPR_U32(ctx, 31, 0x14C370u);
    ctx->pc = 0x14C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C368u;
    // 0x14c36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC0u, 0x14C368u, 0x14C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C370u;
label_14c370:
    // 0x14c370: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14c370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
label_14c374:
    // 0x14c374: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14c374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14c378: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14c378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c37c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14C37Cu;
    {
        const bool branch_taken_0x14c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C37Cu;
        // 0x14c380: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c37c) {
            ctx->pc = 0x14C338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c338;
        }
    }
    ctx->pc = 0x14C384u;
label_14c384:
    // 0x14c384: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x14c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_14c388:
    // 0x14c388: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14C388u;
    {
        const bool branch_taken_0x14c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C388u;
        // 0x14c38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c388) {
            ctx->pc = 0x14C3CCu;
            goto label_14c3cc;
        }
    }
    ctx->pc = 0x14C390u;
    // 0x14c390: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x14c394: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x14c394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c398: 0x34c693df  ori         $a2, $a2, 0x93DF
    ctx->pc = 0x14c398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37855);
    // 0x14c39c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_14c3a0:
    // 0x14c3a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c3a4: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C3A4u;
    {
        const bool branch_taken_0x14c3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x14C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3A4u;
        // 0x14c3a8: 0xc2182a  slt         $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3a4) {
            ctx->pc = 0x14C3BCu;
            goto label_14c3bc;
        }
    }
    ctx->pc = 0x14C3ACu;
    // 0x14c3ac: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C3ACu;
    {
        const bool branch_taken_0x14c3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c3ac) {
            ctx->pc = 0x14C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3ACu;
            // 0x14c3b0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3C0u;
            goto label_14c3c0;
        }
    }
    ctx->pc = 0x14C3B4u;
    // 0x14c3b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c3b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_14c3bc:
    // 0x14c3bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c3c0:
    // 0x14c3c0: 0x0  nop
    ctx->pc = 0x14c3c0u;
    // NOP
    // 0x14c3c4: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14C3C4u;
    {
        const bool branch_taken_0x14c3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c3c4) {
            ctx->pc = 0x14C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3C4u;
            // 0x14c3c8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c3a0;
        }
    }
    ctx->pc = 0x14C3CCu;
label_14c3cc:
    // 0x14c3cc: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x14c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x14c3d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C3D0u;
    {
        const bool branch_taken_0x14c3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c3d0) {
            ctx->pc = 0x14C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3D0u;
            // 0x14c3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3E4u;
            goto label_14c3e4;
        }
    }
    ctx->pc = 0x14C3D8u;
    // 0x14c3d8: 0xc056a0c  jal         func_15A830
    ctx->pc = 0x14C3D8u;
    SET_GPR_U32(ctx, 31, 0x14C3E0u);
    ctx->pc = 0x15A830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A830u, 0x14C3D8u, 0x14C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3E0u;
label_14c3e0:
    // 0x14c3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c3e4:
    // 0x14c3e4: 0xc053106  jal         func_14C418
    ctx->pc = 0x14C3E4u;
    SET_GPR_U32(ctx, 31, 0x14C3ECu);
    ctx->pc = 0x14C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3E4u;
    // 0x14c3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C418u, 0x14C3E4u, 0x14C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3ECu;
label_14c3ec:
    // 0x14c3ec: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x14c3f0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14c3f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14c3f8: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x14c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x14c3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c400:
    // 0x14c400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c408: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c40c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x14c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14c410: 0x3e00008  jr          $ra
    ctx->pc = 0x14C410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C410u;
        // 0x14c414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C418u;
}
