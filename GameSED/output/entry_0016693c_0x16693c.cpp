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

// Function: entry_0016693c
// Address: 0x16693c - 0x166aa0
void entry_0016693c_0x16693c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016693c_0x16693c");
#endif

    switch (ctx->pc) {
        case 0x166984u: goto label_166984;
        case 0x1669a0u: goto label_1669a0;
        case 0x1669d4u: goto label_1669d4;
        case 0x1669ecu: goto label_1669ec;
        case 0x166a30u: goto label_166a30;
        case 0x166a48u: goto label_166a48;
        case 0x166a78u: goto label_166a78;
        case 0x166a90u: goto label_166a90;
        default: break;
    }

    ctx->pc = 0x16693cu;

    // 0x16693c: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x166940: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x166944: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x166948: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x166948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16694c: 0xc7808384  lwc1        $f0, -0x7C7C($gp)
    ctx->pc = 0x16694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166950: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166954: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x166958: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16695c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16695cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x166960: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x166964: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166964u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x166968: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166968u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16696c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16696cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x166970: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x166974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166978: 0xc7978388  lwc1        $f23, -0x7C78($gp)
    ctx->pc = 0x166978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16697c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16697Cu;
    SET_GPR_U32(ctx, 31, 0x166984u);
    ctx->pc = 0x166980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16697Cu;
    // 0x166980: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16697Cu, 0x166984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166984u;
label_166984:
    // 0x166984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16698c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166990: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166990u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x166994: 0xc796838c  lwc1        $f22, -0x7C74($gp)
    ctx->pc = 0x166994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x166998: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x166998u;
    SET_GPR_U32(ctx, 31, 0x1669A0u);
    ctx->pc = 0x16699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166998u;
    // 0x16699c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166998u, 0x1669A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669A0u;
label_1669a0:
    // 0x1669a0: 0xc7808390  lwc1        $f0, -0x7C70($gp)
    ctx->pc = 0x1669a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1669a4: 0xc7958394  lwc1        $f21, -0x7C6C($gp)
    ctx->pc = 0x1669a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1669a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1669a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1669ac: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x1669acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1669b0: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x1669b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1669b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1669b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1669b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1669bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1669bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1669c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1669c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1669c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1669c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1669c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669cc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1669CCu;
    SET_GPR_U32(ctx, 31, 0x1669D4u);
    ctx->pc = 0x1669D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669CCu;
    // 0x1669d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1669CCu, 0x1669D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669D4u;
label_1669d4:
    // 0x1669d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1669d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1669d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1669dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669e0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1669e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1669e4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1669E4u;
    SET_GPR_U32(ctx, 31, 0x1669ECu);
    ctx->pc = 0x1669E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1669E4u;
    // 0x1669e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1669E4u, 0x1669ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669ECu;
label_1669ec:
    // 0x1669ec: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1669f0: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x1669f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1669f4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1669f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1669f8: 0xc7808398  lwc1        $f0, -0x7C68($gp)
    ctx->pc = 0x1669f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1669fc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x166a00: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166a04: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x166a08: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x166a0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x166a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x166a10: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x166a14: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166a14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x166a18: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166a18u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x166a1c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x166a20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x166a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a28: 0xc06164c  jal         func_185930
    ctx->pc = 0x166A28u;
    SET_GPR_U32(ctx, 31, 0x166A30u);
    ctx->pc = 0x166A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A28u;
    // 0x166a2c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166A28u, 0x166A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A30u;
label_166a30:
    // 0x166a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a3c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166a3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x166a40: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x166A40u;
    SET_GPR_U32(ctx, 31, 0x166A48u);
    ctx->pc = 0x166A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A40u;
    // 0x166a44: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166A40u, 0x166A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0xc780839c  lwc1        $f0, -0x7C64($gp)
    ctx->pc = 0x166a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x166a50: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x166a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x166a54: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x166a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x166a58: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x166a5c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166a5cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x166a60: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166a60u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x166a64: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166a64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x166a68: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x166a6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x166a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x166a70: 0xc06164c  jal         func_185930
    ctx->pc = 0x166A70u;
    SET_GPR_U32(ctx, 31, 0x166A78u);
    ctx->pc = 0x166A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A70u;
    // 0x166a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166A70u, 0x166A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A78u;
label_166a78:
    // 0x166a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a84: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166a84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x166a88: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x166A88u;
    SET_GPR_U32(ctx, 31, 0x166A90u);
    ctx->pc = 0x166A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166A88u;
    // 0x166a8c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166A88u, 0x166A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166A90u;
label_166a90:
    // 0x166a90: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x166a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x166a94: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x166a98: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x166A98u;
    {
        const bool branch_taken_0x166a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A98u;
        // 0x166a9c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a98) {
            ctx->pc = 0x1673A8u;
            return;
        }
    }
    ctx->pc = 0x166AA0u;
}
