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

// Function: WImageChangeBaseBlock__FP7WcImagei
// Address: 0x17e620 - 0x17e6c0
void WImageChangeBaseBlock__FP7WcImagei_0x17e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageChangeBaseBlock__FP7WcImagei_0x17e620");
#endif

    switch (ctx->pc) {
        case 0x17e648u: goto label_17e648;
        default: break;
    }

    ctx->pc = 0x17e620u;

    // 0x17e620: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x17e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17e624: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17E624u;
    {
        const bool branch_taken_0x17e624 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E624u;
        // 0x17e628: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e624) {
            ctx->pc = 0x17E6B8u;
            goto label_17e6b8;
        }
    }
    ctx->pc = 0x17E62Cu;
    // 0x17e62c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17e630: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x17e630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e634: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x17e634u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e638: 0xc63bc  dsll32      $t4, $t4, 14
    ctx->pc = 0x17e638u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 14));
    // 0x17e63c: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x17e63cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e640: 0xb5cf8  dsll        $t3, $t3, 19
    ctx->pc = 0x17e640u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 19);
    // 0x17e644: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x17e644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_17e648:
    // 0x17e648: 0x9502002c  lhu         $v0, 0x2C($t0)
    ctx->pc = 0x17e648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x17e64c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x17e650: 0x95070018  lhu         $a3, 0x18($t0)
    ctx->pc = 0x17e650u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x17e654: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x17e654u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17e658: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x17e65c: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x17e65cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17e660: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17e660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17e664: 0x9505001a  lhu         $a1, 0x1A($t0)
    ctx->pc = 0x17e664u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x17e668: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x17e668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x17e66c: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x17e66cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x17e670: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x17e670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x17e674: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x17e674u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e678: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e67c: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x17e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x17e680: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x17e680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x17e684: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x17e684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17e688: 0x9503002e  lhu         $v1, 0x2E($t0)
    ctx->pc = 0x17e688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
    // 0x17e68c: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x17e68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x17e690: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17e694: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x17e698: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17e698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17e69c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17e6a0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x17e6a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17e6a8: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x17e6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e6ac: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x17e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x17e6b0: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17E6B0u;
    {
        const bool branch_taken_0x17e6b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6B0u;
        // 0x17e6b4: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6b0) {
            ctx->pc = 0x17E648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e648;
        }
    }
    ctx->pc = 0x17E6B8u;
label_17e6b8:
    // 0x17e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E6C0u;
}
