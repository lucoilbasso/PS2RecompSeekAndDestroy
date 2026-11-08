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

// Function: entry_0016e468
// Address: 0x16e468 - 0x16e5dc
void entry_0016e468_0x16e468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e468_0x16e468");
#endif

    switch (ctx->pc) {
        case 0x16e480u: goto label_16e480;
        case 0x16e488u: goto label_16e488;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e510u: goto label_16e510;
        case 0x16e5b0u: goto label_16e5b0;
        default: break;
    }

    ctx->pc = 0x16e468u;

label_16e468:
    // 0x16e468: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16e468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_16e46c:
    // 0x16e46c: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x16e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16e470:
    // 0x16e470: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x16e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_16e474:
    // 0x16e474: 0x24150306  addiu       $s5, $zero, 0x306
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16e478:
    // 0x16e478: 0xc0682b2  jal         func_1A0AC8
label_16e47c:
    if (ctx->pc == 0x16E47Cu) {
        ctx->pc = 0x16E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E478u;
        // 0x16e47c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E480u;
        goto label_16e480;
    }
    ctx->pc = 0x16E478u;
    SET_GPR_U32(ctx, 31, 0x16E480u);
    ctx->pc = 0x16E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E478u;
    // 0x16e47c: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16E478u, 0x16E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E480u;
label_16e480:
    // 0x16e480: 0xc0682b6  jal         func_1A0AD8
label_16e484:
    if (ctx->pc == 0x16E484u) {
        ctx->pc = 0x16E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E480u;
        // 0x16e484: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E488u;
        goto label_16e488;
    }
    ctx->pc = 0x16E480u;
    SET_GPR_U32(ctx, 31, 0x16E488u);
    ctx->pc = 0x16E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E480u;
    // 0x16e484: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16E480u, 0x16E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E488u;
label_16e488:
    // 0x16e488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e48c:
    // 0x16e48c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16e490:
    // 0x16e490: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x16e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
label_16e494:
    // 0x16e494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e498:
    // 0x16e498: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16e498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_16e49c:
    // 0x16e49c: 0xc061258  jal         func_184960
label_16e4a0:
    if (ctx->pc == 0x16E4A0u) {
        ctx->pc = 0x16E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E49Cu;
        // 0x16e4a0: 0x26140230  addiu       $s4, $s0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4A4u;
        goto label_16e4a4;
    }
    ctx->pc = 0x16E49Cu;
    SET_GPR_U32(ctx, 31, 0x16E4A4u);
    ctx->pc = 0x16E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E49Cu;
    // 0x16e4a0: 0x26140230  addiu       $s4, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16E49Cu, 0x16E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4A4u;
label_16e4a4:
    // 0x16e4a4: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x16e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
label_16e4a8:
    // 0x16e4a8: 0xc78084e4  lwc1        $f0, -0x7B1C($gp)
    ctx->pc = 0x16e4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e4ac:
    // 0x16e4ac: 0xae110150  sw          $s1, 0x150($s0)
    ctx->pc = 0x16e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 17));
label_16e4b0:
    // 0x16e4b0: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x16e4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
label_16e4b4:
    // 0x16e4b4: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x16e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
label_16e4b8:
    // 0x16e4b8: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x16e4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
label_16e4bc:
    // 0x16e4bc: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x16e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_16e4c0:
    // 0x16e4c0: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x16e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
label_16e4c4:
    // 0x16e4c4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x16e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_16e4c8:
    // 0x16e4c8: 0xfa800000  sqc2        $vf0, 0x0($s4)
    ctx->pc = 0x16e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16e4cc:
    // 0x16e4cc: 0x26130240  addiu       $s3, $s0, 0x240
    ctx->pc = 0x16e4ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_16e4d0:
    // 0x16e4d0: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x16e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16e4d4:
    // 0x16e4d4: 0x26110290  addiu       $s1, $s0, 0x290
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_16e4d8:
    // 0x16e4d8: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x16e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16e4dc:
    // 0x16e4dc: 0x261202a0  addiu       $s2, $s0, 0x2A0
    ctx->pc = 0x16e4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
label_16e4e0:
    // 0x16e4e0: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x16e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16e4e4:
    // 0x16e4e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16e4e8:
    // 0x16e4e8: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x16e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_16e4ec:
    // 0x16e4ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16e4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16e4f0:
    // 0x16e4f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16e4f4:
    // 0x16e4f4: 0x60f809  jalr        $v1
label_16e4f8:
    if (ctx->pc == 0x16E4F8u) {
        ctx->pc = 0x16E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4F4u;
        // 0x16e4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4FCu;
        goto label_16e4fc;
    }
    ctx->pc = 0x16E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E4FCu);
        ctx->pc = 0x16E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4F4u;
        // 0x16e4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E4F4u, 0x16E4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E4FCu;
label_16e4fc:
    // 0x16e4fc: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x16e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
label_16e500:
    // 0x16e500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e504:
    // 0x16e504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e508:
    // 0x16e508: 0xc06825c  jal         func_1A0970
label_16e50c:
    if (ctx->pc == 0x16E50Cu) {
        ctx->pc = 0x16E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E508u;
        // 0x16e50c: 0xaf908b54  sw          $s0, -0x74AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E510u;
        goto label_16e510;
    }
    ctx->pc = 0x16E508u;
    SET_GPR_U32(ctx, 31, 0x16E510u);
    ctx->pc = 0x16E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E508u;
    // 0x16e50c: 0xaf908b54  sw          $s0, -0x74AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16E508u, 0x16E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E510u;
label_16e510:
    // 0x16e510: 0xc78184e8  lwc1        $f1, -0x7B18($gp)
    ctx->pc = 0x16e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e514:
    // 0x16e514: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16e514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16e518:
    // 0x16e518: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16e518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16e51c:
    // 0x16e51c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16e51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16e520:
    // 0x16e520: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16e524:
    // 0x16e524: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e524u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16e528:
    // 0x16e528: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e528u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16e52c:
    // 0x16e52c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e52cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16e530:
    // 0x16e530: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x16e530u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_16e534:
    // 0x16e534: 0xc78084ec  lwc1        $f0, -0x7B14($gp)
    ctx->pc = 0x16e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e538:
    // 0x16e538: 0xc78284f0  lwc1        $f2, -0x7B10($gp)
    ctx->pc = 0x16e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16e53c:
    // 0x16e53c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16e53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16e540:
    // 0x16e540: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16e540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16e544:
    // 0x16e544: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16e544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16e548:
    // 0x16e548: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16e54c:
    // 0x16e54c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e54cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16e550:
    // 0x16e550: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e550u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16e554:
    // 0x16e554: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e554u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16e558:
    // 0x16e558: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x16e558u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_16e55c:
    // 0x16e55c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16e55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16e560:
    // 0x16e560: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16e560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16e564:
    // 0x16e564: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16e564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16e568:
    // 0x16e568: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16e56c:
    // 0x16e56c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e56cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16e570:
    // 0x16e570: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e570u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16e574:
    // 0x16e574: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e574u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16e578:
    // 0x16e578: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x16e578u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_16e57c:
    // 0x16e57c: 0xc78084f4  lwc1        $f0, -0x7B0C($gp)
    ctx->pc = 0x16e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e580:
    // 0x16e580: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16e580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16e584:
    // 0x16e584: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16e584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16e588:
    // 0x16e588: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16e588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16e58c:
    // 0x16e58c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16e590:
    // 0x16e590: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16e590u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16e594:
    // 0x16e594: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16e594u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16e598:
    // 0x16e598: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16e598u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16e59c:
    // 0x16e59c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x16e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_16e5a0:
    // 0x16e5a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16e5a4:
    // 0x16e5a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16e5a8:
    // 0x16e5a8: 0xc040ce8  jal         func_1033A0
label_16e5ac:
    if (ctx->pc == 0x16E5ACu) {
        ctx->pc = 0x16E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5A8u;
        // 0x16e5ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5B0u;
        goto label_16e5b0;
    }
    ctx->pc = 0x16E5A8u;
    SET_GPR_U32(ctx, 31, 0x16E5B0u);
    ctx->pc = 0x16E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5A8u;
    // 0x16e5ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16E5A8u, 0x16E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5B0u;
label_16e5b0:
    // 0x16e5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e5b4:
    // 0x16e5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e5b8:
    // 0x16e5b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16e5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e5bc:
    // 0x16e5bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16e5bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16e5c0:
    // 0x16e5c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16e5c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e5c4:
    // 0x16e5c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16e5c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16e5c8:
    // 0x16e5c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16e5c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e5cc:
    // 0x16e5cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x16e5ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16e5d0:
    // 0x16e5d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16e5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16e5d4:
    // 0x16e5d4: 0x3e00008  jr          $ra
label_16e5d8:
    if (ctx->pc == 0x16E5D8u) {
        ctx->pc = 0x16E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5D4u;
        // 0x16e5d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5DCu;
        goto label_fallthrough_0x16e5d4;
    }
    ctx->pc = 0x16E5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5D4u;
        // 0x16e5d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e5d4:
    ctx->pc = 0x16E5DCu;
}
