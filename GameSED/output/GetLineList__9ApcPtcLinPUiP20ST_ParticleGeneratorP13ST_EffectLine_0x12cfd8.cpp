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

// Function: GetLineList__9ApcPtcLinPUiP20ST_ParticleGeneratorP13ST_EffectLine
// Address: 0x12cfd8 - 0x12d1b0
void GetLineList__9ApcPtcLinPUiP20ST_ParticleGeneratorP13ST_EffectLine_0x12cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLineList__9ApcPtcLinPUiP20ST_ParticleGeneratorP13ST_EffectLine_0x12cfd8");
#endif

    switch (ctx->pc) {
        case 0x12d044u: goto label_12d044;
        case 0x12d078u: goto label_12d078;
        case 0x12d0d8u: goto label_12d0d8;
        case 0x12d100u: goto label_12d100;
        default: break;
    }

    ctx->pc = 0x12cfd8u;

    // 0x12cfd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12cfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12cfdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12cfe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12cfe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12cfe8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12cfe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12cff0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x12cff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cff4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12cff8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x12cff8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12d008: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12d00c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12d010: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x12d010u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12d014: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D014u;
    {
        const bool branch_taken_0x12d014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D014u;
        // 0x12d018: 0xe7b40048  swc1        $f20, 0x48($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d014) {
            ctx->pc = 0x12D028u;
            goto label_12d028;
        }
    }
    ctx->pc = 0x12D01Cu;
    // 0x12d01c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d020: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12D020u;
    {
        const bool branch_taken_0x12d020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d020) {
            ctx->pc = 0x12D024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D020u;
            // 0x12d024: 0x8ea20158  lw          $v0, 0x158($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D050u;
            goto label_12d050;
        }
    }
    ctx->pc = 0x12D028u;
label_12d028:
    // 0x12d028: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x12d028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x12d02c: 0x8ea50158  lw          $a1, 0x158($s5)
    ctx->pc = 0x12d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 344)));
    // 0x12d030: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d034: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x12d038: 0x24845e30  addiu       $a0, $a0, 0x5E30
    ctx->pc = 0x12d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24112));
    // 0x12d03c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12D03Cu;
    SET_GPR_U32(ctx, 31, 0x12D044u);
    ctx->pc = 0x12D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D03Cu;
    // 0x12d040: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12D03Cu, 0x12D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D044u;
label_12d044:
    // 0x12d044: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x12D044u;
    {
        const bool branch_taken_0x12d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D044u;
        // 0x12d048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d044) {
            ctx->pc = 0x12D17Cu;
            goto label_12d17c;
        }
    }
    ctx->pc = 0x12D04Cu;
    // 0x12d04c: 0x0  nop
    ctx->pc = 0x12d04cu;
    // NOP
label_12d050:
    // 0x12d050: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x12D050u;
    {
        const bool branch_taken_0x12d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D050u;
        // 0x12d054: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d050) {
            ctx->pc = 0x12D148u;
            goto label_12d148;
        }
    }
    ctx->pc = 0x12D058u;
    // 0x12d058: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12d058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d05c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d060: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12D060u;
    {
        const bool branch_taken_0x12d060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D060u;
        // 0x12d064: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d060) {
            ctx->pc = 0x12D110u;
            goto label_12d110;
        }
    }
    ctx->pc = 0x12D068u;
    // 0x12d068: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12d068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d070: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12d070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12d074: 0x0  nop
    ctx->pc = 0x12d074u;
    // NOP
label_12d078:
    // 0x12d078: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12D078u;
    {
        const bool branch_taken_0x12d078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D078u;
        // 0x12d07c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d078) {
            ctx->pc = 0x12D148u;
            goto label_12d148;
        }
    }
    ctx->pc = 0x12D080u;
    // 0x12d080: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12d084: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x12d084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x12d088: 0xe4550030  swc1        $f21, 0x30($v0)
    ctx->pc = 0x12d088u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x12d08c: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x12d08cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x12d090: 0xe4550034  swc1        $f21, 0x34($v0)
    ctx->pc = 0x12d090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x12d094: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x12d094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x12d098: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x12d098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d09c: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x12d09cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0a0: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x12d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0a4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x12d0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d0a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d0ac: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x12d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x12d0b0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d0b4: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x12d0b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x12d0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0bc: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x12d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x12d0c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12d0c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12d0c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12d0c8: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x12d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x12d0cc: 0xe61400d4  swc1        $f20, 0xD4($s0)
    ctx->pc = 0x12d0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12d0d0: 0xc048424  jal         func_121090
    ctx->pc = 0x12D0D0u;
    SET_GPR_U32(ctx, 31, 0x12D0D8u);
    ctx->pc = 0x12D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0D0u;
    // 0x12d0d4: 0xe61500d8  swc1        $f21, 0xD8($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12D0D0u, 0x12D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D0D8u;
label_12d0d8:
    // 0x12d0d8: 0xae1000b4  sw          $s0, 0xB4($s0)
    ctx->pc = 0x12d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 16));
    // 0x12d0dc: 0xe6140124  swc1        $f20, 0x124($s0)
    ctx->pc = 0x12d0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12d0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0e4: 0xe6140128  swc1        $f20, 0x128($s0)
    ctx->pc = 0x12d0e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x12d0e8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12d0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0ec: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x12d0ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12d0f0: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x12d0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x12d0f4: 0xe6140134  swc1        $f20, 0x134($s0)
    ctx->pc = 0x12d0f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x12d0f8: 0xc048446  jal         func_121118
    ctx->pc = 0x12D0F8u;
    SET_GPR_U32(ctx, 31, 0x12D100u);
    ctx->pc = 0x12D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D0F8u;
    // 0x12d0fc: 0xe6140138  swc1        $f20, 0x138($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121118u, 0x12D0F8u, 0x12D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D100u;
label_12d100:
    // 0x12d100: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d104: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x12d104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12d108: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x12D108u;
    {
        const bool branch_taken_0x12d108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D108u;
        // 0x12d10c: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d108) {
            ctx->pc = 0x12D078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d078;
        }
    }
    ctx->pc = 0x12D110u;
label_12d110:
    // 0x12d110: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d114: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x12D114u;
    {
        const bool branch_taken_0x12d114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D114u;
        // 0x12d118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d114) {
            ctx->pc = 0x12D17Cu;
            goto label_12d17c;
        }
    }
    ctx->pc = 0x12D11Cu;
    // 0x12d11c: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x12d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x12d120: 0x8ea2015c  lw          $v0, 0x15C($s5)
    ctx->pc = 0x12d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 348)));
    // 0x12d124: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D124u;
    {
        const bool branch_taken_0x12d124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d124) {
            ctx->pc = 0x12D128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D124u;
            // 0x12d128: 0xaeb2015c  sw          $s2, 0x15C($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D140u;
            goto label_12d140;
        }
    }
    ctx->pc = 0x12D12Cu;
    // 0x12d12c: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12D12Cu;
    {
        const bool branch_taken_0x12d12c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d12c) {
            ctx->pc = 0x12D130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D12Cu;
            // 0x12d130: 0x8ec200c4  lw          $v0, 0xC4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D158u;
            goto label_12d158;
        }
    }
    ctx->pc = 0x12D134u;
    // 0x12d134: 0xac5400c0  sw          $s4, 0xC0($v0)
    ctx->pc = 0x12d134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 20));
    // 0x12d138: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x12d138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
    // 0x12d13c: 0xaeb2015c  sw          $s2, 0x15C($s5)
    ctx->pc = 0x12d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 18));
label_12d140:
    // 0x12d140: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D140u;
    {
        const bool branch_taken_0x12d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D140u;
        // 0x12d144: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d140) {
            ctx->pc = 0x12D16Cu;
            goto label_12d16c;
        }
    }
    ctx->pc = 0x12D148u;
label_12d148:
    // 0x12d148: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12d148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12d14c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D14Cu;
    {
        const bool branch_taken_0x12d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D14Cu;
        // 0x12d150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d14c) {
            ctx->pc = 0x12D17Cu;
            goto label_12d17c;
        }
    }
    ctx->pc = 0x12D154u;
    // 0x12d154: 0x0  nop
    ctx->pc = 0x12d154u;
    // NOP
label_12d158:
    // 0x12d158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D158u;
    {
        const bool branch_taken_0x12d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D158u;
        // 0x12d15c: 0xae8200c4  sw          $v0, 0xC4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d158) {
            ctx->pc = 0x12D164u;
            goto label_12d164;
        }
    }
    ctx->pc = 0x12D160u;
    // 0x12d160: 0xac5400c0  sw          $s4, 0xC0($v0)
    ctx->pc = 0x12d160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 20));
label_12d164:
    // 0x12d164: 0xaed200c4  sw          $s2, 0xC4($s6)
    ctx->pc = 0x12d164u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 18));
    // 0x12d168: 0xae5600c0  sw          $s6, 0xC0($s2)
    ctx->pc = 0x12d168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 22));
label_12d16c:
    // 0x12d16c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D16Cu;
    {
        const bool branch_taken_0x12d16c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d16c) {
            ctx->pc = 0x12D170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D16Cu;
            // 0x12d170: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D174u;
            goto label_12d174;
        }
    }
    ctx->pc = 0x12D174u;
label_12d174:
    // 0x12d174: 0xaeb00158  sw          $s0, 0x158($s5)
    ctx->pc = 0x12d174u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 16));
    // 0x12d178: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12d178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d17c:
    // 0x12d17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d188: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12d188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d18c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d190: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d194: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12d194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d198: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12d198u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d19c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d1a0: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x12d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d1a4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x12d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1A8u;
        // 0x12d1ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D1B0u;
}
