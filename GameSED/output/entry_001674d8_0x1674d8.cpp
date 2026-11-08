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

// Function: entry_001674d8
// Address: 0x1674d8 - 0x1675f0
void entry_001674d8_0x1674d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674d8_0x1674d8");
#endif

    switch (ctx->pc) {
        case 0x16754cu: goto label_16754c;
        case 0x167594u: goto label_167594;
        case 0x1675c0u: goto label_1675c0;
        case 0x1675e0u: goto label_1675e0;
        default: break;
    }

    ctx->pc = 0x1674d8u;

label_1674d8:
    // 0x1674d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1674dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1674e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1674e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1674e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1674e8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1674e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1674ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1674ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1674f0: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1674f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1674f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1674F4u;
    {
        const bool branch_taken_0x1674f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1674F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674F4u;
        // 0x1674f8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674f4) {
            ctx->pc = 0x1674D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1674d8;
        }
    }
    ctx->pc = 0x1674FCu;
    // 0x1674fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x167500: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167504: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167508: 0xc78083cc  lwc1        $f0, -0x7C34($gp)
    ctx->pc = 0x167508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16750c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167510: 0xc79583d0  lwc1        $f21, -0x7C30($gp)
    ctx->pc = 0x167510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167514: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167518: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x167518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16751c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16751cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167520: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x167520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167524: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x167524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x167528: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x167528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16752c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16752cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x167530: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x167530u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x167534: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x167534u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x167538: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x167538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16753c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167540: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167544: 0xc0618c2  jal         func_186308
    ctx->pc = 0x167544u;
    SET_GPR_U32(ctx, 31, 0x16754Cu);
    ctx->pc = 0x167548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167544u;
    // 0x167548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x167544u, 0x16754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16754Cu;
label_16754c:
    // 0x16754c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x167550: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167554: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167558: 0xc78083d4  lwc1        $f0, -0x7C2C($gp)
    ctx->pc = 0x167558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16755c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x167560: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167564: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167568: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x167568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16756c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x16756cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x167570: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x167574: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x167574u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x167578: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x167578u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16757c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16757cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x167580: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x167580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x167584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16758c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x16758Cu;
    SET_GPR_U32(ctx, 31, 0x167594u);
    ctx->pc = 0x167590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16758Cu;
    // 0x167590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x16758Cu, 0x167594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167594u;
label_167594:
    // 0x167594: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x167598: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16759c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1675a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1675a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1675a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1675a8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1675ac: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1675acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1675b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1675b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1675b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b8: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x1675B8u;
    SET_GPR_U32(ctx, 31, 0x1675C0u);
    ctx->pc = 0x1675BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675B8u;
    // 0x1675bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1675B8u, 0x1675C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675C0u;
label_1675c0:
    // 0x1675c0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1675c4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1675c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1675c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1675d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1675d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1675d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1675d8: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x1675D8u;
    SET_GPR_U32(ctx, 31, 0x1675E0u);
    ctx->pc = 0x1675DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675D8u;
    // 0x1675dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1675D8u, 0x1675E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675E0u;
label_1675e0:
    // 0x1675e0: 0xae601250  sw          $zero, 0x1250($s3)
    ctx->pc = 0x1675e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4688), GPR_U32(ctx, 0));
    // 0x1675e4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1675e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1675e8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1675E8u;
    {
        const bool branch_taken_0x1675e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E8u;
        // 0x1675ec: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e8) {
            ctx->pc = 0x167950u;
            return;
        }
    }
    ctx->pc = 0x1675F0u;
}
