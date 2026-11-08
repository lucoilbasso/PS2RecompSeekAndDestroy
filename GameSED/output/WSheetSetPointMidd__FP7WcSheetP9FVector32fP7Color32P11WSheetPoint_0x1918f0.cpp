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

// Function: WSheetSetPointMidd__FP7WcSheetP9FVector32fP7Color32P11WSheetPoint
// Address: 0x1918f0 - 0x191a3c
void WSheetSetPointMidd__FP7WcSheetP9FVector32fP7Color32P11WSheetPoint_0x1918f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSetPointMidd__FP7WcSheetP9FVector32fP7Color32P11WSheetPoint_0x1918f0");
#endif

    switch (ctx->pc) {
        case 0x191944u: goto label_191944;
        case 0x191964u: goto label_191964;
        case 0x191980u: goto label_191980;
        default: break;
    }

    ctx->pc = 0x1918f0u;

    // 0x1918f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1918f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1918f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1918f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1918f8: 0x249101d0  addiu       $s1, $a0, 0x1D0
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x1918fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1918fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x191900: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x191900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x191904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x191908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x191908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19190c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x191910: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x191910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191914: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x191914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x191918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19191c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x191920: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x191920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x191924: 0x14a00026  bnez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x191924u;
    {
        const bool branch_taken_0x191924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x191928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191924u;
        // 0x191928: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191924) {
            ctx->pc = 0x1919C0u;
            goto label_1919c0;
        }
    }
    ctx->pc = 0x19192Cu;
    // 0x19192c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19192cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191930: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191930u;
    {
        const bool branch_taken_0x191930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x191934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191930u;
        // 0x191934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191930) {
            ctx->pc = 0x19193Cu;
            goto label_19193c;
        }
    }
    ctx->pc = 0x191938u;
    // 0x191938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19193c:
    // 0x19193c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19193Cu;
    SET_GPR_U32(ctx, 31, 0x191944u);
    ctx->pc = 0x191940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19193Cu;
    // 0x191940: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19193Cu, 0x191944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191944u;
label_191944:
    // 0x191944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191948: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x191948u;
    {
        const bool branch_taken_0x191948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191948) {
            ctx->pc = 0x19194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191948u;
            // 0x19194c: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191970u;
            goto label_191970;
        }
    }
    ctx->pc = 0x191950u;
    // 0x191950: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x191954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191958: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x19195c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19195Cu;
    SET_GPR_U32(ctx, 31, 0x191964u);
    ctx->pc = 0x191960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19195Cu;
    // 0x191960: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19195Cu, 0x191964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191964u;
label_191964:
    // 0x191964: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x191964u;
    {
        const bool branch_taken_0x191964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191964u;
        // 0x191968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191964) {
            ctx->pc = 0x1919BCu;
            goto label_1919bc;
        }
    }
    ctx->pc = 0x19196Cu;
    // 0x19196c: 0x0  nop
    ctx->pc = 0x19196cu;
    // NOP
label_191970:
    // 0x191970: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x191974: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x191974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19197c: 0x0  nop
    ctx->pc = 0x19197cu;
    // NOP
label_191980:
    // 0x191980: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x191980u;
    {
        const bool branch_taken_0x191980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x191980) {
            ctx->pc = 0x191984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191980u;
            // 0x191984: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19198Cu;
            goto label_19198c;
        }
    }
    ctx->pc = 0x191988u;
    // 0x191988: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19198c:
    // 0x19198c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x19198cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x191990: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x191994: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x191994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x191998: 0x0  nop
    ctx->pc = 0x191998u;
    // NOP
    // 0x19199c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19199Cu;
    {
        const bool branch_taken_0x19199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1919A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19199Cu;
        // 0x1919a0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19199c) {
            ctx->pc = 0x191980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191980;
        }
    }
    ctx->pc = 0x1919A4u;
    // 0x1919a4: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1919a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1919a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1919ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1919acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1919b0: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x1919b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x1919b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1919b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1919b8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1919b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_1919bc:
    // 0x1919bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1919bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1919c0:
    // 0x1919c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1919c4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1919c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1919c8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1919c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1919cc: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1919ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1919d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1919d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1919d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1919d8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1919d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1919dc: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x1919dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1919e0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1919e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1919e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1919e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1919e8: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1919e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1919ec: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1919ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1919f0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1919f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1919f4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1919f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1919f8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1919F8u;
    {
        const bool branch_taken_0x1919f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0xe4b40014  swc1        $f20, 0x14($a1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f8) {
            ctx->pc = 0x191A08u;
            goto label_191a08;
        }
    }
    ctx->pc = 0x191A00u;
    // 0x191a00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191a04: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x191a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_191a08:
    // 0x191a08: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x191a0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x191a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191a14: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x191a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x191a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x191a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191a1c: 0xae85001c  sw          $a1, 0x1C($s4)
    ctx->pc = 0x191a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 5));
    // 0x191a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x191a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191a24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x191a24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x191a28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x191a28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191a2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x191a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191a30: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x191a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191a34: 0x3e00008  jr          $ra
    ctx->pc = 0x191A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A34u;
        // 0x191a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191A3Cu;
}
