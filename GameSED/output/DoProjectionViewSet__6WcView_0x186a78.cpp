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

// Function: DoProjectionViewSet__6WcView
// Address: 0x186a78 - 0x186e58
void DoProjectionViewSet__6WcView_0x186a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoProjectionViewSet__6WcView_0x186a78");
#endif

    switch (ctx->pc) {
        case 0x186b3cu: goto label_186b3c;
        case 0x186b48u: goto label_186b48;
        case 0x186bd0u: goto label_186bd0;
        case 0x186c88u: goto label_186c88;
        case 0x186c98u: goto label_186c98;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce4u: goto label_186ce4;
        case 0x186d00u: goto label_186d00;
        case 0x186d08u: goto label_186d08;
        case 0x186d18u: goto label_186d18;
        default: break;
    }

    ctx->pc = 0x186a78u;

    // 0x186a78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x186a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x186a7c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x186a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x186a80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a84: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x186a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x186a88: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x186a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a8c: 0xe7ba00a8  swc1        $f26, 0xA8($sp)
    ctx->pc = 0x186a8cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x186a90: 0xe7b900a0  swc1        $f25, 0xA0($sp)
    ctx->pc = 0x186a90u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x186a94: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x186a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x186a98: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x186a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x186a9c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x186a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x186aa0: 0xe7b80098  swc1        $f24, 0x98($sp)
    ctx->pc = 0x186aa0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x186aa4: 0xe7b70090  swc1        $f23, 0x90($sp)
    ctx->pc = 0x186aa4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x186aa8: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x186aa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x186aac: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x186aacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x186ab0: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x186ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x186ab4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x186ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x186ab8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x186ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x186abc: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x186ac0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x186ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x186ac4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186AC4u;
    {
        const bool branch_taken_0x186ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC4u;
        // 0x186ac8: 0x4600ce86  mov.s       $f26, $f25 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ac4) {
            ctx->pc = 0x186ADCu;
            goto label_186adc;
        }
    }
    ctx->pc = 0x186ACCu;
    // 0x186acc: 0xc64001b0  lwc1        $f0, 0x1B0($s2)
    ctx->pc = 0x186accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186ad0: 0xc64101b4  lwc1        $f1, 0x1B4($s2)
    ctx->pc = 0x186ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186ad4: 0x46190680  add.s       $f26, $f0, $f25
    ctx->pc = 0x186ad4u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x186ad8: 0x46190e40  add.s       $f25, $f1, $f25
    ctx->pc = 0x186ad8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[25]);
label_186adc:
    // 0x186adc: 0xc6570154  lwc1        $f23, 0x154($s2)
    ctx->pc = 0x186adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x186ae0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186ae4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x186ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x186ae8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x186ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x186aec: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x186af0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x186af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x186af4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x186af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x186af8: 0x2610ec30  addiu       $s0, $s0, -0x13D0
    ctx->pc = 0x186af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962224));
    // 0x186afc: 0x4614bd02  mul.s       $f20, $f23, $f20
    ctx->pc = 0x186afcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x186b00: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x186b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x186b04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x186b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x186b08: 0xc78e859c  lwc1        $f14, -0x7A64($gp)
    ctx->pc = 0x186b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x186b0c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x186b0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x186b10: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x186b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x186b14: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x186b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x186b18: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x186b18u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x186b1c: 0xe65a01b8  swc1        $f26, 0x1B8($s2)
    ctx->pc = 0x186b1cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
    // 0x186b20: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x186b20u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x186b24: 0xe65901bc  swc1        $f25, 0x1BC($s2)
    ctx->pc = 0x186b24u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 444), bits); }
    // 0x186b28: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x186b28u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x186b2c: 0x46006c46  mov.s       $f17, $f13
    ctx->pc = 0x186b2cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    // 0x186b30: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x186b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    // 0x186b34: 0xc06f07a  jal         func_1BC1E8
    ctx->pc = 0x186B34u;
    SET_GPR_U32(ctx, 31, 0x186B3Cu);
    ctx->pc = 0x186B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B34u;
    // 0x186b38: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC1E8u, 0x186B34u, 0x186B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B3Cu;
label_186b3c:
    // 0x186b3c: 0xc79885a0  lwc1        $f24, -0x7A60($gp)
    ctx->pc = 0x186b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x186b40: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x186B40u;
    SET_GPR_U32(ctx, 31, 0x186B48u);
    ctx->pc = 0x186B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B40u;
    // 0x186b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x186B40u, 0x186B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B48u;
label_186b48:
    // 0x186b48: 0x4615a002  mul.s       $f0, $f20, $f21
    ctx->pc = 0x186b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x186b4c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x186b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x186b50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186b54: 0x4614a881  sub.s       $f2, $f21, $f20
    ctx->pc = 0x186b54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x186b58: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x186b58u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x186b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x186b60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x186b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x186b64: 0x3c01407a  lui         $at, 0x407A
    ctx->pc = 0x186b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16506 << 16));
    // 0x186b68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x186b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x186b6c: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x186b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x186b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x186b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186b74: 0x2631ecb0  addiu       $s1, $s1, -0x1350
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962352));
    // 0x186b78: 0x0  nop
    ctx->pc = 0x186b78u;
    // NOP
    // 0x186b7c: 0x0  nop
    ctx->pc = 0x186b7cu;
    // NOP
    // 0x186b80: 0x4616bd83  div.s       $f22, $f23, $f22
    ctx->pc = 0x186b80u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[23], ctx->f[22]); }
    // 0x186b84: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x186b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x186b88: 0xe615002c  swc1        $f21, 0x2C($s0)
    ctx->pc = 0x186b88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x186b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b90: 0x0  nop
    ctx->pc = 0x186b90u;
    // NOP
    // 0x186b94: 0x0  nop
    ctx->pc = 0x186b94u;
    // NOP
    // 0x186b98: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x186b98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x186b9c: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x186b9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x186ba0: 0x0  nop
    ctx->pc = 0x186ba0u;
    // NOP
    // 0x186ba4: 0x0  nop
    ctx->pc = 0x186ba4u;
    // NOP
    // 0x186ba8: 0x4602a503  div.s       $f20, $f20, $f2
    ctx->pc = 0x186ba8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x186bac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x186bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x186bb0: 0x0  nop
    ctx->pc = 0x186bb0u;
    // NOP
    // 0x186bb4: 0x0  nop
    ctx->pc = 0x186bb4u;
    // NOP
    // 0x186bb8: 0x4618bdc3  div.s       $f23, $f23, $f24
    ctx->pc = 0x186bb8u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[23], ctx->f[24]); }
    // 0x186bbc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x186bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x186bc0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x186bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x186bc4: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x186bc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x186bc8: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x186BC8u;
    SET_GPR_U32(ctx, 31, 0x186BD0u);
    ctx->pc = 0x186BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BC8u;
    // 0x186bcc: 0xe6170014  swc1        $f23, 0x14($s0) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x186BC8u, 0x186BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BD0u;
label_186bd0:
    // 0x186bd0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x186bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x186bd4: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x186bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x186bd8: 0x24427ee0  addiu       $v0, $v0, 0x7EE0
    ctx->pc = 0x186bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x186bdc: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x186bdcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x257EE8u));
    // 0x186be0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x186be0u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x257EE0u));
    // 0x186be4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x186be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x186be8: 0xc78285a4  lwc1        $f2, -0x7A5C($gp)
    ctx->pc = 0x186be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186bec: 0x3c01c67e  lui         $at, 0xC67E
    ctx->pc = 0x186becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50814 << 16));
    // 0x186bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186bf4: 0x3c014681  lui         $at, 0x4681
    ctx->pc = 0x186bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18049 << 16));
    // 0x186bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186bfc: 0xe635003c  swc1        $f21, 0x3C($s1)
    ctx->pc = 0x186bfcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x186c00: 0xe6380000  swc1        $f24, 0x0($s1)
    ctx->pc = 0x186c00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x186c04: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x186c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x186c08: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x186c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x186c0c: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x186c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x186c10: 0xe63a0030  swc1        $f26, 0x30($s1)
    ctx->pc = 0x186c10u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x186c14: 0xe6390034  swc1        $f25, 0x34($s1)
    ctx->pc = 0x186c14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x186c18: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x186c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x186c1c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x186C1Cu;
    {
        const bool branch_taken_0x186c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C1Cu;
        // 0x186c20: 0xffa50018  sd          $a1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c1c) {
            ctx->pc = 0x186CB8u;
            goto label_186cb8;
        }
    }
    ctx->pc = 0x186C24u;
    // 0x186c24: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x186c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x186c28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x186C28u;
    {
        const bool branch_taken_0x186c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c28) {
            ctx->pc = 0x186C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C28u;
            // 0x186c2c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C38u;
            goto label_186c38;
        }
    }
    ctx->pc = 0x186C30u;
    // 0x186c30: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x186c34: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x186c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_186c38:
    // 0x186c38: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x186c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x186c3c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x186c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x186c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186c44: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x186c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186c48: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x186c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186c4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186c50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x186c50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186c54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x186c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x186c5c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x186c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x186c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c64: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x186c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x186c68: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x186c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c6c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x186c6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x186c70: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x186c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186c74: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x186c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c78: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x186c78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x186c7c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x186c7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x186c80: 0xc06eea6  jal         func_1BBA98
    ctx->pc = 0x186C80u;
    SET_GPR_U32(ctx, 31, 0x186C88u);
    ctx->pc = 0x186C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C80u;
    // 0x186c84: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA98u, 0x186C80u, 0x186C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C88u;
label_186c88:
    // 0x186c88: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x186c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186c8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x186c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186c90: 0xc06ef22  jal         func_1BBC88
    ctx->pc = 0x186C90u;
    SET_GPR_U32(ctx, 31, 0x186C98u);
    ctx->pc = 0x186C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C90u;
    // 0x186c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC88u, 0x186C90u, 0x186C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C98u;
label_186c98:
    // 0x186c98: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186c9c: 0x2484eb70  addiu       $a0, $a0, -0x1490
    ctx->pc = 0x186c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962032));
    // 0x186ca0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ca8: 0xc06f004  jal         func_1BC010
    ctx->pc = 0x186CA8u;
    SET_GPR_U32(ctx, 31, 0x186CB0u);
    ctx->pc = 0x186CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CA8u;
    // 0x186cac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC010u, 0x186CA8u, 0x186CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x186CB0u;
    {
        const bool branch_taken_0x186cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CB0u;
        // 0x186cb4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cb0) {
            ctx->pc = 0x186D1Cu;
            goto label_186d1c;
        }
    }
    ctx->pc = 0x186CB8u;
label_186cb8:
    // 0x186cb8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x186cbc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x186CBCu;
    {
        const bool branch_taken_0x186cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CBCu;
        // 0x186cc0: 0x24900020  addiu       $s0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cbc) {
            ctx->pc = 0x186CE4u;
            goto label_186ce4;
        }
    }
    ctx->pc = 0x186CC4u;
    // 0x186cc4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x186cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x186cc8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x186cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x186ccc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186CCCu;
    {
        const bool branch_taken_0x186ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ccc) {
            ctx->pc = 0x186CDCu;
            goto label_186cdc;
        }
    }
    ctx->pc = 0x186CD4u;
    // 0x186cd4: 0xc061920  jal         func_186480
    ctx->pc = 0x186CD4u;
    SET_GPR_U32(ctx, 31, 0x186CDCu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x186CD4u, 0x186CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CDCu;
label_186cdc:
    // 0x186cdc: 0xc061422  jal         func_185088
    ctx->pc = 0x186CDCu;
    SET_GPR_U32(ctx, 31, 0x186CE4u);
    ctx->pc = 0x186CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CDCu;
    // 0x186ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x186CDCu, 0x186CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CE4u;
label_186ce4:
    // 0x186ce4: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x186ce8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x186ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x186cec: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x186cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x186cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186CF0u;
    {
        const bool branch_taken_0x186cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cf0) {
            ctx->pc = 0x186D00u;
            goto label_186d00;
        }
    }
    ctx->pc = 0x186CF8u;
    // 0x186cf8: 0xc061920  jal         func_186480
    ctx->pc = 0x186CF8u;
    SET_GPR_U32(ctx, 31, 0x186D00u);
    ctx->pc = 0x186CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CF8u;
    // 0x186cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x186CF8u, 0x186D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D00u;
label_186d00:
    // 0x186d00: 0xc061422  jal         func_185088
    ctx->pc = 0x186D00u;
    SET_GPR_U32(ctx, 31, 0x186D08u);
    ctx->pc = 0x186D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D00u;
    // 0x186d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x186D00u, 0x186D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D08u;
label_186d08:
    // 0x186d08: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186d0c: 0x2484eb70  addiu       $a0, $a0, -0x1490
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962032));
    // 0x186d10: 0xc06eec8  jal         func_1BBB20
    ctx->pc = 0x186D10u;
    SET_GPR_U32(ctx, 31, 0x186D18u);
    ctx->pc = 0x186D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D10u;
    // 0x186d14: 0x264500e0  addiu       $a1, $s2, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB20u, 0x186D10u, 0x186D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D18u;
label_186d18:
    // 0x186d18: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_186d1c:
    // 0x186d1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x186d20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x186d24: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x186d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x186d28: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x186d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x186d2c: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x186d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x186d30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x186d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x186d34: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x186d34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x186d38: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x186d38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x186d3c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x186d3cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x186d40: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x186d40u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x186d44: 0xd8a90010  lqc2        $vf9, 0x10($a1)
    ctx->pc = 0x186d44u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x186d48: 0xd8aa0020  lqc2        $vf10, 0x20($a1)
    ctx->pc = 0x186d48u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x186d4c: 0xd8ab0030  lqc2        $vf11, 0x30($a1)
    ctx->pc = 0x186d4cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x186d50: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x186d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d54: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x186d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d58: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x186d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d5c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x186d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x186d60: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x186d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d64: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x186d64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d68: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x186d68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d6c: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x186d6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x186d70: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x186d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d74: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x186d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d78: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x186d78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d7c: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x186d7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x186d80: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x186d80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d84: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x186d84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d88: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x186d88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186d8c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x186d8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x186d90: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x186d90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x186d94: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x186d94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x186d98: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x186d98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x186d9c: 0xf88f0030  sqc2        $vf15, 0x30($a0)
    ctx->pc = 0x186d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x186da0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x186da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x186da4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x186da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x186da8: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x186da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x186dac: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x186dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x186db0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x186db0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC30u));
    // 0x186db4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x186db4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC40u));
    // 0x186db8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x186db8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC50u));
    // 0x186dbc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x186dbcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC60u));
    // 0x186dc0: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x186dc0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186dc4: 0xd8a90010  lqc2        $vf9, 0x10($a1)
    ctx->pc = 0x186dc4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x186dc8: 0xd8aa0020  lqc2        $vf10, 0x20($a1)
    ctx->pc = 0x186dc8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x186dcc: 0xd8ab0030  lqc2        $vf11, 0x30($a1)
    ctx->pc = 0x186dccu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x186dd0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x186dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186dd4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x186dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186dd8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x186dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186ddc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x186ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x186de0: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x186de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186de4: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x186de4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186de8: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x186de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186dec: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x186decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x186df0: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x186df0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186df4: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x186df4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186df8: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x186df8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186dfc: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x186dfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x186e00: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x186e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186e04: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x186e04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186e08: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x186e08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x186e0c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x186e0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x186e10: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x186e10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x186e14: 0xf86d0010  sqc2        $vf13, 0x10($v1)
    ctx->pc = 0x186e14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x186e18: 0xf86e0020  sqc2        $vf14, 0x20($v1)
    ctx->pc = 0x186e18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x186e1c: 0xf86f0030  sqc2        $vf15, 0x30($v1)
    ctx->pc = 0x186e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x186e20: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x186e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186e24: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x186e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x186e28: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x186e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186e2c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x186e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x186e30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x186e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186e34: 0xc7ba00a8  lwc1        $f26, 0xA8($sp)
    ctx->pc = 0x186e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x186e38: 0xc7b900a0  lwc1        $f25, 0xA0($sp)
    ctx->pc = 0x186e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x186e3c: 0xc7b80098  lwc1        $f24, 0x98($sp)
    ctx->pc = 0x186e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x186e40: 0xc7b70090  lwc1        $f23, 0x90($sp)
    ctx->pc = 0x186e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x186e44: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x186e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x186e48: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x186e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x186e4c: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x186e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186e50: 0x3e00008  jr          $ra
    ctx->pc = 0x186E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E50u;
        // 0x186e54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186E58u;
}
