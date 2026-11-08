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

// Function: wall_render_proc__FP9WcHitpolyP15WHitpolyPackageiP9FVector32
// Address: 0x13e140 - 0x13e780
void wall_render_proc__FP9WcHitpolyP15WHitpolyPackageiP9FVector32_0x13e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("wall_render_proc__FP9WcHitpolyP15WHitpolyPackageiP9FVector32_0x13e140");
#endif

    switch (ctx->pc) {
        case 0x13e1c8u: goto label_13e1c8;
        case 0x13e1d0u: goto label_13e1d0;
        case 0x13e1f4u: goto label_13e1f4;
        case 0x13e2a0u: goto label_13e2a0;
        case 0x13e338u: goto label_13e338;
        case 0x13e424u: goto label_13e424;
        case 0x13e430u: goto label_13e430;
        case 0x13e450u: goto label_13e450;
        case 0x13e458u: goto label_13e458;
        case 0x13e47cu: goto label_13e47c;
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4f0u: goto label_13e4f0;
        case 0x13e514u: goto label_13e514;
        case 0x13e530u: goto label_13e530;
        case 0x13e5b8u: goto label_13e5b8;
        case 0x13e634u: goto label_13e634;
        case 0x13e640u: goto label_13e640;
        case 0x13e660u: goto label_13e660;
        case 0x13e668u: goto label_13e668;
        case 0x13e690u: goto label_13e690;
        case 0x13e6e4u: goto label_13e6e4;
        case 0x13e70cu: goto label_13e70c;
        case 0x13e714u: goto label_13e714;
        case 0x13e728u: goto label_13e728;
        default: break;
    }

    ctx->pc = 0x13e140u;

    // 0x13e140: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x13e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x13e144: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13e144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13e148: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x13e148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x13e14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e150: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x13e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x13e154: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x13e154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x13e158: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x13e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x13e15c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x13e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x13e160: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x13e160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x13e164: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x13e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x13e168: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x13e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x13e16c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x13e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x13e170: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x13e170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x13e174: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x13e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x13e178: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x13e178u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x13e17c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x13e17cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x13e180: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x13e180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x13e184: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x13e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x13e188: 0xafa400e4  sw          $a0, 0xE4($sp)
    ctx->pc = 0x13e188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
    // 0x13e18c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x13e190: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x13e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13e194: 0x8cb50014  lw          $s5, 0x14($a1)
    ctx->pc = 0x13e194u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x13e198: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E198u;
    {
        const bool branch_taken_0x13e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E198u;
        // 0x13e19c: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e198) {
            ctx->pc = 0x13E1C0u;
            goto label_13e1c0;
        }
    }
    ctx->pc = 0x13E1A0u;
    // 0x13e1a0: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x13e1a4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e1a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13e1ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13e1b0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x13e1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13e1b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E1B4u;
    {
        const bool branch_taken_0x13e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1B4u;
        // 0x13e1b8: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1b4) {
            ctx->pc = 0x13E1F4u;
            goto label_13e1f4;
        }
    }
    ctx->pc = 0x13E1BCu;
    // 0x13e1bc: 0x0  nop
    ctx->pc = 0x13e1bcu;
    // NOP
label_13e1c0:
    // 0x13e1c0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E1C0u;
    SET_GPR_U32(ctx, 31, 0x13E1C8u);
    ctx->pc = 0x13E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E1C0u;
    // 0x13e1c4: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E1C0u, 0x13E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E1C8u;
label_13e1c8:
    // 0x13e1c8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E1C8u;
    SET_GPR_U32(ctx, 31, 0x13E1D0u);
    ctx->pc = 0x13E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E1C8u;
    // 0x13e1cc: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E1C8u, 0x13E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E1D0u;
label_13e1d0:
    // 0x13e1d0: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e1d4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x13e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e1d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e1dc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13e1e0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e1e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e1e8: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x13e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x13e1ec: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E1ECu;
    SET_GPR_U32(ctx, 31, 0x13E1F4u);
    ctx->pc = 0x13E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E1ECu;
    // 0x13e1f0: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E1ECu, 0x13E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E1F4u;
label_13e1f4:
    // 0x13e1f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e1f8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x13e1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13e1fc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x13e1fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x13e200: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x13e200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x13e204: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13e208: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x13e208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x13e20c: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x13e20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13e210: 0x24890040  addiu       $t1, $a0, 0x40
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x13e214: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13e218: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13e21c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x13e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x13e220: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x13e220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x13e224: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x13e224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x13e228: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13e228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13e22c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x13e22cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x13e230: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13e230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13e234: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x13e234u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x13e238: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x13e238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13e23c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x13e23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x13e240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13e244: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x13e244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x13e248: 0x90c8c478  lbu         $t0, -0x3B88($a2)
    ctx->pc = 0x13e248u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x1FC478u));
    // 0x13e24c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13e24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13e250: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13e254: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x13e254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13e258: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x13e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13e25c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x13e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x13e260: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x13e260u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x13e264: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x13e264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x13e268: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x13e268u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x13e26c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x13e26cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x13e270: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13e270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13e274: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13e278: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x13e278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x13e27c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13e27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13e280: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x13e280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x13e284: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x13E284u;
    {
        const bool branch_taken_0x13e284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E284u;
        // 0x13e288: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e284) {
            ctx->pc = 0x13E5D8u;
            goto label_13e5d8;
        }
    }
    ctx->pc = 0x13E28Cu;
    // 0x13e28c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e290: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13e290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x13e294: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e298: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e29c: 0x0  nop
    ctx->pc = 0x13e29cu;
    // NOP
label_13e2a0:
    // 0x13e2a0: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x13e2a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13e2a4: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x13e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x13e2a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13e2ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13e2b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13e2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e2b4: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x13e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x13e2b8: 0x96a40006  lhu         $a0, 0x6($s5)
    ctx->pc = 0x13e2b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x13e2bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x13e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13e2c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13e2c4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x13e2c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e2c8: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x13e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x13e2cc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x13e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13e2d0: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x13e2d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13e2d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13e2d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13e2dc: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x13e2dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13e2e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13e2e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13e2e8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x13e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x13e2ec: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x13e2ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x13e2f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e2f4: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x13e2f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13e2f8: 0x24a5ebb0  addiu       $a1, $a1, -0x1450
    ctx->pc = 0x13e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962096));
    // 0x13e2fc: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x13e2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x13e300: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x13e304: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x13e304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x13e308: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x13e308u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x13e30c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x13e30cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x13e310: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x13e310u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x13e314: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x13e314u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x13e318: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x13e318u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x13e31c: 0xd8750010  lqc2        $vf21, 0x10($v1)
    ctx->pc = 0x13e31cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x13e320: 0xd8760020  lqc2        $vf22, 0x20($v1)
    ctx->pc = 0x13e320u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x13e324: 0xd8770030  lqc2        $vf23, 0x30($v1)
    ctx->pc = 0x13e324u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x13e328: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e32c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e330: 0x2e0682d  daddu       $t5, $s7, $zero
    ctx->pc = 0x13e330u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e334: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x13e334u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
label_13e338:
    // 0x13e338: 0xd9a80000  lqc2        $vf8, 0x0($t5)
    ctx->pc = 0x13e338u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13e33c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13e33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e340: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13e340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e344: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13e344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e348: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13e348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e34c: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x13e34cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13e350: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x13e350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e354: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x13e354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e358: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x13e358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e35c: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x13e35cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e360: 0x4be8bb4b  vmaddw.xyzw $vf13, $vf23, $vf8w
    ctx->pc = 0x13e360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13e364: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e364u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13e368: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x13e368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e36c: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e36cu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13e370: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x13e370u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e374: 0xf98c0000  sqc2        $vf12, 0x0($t4)
    ctx->pc = 0x13e374u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13e378: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x13e378u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x13e37c: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x13e37cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x13e380: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x13e380u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x13e384: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13E384u;
    {
        const bool branch_taken_0x13e384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e384) {
            ctx->pc = 0x13E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e338;
        }
    }
    ctx->pc = 0x13E38Cu;
    // 0x13e38c: 0x0  nop
    ctx->pc = 0x13e38cu;
    // NOP
    // 0x13e390: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x13e390u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x13e394: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x13e394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x13e398: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e39c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13e39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13e3a0: 0x14800085  bnez        $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x13E3A0u;
    {
        const bool branch_taken_0x13e3a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3A0u;
        // 0x13e3a4: 0x8fa500e8  lw          $a1, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3a0) {
            ctx->pc = 0x13E5B8u;
            goto label_13e5b8;
        }
    }
    ctx->pc = 0x13E3A8u;
    // 0x13e3a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e3ac: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13e3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3b0: 0x8fb600e4  lw          $s6, 0xE4($sp)
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x13e3b4: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x13e3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13e3b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e3bc: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x13e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13e3c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13e3c4: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x13e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x13e3c8: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x13e3c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e3cc: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x13e3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x13e3d0: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x13E3D0u;
    {
        const bool branch_taken_0x13e3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3D0u;
        // 0x13e3d4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3d0) {
            ctx->pc = 0x13E530u;
            goto label_13e530;
        }
    }
    ctx->pc = 0x13E3D8u;
    // 0x13e3d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3dc: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13e3e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x13e3e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13e3e8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13e3ec: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13e3f0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x13e3f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e3f4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13e3f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13e3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13e3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13e400: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x13e400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x13e404: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e408: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x13e408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x13e40c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e410: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e414: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13e414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13e418: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13e418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13e41c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E41Cu;
    SET_GPR_U32(ctx, 31, 0x13E424u);
    ctx->pc = 0x13E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E41Cu;
    // 0x13e420: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E41Cu, 0x13E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E424u;
label_13e424:
    // 0x13e424: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13e428: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e42c: 0x0  nop
    ctx->pc = 0x13e42cu;
    // NOP
label_13e430:
    // 0x13e430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e434: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e438: 0x0  nop
    ctx->pc = 0x13e438u;
    // NOP
    // 0x13e43c: 0x0  nop
    ctx->pc = 0x13e43cu;
    // NOP
    // 0x13e440: 0x0  nop
    ctx->pc = 0x13e440u;
    // NOP
    // 0x13e444: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E444u;
    {
        const bool branch_taken_0x13e444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e444) {
            ctx->pc = 0x13E430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e430;
        }
    }
    ctx->pc = 0x13E44Cu;
    // 0x13e44c: 0x0  nop
    ctx->pc = 0x13e44cu;
    // NOP
label_13e450:
    // 0x13e450: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13E450u;
    SET_GPR_U32(ctx, 31, 0x13E458u);
    ctx->pc = 0x13E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E450u;
    // 0x13e454: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13E450u, 0x13E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E458u;
label_13e458:
    // 0x13e458: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13e45c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13E45Cu;
    {
        const bool branch_taken_0x13e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E45Cu;
        // 0x13e460: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e45c) {
            ctx->pc = 0x13E450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e450;
        }
    }
    ctx->pc = 0x13E464u;
    // 0x13e464: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E468u;
    {
        const bool branch_taken_0x13e468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e468) {
            ctx->pc = 0x13E47Cu;
            goto label_13e47c;
        }
    }
    ctx->pc = 0x13E470u;
    // 0x13e470: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13e474: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E474u;
    SET_GPR_U32(ctx, 31, 0x13E47Cu);
    ctx->pc = 0x13E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E474u;
    // 0x13e478: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E474u, 0x13E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E47Cu;
label_13e47c:
    // 0x13e47c: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13e480: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13e484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e488: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13e488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13e48c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e490: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13e494: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13e494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13e498: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x13e498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x13e49c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13e4a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13e4a4: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13e4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13e4a8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x13e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x13e4ac: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x13e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x13e4b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13e4b4: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E4B8u;
    {
        const bool branch_taken_0x13e4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4B8u;
        // 0x13e4bc: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4b8) {
            ctx->pc = 0x13E4E0u;
            goto label_13e4e0;
        }
    }
    ctx->pc = 0x13E4C0u;
    // 0x13e4c0: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x13e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x13e4c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e4c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13e4cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13e4d0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x13e4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13e4d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E4D4u;
    {
        const bool branch_taken_0x13e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4D4u;
        // 0x13e4d8: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4d4) {
            ctx->pc = 0x13E514u;
            goto label_13e514;
        }
    }
    ctx->pc = 0x13E4DCu;
    // 0x13e4dc: 0x0  nop
    ctx->pc = 0x13e4dcu;
    // NOP
label_13e4e0:
    // 0x13e4e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E4E0u;
    SET_GPR_U32(ctx, 31, 0x13E4E8u);
    ctx->pc = 0x13E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4E0u;
    // 0x13e4e4: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E4E0u, 0x13E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4E8u;
label_13e4e8:
    // 0x13e4e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E4E8u;
    SET_GPR_U32(ctx, 31, 0x13E4F0u);
    ctx->pc = 0x13E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E4E8u;
    // 0x13e4ec: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E4E8u, 0x13E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E4F0u;
label_13e4f0:
    // 0x13e4f0: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x13e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x13e4f4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13e4f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e4fc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13e500: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e504: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x13e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x13e508: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x13e508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x13e50c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E50Cu;
    SET_GPR_U32(ctx, 31, 0x13E514u);
    ctx->pc = 0x13E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E50Cu;
    // 0x13e510: 0xae25008c  sw          $a1, 0x8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E50Cu, 0x13E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E514u;
label_13e514:
    // 0x13e514: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e518: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x13e518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x13e51c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x13e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x13e520: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13e524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E524u;
    {
        const bool branch_taken_0x13e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e524) {
            ctx->pc = 0x13E534u;
            goto label_13e534;
        }
    }
    ctx->pc = 0x13E52Cu;
    // 0x13e52c: 0x0  nop
    ctx->pc = 0x13e52cu;
    // NOP
label_13e530:
    // 0x13e530: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x13e530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_13e534:
    // 0x13e534: 0x3c025022  lui         $v0, 0x5022
    ctx->pc = 0x13e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20514 << 16));
    // 0x13e538: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13e538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13e53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13e540: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x13e540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x13e544: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x13e544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x13e548: 0x34a5444e  ori         $a1, $a1, 0x444E
    ctx->pc = 0x13e548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17486);
    // 0x13e54c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x13e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x13e550: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13e554: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x13e554u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x13e558: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x13e558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e55c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e560: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e564: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13e568: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x13e568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e56c: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x13e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x13e570: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e574: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13e574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13e578: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x13e578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e57c: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x13e57cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13e580: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e584: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x13e584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e588: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e58c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x13e58cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e590: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x13e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e594: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x13e594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13e598: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x13e598u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x13e59c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13e59cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e5a0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x13e5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x13e5a4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x13e5a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e5a8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13e5ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13e5acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e5b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13e5b4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x13e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_13e5b8:
    // 0x13e5b8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x13e5b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13e5bc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x13e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13e5c0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x13e5c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x13e5c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e5c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13e5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e5cc: 0x1440ff34  bnez        $v0, . + 4 + (-0xCC << 2)
    ctx->pc = 0x13E5CCu;
    {
        const bool branch_taken_0x13e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5CCu;
        // 0x13e5d0: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5cc) {
            ctx->pc = 0x13E2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e2a0;
        }
    }
    ctx->pc = 0x13E5D4u;
    // 0x13e5d4: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x13e5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13e5d8:
    // 0x13e5d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x13e5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e5dc: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x13e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13e5e0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13e5e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13e5e8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x13E5E8u;
    {
        const bool branch_taken_0x13e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E8u;
        // 0x13e5ec: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5e8) {
            ctx->pc = 0x13E6D0u;
            goto label_13e6d0;
        }
    }
    ctx->pc = 0x13E5F0u;
    // 0x13e5f0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13e5f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13e5f8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13e5fc: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13e600: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13e600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e604: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13e604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13e608: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13e608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13e60c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e610: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x13e610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x13e614: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e618: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x13e618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x13e61c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e620: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e624: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13e624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13e628: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13e628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13e62c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E62Cu;
    SET_GPR_U32(ctx, 31, 0x13E634u);
    ctx->pc = 0x13E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E62Cu;
    // 0x13e630: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E62Cu, 0x13E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E634u;
label_13e634:
    // 0x13e634: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13e634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13e638: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e63c: 0x0  nop
    ctx->pc = 0x13e63cu;
    // NOP
label_13e640:
    // 0x13e640: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e644: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e648: 0x0  nop
    ctx->pc = 0x13e648u;
    // NOP
    // 0x13e64c: 0x0  nop
    ctx->pc = 0x13e64cu;
    // NOP
    // 0x13e650: 0x0  nop
    ctx->pc = 0x13e650u;
    // NOP
    // 0x13e654: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E654u;
    {
        const bool branch_taken_0x13e654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e654) {
            ctx->pc = 0x13E640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e640;
        }
    }
    ctx->pc = 0x13E65Cu;
    // 0x13e65c: 0x0  nop
    ctx->pc = 0x13e65cu;
    // NOP
label_13e660:
    // 0x13e660: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13E660u;
    SET_GPR_U32(ctx, 31, 0x13E668u);
    ctx->pc = 0x13E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E660u;
    // 0x13e664: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13E660u, 0x13E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E668u;
label_13e668:
    // 0x13e668: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13e66c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13E66Cu;
    {
        const bool branch_taken_0x13e66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E66Cu;
        // 0x13e670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e66c) {
            ctx->pc = 0x13E660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e660;
        }
    }
    ctx->pc = 0x13E674u;
    // 0x13e674: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13e674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e67c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E67Cu;
    {
        const bool branch_taken_0x13e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E67Cu;
        // 0x13e680: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e67c) {
            ctx->pc = 0x13E690u;
            goto label_13e690;
        }
    }
    ctx->pc = 0x13E684u;
    // 0x13e684: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13e684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13e688: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E688u;
    SET_GPR_U32(ctx, 31, 0x13E690u);
    ctx->pc = 0x13E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E688u;
    // 0x13e68c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E688u, 0x13E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E690u;
label_13e690:
    // 0x13e690: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13e694: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13e698: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13e698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e69c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13e6a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e6a4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13e6a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13e6ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x13e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x13e6b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13e6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13e6b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13e6b8: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13e6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13e6bc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x13e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x13e6c0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x13e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x13e6c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13E6C4u;
    {
        const bool branch_taken_0x13e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6C4u;
        // 0x13e6c8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6c4) {
            ctx->pc = 0x13E744u;
            goto label_13e744;
        }
    }
    ctx->pc = 0x13E6CCu;
    // 0x13e6cc: 0x0  nop
    ctx->pc = 0x13e6ccu;
    // NOP
label_13e6d0:
    // 0x13e6d0: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x13e6d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13E6D4u;
    {
        const bool branch_taken_0x13e6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D4u;
        // 0x13e6d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6d4) {
            ctx->pc = 0x13E720u;
            goto label_13e720;
        }
    }
    ctx->pc = 0x13E6DCu;
    // 0x13e6dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E6DCu;
    SET_GPR_U32(ctx, 31, 0x13E6E4u);
    ctx->pc = 0x13E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6DCu;
    // 0x13e6e0: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E6DCu, 0x13E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6E4u;
label_13e6e4:
    // 0x13e6e4: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x13e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x13e6e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x13e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e6ec: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x13e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x13e6f0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x13e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x13e6f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13e6f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13e6f8: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x13e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x13e6fc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13e6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13e700: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x13e700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x13e704: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E704u;
    SET_GPR_U32(ctx, 31, 0x13E70Cu);
    ctx->pc = 0x13E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E704u;
    // 0x13e708: 0xae70008c  sw          $s0, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E704u, 0x13E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E70Cu;
label_13e70c:
    // 0x13e70c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E70Cu;
    SET_GPR_U32(ctx, 31, 0x13E714u);
    ctx->pc = 0x13E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E70Cu;
    // 0x13e710: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E70Cu, 0x13E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E714u;
label_13e714:
    // 0x13e714: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13E714u;
    {
        const bool branch_taken_0x13e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E714u;
        // 0x13e718: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e714) {
            ctx->pc = 0x13E748u;
            goto label_13e748;
        }
    }
    ctx->pc = 0x13E71Cu;
    // 0x13e71c: 0x0  nop
    ctx->pc = 0x13e71cu;
    // NOP
label_13e720:
    // 0x13e720: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e724: 0x0  nop
    ctx->pc = 0x13e724u;
    // NOP
label_13e728:
    // 0x13e728: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e72c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e730: 0x0  nop
    ctx->pc = 0x13e730u;
    // NOP
    // 0x13e734: 0x0  nop
    ctx->pc = 0x13e734u;
    // NOP
    // 0x13e738: 0x0  nop
    ctx->pc = 0x13e738u;
    // NOP
    // 0x13e73c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E73Cu;
    {
        const bool branch_taken_0x13e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e73c) {
            ctx->pc = 0x13E728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e728;
        }
    }
    ctx->pc = 0x13E744u;
label_13e744:
    // 0x13e744: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x13e744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_13e748:
    // 0x13e748: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x13e748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13e74c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x13e74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13e750: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x13e750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e754: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x13e754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13e758: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x13e758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x13e75c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x13e75cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13e760: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x13e760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x13e764: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x13e764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x13e768: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x13e768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x13e76c: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x13e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13e770: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x13e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13e774: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x13e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13e778: 0x3e00008  jr          $ra
    ctx->pc = 0x13E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E778u;
        // 0x13e77c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E780u;
}
