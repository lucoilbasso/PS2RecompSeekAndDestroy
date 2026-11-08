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

// Function: entry_00186adc
// Address: 0x186adc - 0x186c38
void entry_00186adc_0x186adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186adc_0x186adc");
#endif

    switch (ctx->pc) {
        case 0x186b3cu: goto label_186b3c;
        case 0x186b48u: goto label_186b48;
        case 0x186bd0u: goto label_186bd0;
        default: break;
    }

    ctx->pc = 0x186adcu;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x186C30u;
    // 0x186c30: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x186c34: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x186c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->pc = 0x186c38u;
}
