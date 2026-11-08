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

// Function: entry_001672b0
// Address: 0x1672b0 - 0x167380
void entry_001672b0_0x1672b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001672b0_0x1672b0");
#endif

    switch (ctx->pc) {
        case 0x1672e0u: goto label_1672e0;
        case 0x1672f8u: goto label_1672f8;
        case 0x167304u: goto label_167304;
        case 0x16731cu: goto label_16731c;
        case 0x16733cu: goto label_16733c;
        case 0x167354u: goto label_167354;
        case 0x167360u: goto label_167360;
        case 0x167378u: goto label_167378;
        default: break;
    }

    ctx->pc = 0x1672b0u;

    // 0x1672b0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1672b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1672b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1672b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1672b8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1672bc: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1672c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1672c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1672c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1672c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1672c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1672cc: 0xc79583c4  lwc1        $f21, -0x7C3C($gp)
    ctx->pc = 0x1672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1672d0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1672d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1672d4: 0xc79783c8  lwc1        $f23, -0x7C38($gp)
    ctx->pc = 0x1672d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1672d8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1672D8u;
    SET_GPR_U32(ctx, 31, 0x1672E0u);
    ctx->pc = 0x1672DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672D8u;
    // 0x1672dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1672D8u, 0x1672E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672E0u;
label_1672e0:
    // 0x1672e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1672e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1672e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1672ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1672f0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1672F0u;
    SET_GPR_U32(ctx, 31, 0x1672F8u);
    ctx->pc = 0x1672F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672F0u;
    // 0x1672f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1672F0u, 0x1672F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672F8u;
label_1672f8:
    // 0x1672f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1672f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672fc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1672FCu;
    SET_GPR_U32(ctx, 31, 0x167304u);
    ctx->pc = 0x167300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672FCu;
    // 0x167300: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1672FCu, 0x167304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167304u;
label_167304:
    // 0x167304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167308: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x167308u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x16730c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16730cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167314: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x167314u;
    SET_GPR_U32(ctx, 31, 0x16731Cu);
    ctx->pc = 0x167318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167314u;
    // 0x167318: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x167314u, 0x16731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16731Cu;
label_16731c:
    // 0x16731c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x16731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x167320: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167324: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x167324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x167328: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16732c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167330: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167334: 0xc06164c  jal         func_185930
    ctx->pc = 0x167334u;
    SET_GPR_U32(ctx, 31, 0x16733Cu);
    ctx->pc = 0x167338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167334u;
    // 0x167338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167334u, 0x16733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16733Cu;
label_16733c:
    // 0x16733c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167348: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x167348u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16734c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16734Cu;
    SET_GPR_U32(ctx, 31, 0x167354u);
    ctx->pc = 0x167350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16734Cu;
    // 0x167350: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16734Cu, 0x167354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167354u;
label_167354:
    // 0x167354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167358: 0xc06164c  jal         func_185930
    ctx->pc = 0x167358u;
    SET_GPR_U32(ctx, 31, 0x167360u);
    ctx->pc = 0x16735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167358u;
    // 0x16735c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167358u, 0x167360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167360u;
label_167360:
    // 0x167360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167364: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16736c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x16736cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x167370: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x167370u;
    SET_GPR_U32(ctx, 31, 0x167378u);
    ctx->pc = 0x167374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167370u;
    // 0x167374: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x167370u, 0x167378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167378u;
label_167378:
    // 0x167378: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167378u;
    {
        const bool branch_taken_0x167378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167378u;
        // 0x16737c: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167378) {
            ctx->pc = 0x1673A0u;
            return;
        }
    }
    ctx->pc = 0x167380u;
}
