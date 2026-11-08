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

// Function: _rix_111
// Address: 0x1c0600 - 0x1c0720
void _rix_111_0x1c0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_111_0x1c0600");
#endif

    switch (ctx->pc) {
        case 0x1c0664u: goto label_1c0664;
        default: break;
    }

    ctx->pc = 0x1c0600u;

    // 0x1c0600: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c0600u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0604: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c0604u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c0608: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1c0608u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1c060c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c0610: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c0610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0614: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0618: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0618u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c061c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c061cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c0620: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c0624: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1c0624u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0628: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1c0628u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c062c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1c062cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0630: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0630u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0634: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1c0634u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0638: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x1c0638u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x1c063c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c063cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0640: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1c0640u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0644: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1c0644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0648: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1c0648u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c064c: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x1c064cu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1c0650: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1c0650u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1c0654: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1c0654u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1c0658: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1c0658u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1c065c: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C065Cu;
    {
        const bool branch_taken_0x1c065c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C065Cu;
        // 0x1c0660: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c065c) {
            ctx->pc = 0x1C0700u;
            goto label_1c0700;
        }
    }
    ctx->pc = 0x1C0664u;
label_1c0664:
    // 0x1c0664: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1c0664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1c0668: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1c0668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1c066c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1c066cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0670: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1c0670u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0674: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0674u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0678: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1c0678u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1c067c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1c067cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1c0680: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1c0680u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c0684: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c0684u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c0688: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1c0688u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c068c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1c068cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0690: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1c0690u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1c0694: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1c0694u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c0698: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1c0698u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c069c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1c069cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1c06a0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1c06a0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1c06a4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1c06a4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1c06a8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1c06a8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1c06ac: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1c06acu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c06b0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x1c06b0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x1c06b4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x1c06b4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1c06b8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x1c06b8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1c06bc: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x1c06bcu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x1c06c0: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x1c06c0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x1c06c4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x1c06c4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c06c8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x1c06c8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1c06cc: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x1c06ccu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1c06d0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x1c06d0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x1c06d4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c06d4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c06d8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c06d8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c06dc: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x1c06dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x1c06e0: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x1c06e0u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c06e4: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x1c06e4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x1c06e8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x1c06e8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1c06ec: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1c06ecu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1c06f0: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x1c06f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x1c06f4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x1c06f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x1c06f8: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C06F8u;
    {
        const bool branch_taken_0x1c06f8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06F8u;
        // 0x1c06fc: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06f8) {
            ctx->pc = 0x1C0664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0664;
        }
    }
    ctx->pc = 0x1C0700u;
label_1c0700:
    // 0x1c0700: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c0700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1c0704: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c0704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1c0708: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c070c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c070cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c0710: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C0710u;
    {
        const bool branch_taken_0x1c0710 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0710u;
        // 0x1c0714: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0710) {
            ctx->pc = 0x1C0664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0664;
        }
    }
    ctx->pc = 0x1C0718u;
    // 0x1c0718: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0720u;
}
