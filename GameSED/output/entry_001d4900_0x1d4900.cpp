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

// Function: entry_001d4900
// Address: 0x1d4900 - 0x1d49e8
void entry_001d4900_0x1d4900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4900_0x1d4900");
#endif

    switch (ctx->pc) {
        case 0x1d4910u: goto label_1d4910;
        case 0x1d495cu: goto label_1d495c;
        case 0x1d4988u: goto label_1d4988;
        case 0x1d49a8u: goto label_1d49a8;
        default: break;
    }

    ctx->pc = 0x1d4900u;

    // 0x1d4900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d4904: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d4908: 0xc074066  jal         func_1D0198
    ctx->pc = 0x1D4908u;
    SET_GPR_U32(ctx, 31, 0x1D4910u);
    ctx->pc = 0x1D490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4908u;
    // 0x1d490c: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0198u, 0x1D4908u, 0x1D4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4910u;
label_1d4910:
    // 0x1d4910: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4914: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d4918: 0x2454e1b8  addiu       $s4, $v0, -0x1E48
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959544));
    // 0x1d491c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4920: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24E1C0u));
    // 0x1d4924: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d4928: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1d492c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4930: 0x2903e  dsrl32      $s2, $v0, 0
    ctx->pc = 0x1d4930u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d4934: 0x250802f  dsubu       $s0, $s2, $s0
    ctx->pc = 0x1d4934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
    // 0x1d4938: 0x66100fef  daddiu      $s0, $s0, 0xFEF
    ctx->pc = 0x1d4938u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    // 0x1d493c: 0x10833a  dsrl        $s0, $s0, 12
    ctx->pc = 0x1d493cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 12);
    // 0x1d4940: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x1d4940u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
    // 0x1d4944: 0x108338  dsll        $s0, $s0, 12
    ctx->pc = 0x1d4944u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 12);
    // 0x1d4948: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x1d4948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1d494c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D494Cu;
    {
        const bool branch_taken_0x1d494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D494Cu;
        // 0x1d4950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d494c) {
            ctx->pc = 0x1D49E8u;
            return;
        }
    }
    ctx->pc = 0x1D4954u;
    // 0x1d4954: 0xc0740ce  jal         func_1D0338
    ctx->pc = 0x1D4954u;
    SET_GPR_U32(ctx, 31, 0x1D495Cu);
    ctx->pc = 0x1D4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4954u;
    // 0x1d4958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0338u, 0x1D4954u, 0x1D495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D495Cu;
label_1d495c:
    // 0x1d495c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d4960: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x1d4960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1d4964: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d4964u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d4968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d496c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D496Cu;
    {
        const bool branch_taken_0x1d496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D496Cu;
        // 0x1d4970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d496c) {
            ctx->pc = 0x1D49E8u;
            return;
        }
    }
    ctx->pc = 0x1D4974u;
    // 0x1d4974: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x1d4974u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d4978: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x1d4978u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x1d497c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4980: 0xc0740ce  jal         func_1D0338
    ctx->pc = 0x1D4980u;
    SET_GPR_U32(ctx, 31, 0x1D4988u);
    ctx->pc = 0x1D4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4980u;
    // 0x1d4984: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0338u, 0x1D4980u, 0x1D4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4988u;
label_1d4988:
    // 0x1d4988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d498c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d4990: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4998: 0x14460017  bne         $v0, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D4998u;
    {
        const bool branch_taken_0x1d4998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4998u;
        // 0x1d499c: 0x2467e5e8  addiu       $a3, $v1, -0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4998) {
            ctx->pc = 0x1D49F8u;
            return;
        }
    }
    ctx->pc = 0x1D49A0u;
    // 0x1d49a0: 0xc0740ce  jal         func_1D0338
    ctx->pc = 0x1D49A0u;
    SET_GPR_U32(ctx, 31, 0x1D49A8u);
    ctx->pc = 0x1D0338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0338u, 0x1D49A0u, 0x1D49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49A8u;
label_1d49a8:
    // 0x1d49a8: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1d49a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d49ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d49acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d49b4: 0xe69023  subu        $s2, $a3, $a2
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1d49b8: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1d49b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d49bc: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1d49bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d49c0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1d49c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d49c4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d49c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d49c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D49C8u;
    {
        const bool branch_taken_0x1d49c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49C8u;
        // 0x1d49cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49c8) {
            ctx->pc = 0x1D49E8u;
            return;
        }
    }
    ctx->pc = 0x1D49D0u;
    // 0x1d49d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d49d4: 0x8c43e5d0  lw          $v1, -0x1A30($v0)
    ctx->pc = 0x1d49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24E5D0u));
    // 0x1d49d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d49dc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1d49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d49e0: 0xac43e5e8  sw          $v1, -0x1A18($v0)
    ctx->pc = 0x1d49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960616), GPR_U32(ctx, 3));
    // 0x1d49e4: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1d49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1d49e8u;
}
