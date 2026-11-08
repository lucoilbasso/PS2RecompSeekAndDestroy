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

// Function: entry_00152fb4
// Address: 0x152fb4 - 0x15304c
void entry_00152fb4_0x152fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152fb4_0x152fb4");
#endif

    switch (ctx->pc) {
        case 0x152fdcu: goto label_152fdc;
        case 0x152fe8u: goto label_152fe8;
        case 0x152ff4u: goto label_152ff4;
        case 0x153004u: goto label_153004;
        case 0x153014u: goto label_153014;
        case 0x153024u: goto label_153024;
        case 0x153034u: goto label_153034;
        default: break;
    }

    ctx->pc = 0x152fb4u;

    // 0x152fb4: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x152fb8: 0x30530001  andi        $s3, $v0, 0x1
    ctx->pc = 0x152fb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152fbc: 0x16600240  bnez        $s3, . + 4 + (0x240 << 2)
    ctx->pc = 0x152FBCu;
    {
        const bool branch_taken_0x152fbc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x152FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FBCu;
        // 0x152fc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fbc) {
            ctx->pc = 0x1538C0u;
            return;
        }
    }
    ctx->pc = 0x152FC4u;
    // 0x152fc4: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x152fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x152fc8: 0x162402  srl         $a0, $s6, 16
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x152fcc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fd0: 0x94570036  lhu         $s7, 0x36($v0)
    ctx->pc = 0x152fd0u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x152fd4: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x152FD4u;
    SET_GPR_U32(ctx, 31, 0x152FDCu);
    ctx->pc = 0x152FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FD4u;
    // 0x152fd8: 0x94550030  lhu         $s5, 0x30($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x152FD4u, 0x152FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FDCu;
label_152fdc:
    // 0x152fdc: 0x162502  srl         $a0, $s6, 20
    ctx->pc = 0x152fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 20));
    // 0x152fe0: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x152FE0u;
    SET_GPR_U32(ctx, 31, 0x152FE8u);
    ctx->pc = 0x152FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FE0u;
    // 0x152fe4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x152FE0u, 0x152FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FE8u;
label_152fe8:
    // 0x152fe8: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x152fec: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152FECu;
    SET_GPR_U32(ctx, 31, 0x152FF4u);
    ctx->pc = 0x152FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FECu;
    // 0x152ff0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152FECu, 0x152FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FF4u;
label_152ff4:
    // 0x152ff4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x152ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x152ff8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x152ffc: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152FFCu;
    SET_GPR_U32(ctx, 31, 0x153004u);
    ctx->pc = 0x153000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FFCu;
    // 0x153000: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152FFCu, 0x153004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153004u;
label_153004:
    // 0x153004: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x153004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x153008: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x15300c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x15300Cu;
    SET_GPR_U32(ctx, 31, 0x153014u);
    ctx->pc = 0x153010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15300Cu;
    // 0x153010: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15300Cu, 0x153014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153014u;
label_153014:
    // 0x153014: 0x36030001  ori         $v1, $s0, 0x1
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x153018: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x153018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x15301c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x15301Cu;
    SET_GPR_U32(ctx, 31, 0x153024u);
    ctx->pc = 0x153020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15301Cu;
    // 0x153020: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15301Cu, 0x153024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153024u;
label_153024:
    // 0x153024: 0x36030002  ori         $v1, $s0, 0x2
    ctx->pc = 0x153024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x153028: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x15302c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x15302Cu;
    SET_GPR_U32(ctx, 31, 0x153034u);
    ctx->pc = 0x153030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15302Cu;
    // 0x153030: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15302Cu, 0x153034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153034u;
label_153034:
    // 0x153034: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x153034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x153038: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x153038u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x15303c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15303Cu;
    {
        const bool branch_taken_0x15303c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x153040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15303Cu;
        // 0x153040: 0x101027  nor         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15303c) {
            ctx->pc = 0x15304Cu;
            return;
        }
    }
    ctx->pc = 0x153044u;
    // 0x153044: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x153048: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x153048u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    ctx->pc = 0x15304cu;
}
