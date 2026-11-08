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

// Function: ApMotionGhostProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x13a8f8 - 0x13a9d4
void ApMotionGhostProc__FP11BMotionCtrlP11BMotionWorki_0x13a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionGhostProc__FP11BMotionCtrlP11BMotionWorki_0x13a8f8");
#endif

    switch (ctx->pc) {
        case 0x13a930u: goto label_13a930;
        case 0x13a970u: goto label_13a970;
        case 0x13a998u: goto label_13a998;
        case 0x13a9bcu: goto label_13a9bc;
        default: break;
    }

    ctx->pc = 0x13a8f8u;

    // 0x13a8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a8fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a90c: 0x8cd10010  lw          $s1, 0x10($a2)
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13a910: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x13a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x13a914: 0x8e300074  lw          $s0, 0x74($s1)
    ctx->pc = 0x13a914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x13a918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13a918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a91c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13a920: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13A920u;
    {
        const bool branch_taken_0x13a920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A920u;
        // 0x13a924: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a920) {
            ctx->pc = 0x13A9BCu;
            goto label_13a9bc;
        }
    }
    ctx->pc = 0x13A928u;
    // 0x13a928: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A928u;
    SET_GPR_U32(ctx, 31, 0x13A930u);
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A928u, 0x13A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A930u;
label_13a930:
    // 0x13a930: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x13a930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a934: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x13a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x13a938: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13A938u;
    {
        const bool branch_taken_0x13a938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a938) {
            ctx->pc = 0x13A9BCu;
            goto label_13a9bc;
        }
    }
    ctx->pc = 0x13A940u;
    // 0x13a940: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x13a940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a944: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13A944u;
    {
        const bool branch_taken_0x13a944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A944u;
        // 0x13a948: 0x2603071c  addiu       $v1, $s0, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a944) {
            ctx->pc = 0x13A9BCu;
            goto label_13a9bc;
        }
    }
    ctx->pc = 0x13A94Cu;
    // 0x13a94c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a950: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A950u;
    {
        const bool branch_taken_0x13a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a950) {
            ctx->pc = 0x13A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A950u;
            // 0x13a954: 0x2603075c  addiu       $v1, $s0, 0x75C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A974u;
            goto label_13a974;
        }
    }
    ctx->pc = 0x13A958u;
    // 0x13a958: 0x2622071c  addiu       $v0, $s1, 0x71C
    ctx->pc = 0x13a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
    // 0x13a95c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A95Cu;
    {
        const bool branch_taken_0x13a95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A95Cu;
        // 0x13a960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a95c) {
            ctx->pc = 0x13A970u;
            goto label_13a970;
        }
    }
    ctx->pc = 0x13A964u;
    // 0x13a964: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a968: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A968u;
    SET_GPR_U32(ctx, 31, 0x13A970u);
    ctx->pc = 0x13A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A968u;
    // 0x13a96c: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A968u, 0x13A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A970u;
label_13a970:
    // 0x13a970: 0x2603075c  addiu       $v1, $s0, 0x75C
    ctx->pc = 0x13a970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
label_13a974:
    // 0x13a974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a978: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A978u;
    {
        const bool branch_taken_0x13a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a978) {
            ctx->pc = 0x13A97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A978u;
            // 0x13a97c: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A99Cu;
            goto label_13a99c;
        }
    }
    ctx->pc = 0x13A980u;
    // 0x13a980: 0x2622075c  addiu       $v0, $s1, 0x75C
    ctx->pc = 0x13a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
    // 0x13a984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A984u;
    {
        const bool branch_taken_0x13a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A984u;
        // 0x13a988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a984) {
            ctx->pc = 0x13A998u;
            goto label_13a998;
        }
    }
    ctx->pc = 0x13A98Cu;
    // 0x13a98c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x13a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a990: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A990u;
    SET_GPR_U32(ctx, 31, 0x13A998u);
    ctx->pc = 0x13A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A990u;
    // 0x13a994: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A990u, 0x13A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A998u;
label_13a998:
    // 0x13a998: 0x2603079c  addiu       $v1, $s0, 0x79C
    ctx->pc = 0x13a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
label_13a99c:
    // 0x13a99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a9a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A9A0u;
    {
        const bool branch_taken_0x13a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9A0u;
        // 0x13a9a4: 0x2622079c  addiu       $v0, $s1, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9a0) {
            ctx->pc = 0x13A9BCu;
            goto label_13a9bc;
        }
    }
    ctx->pc = 0x13A9A8u;
    // 0x13a9a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A9A8u;
    {
        const bool branch_taken_0x13a9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9A8u;
        // 0x13a9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a9a8) {
            ctx->pc = 0x13A9BCu;
            goto label_13a9bc;
        }
    }
    ctx->pc = 0x13A9B0u;
    // 0x13a9b0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a9b4: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A9B4u;
    SET_GPR_U32(ctx, 31, 0x13A9BCu);
    ctx->pc = 0x13A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9B4u;
    // 0x13a9b8: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A9B4u, 0x13A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9BCu;
label_13a9bc:
    // 0x13a9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a9c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a9c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a9c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9CCu;
        // 0x13a9d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A9D4u;
}
