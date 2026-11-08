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

// Function: WModelModelPackageInitPBHDR__FP7WcModelP13WModelPackageP5PBHDR
// Address: 0x17f658 - 0x17f6e8
void WModelModelPackageInitPBHDR__FP7WcModelP13WModelPackageP5PBHDR_0x17f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelModelPackageInitPBHDR__FP7WcModelP13WModelPackageP5PBHDR_0x17f658");
#endif

    ctx->pc = 0x17f658u;

    // 0x17f658: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x17f658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17f65c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x17f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x17f660: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f664: 0x248a0020  addiu       $t2, $a0, 0x20
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f668: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x17f668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f66c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x17f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x17f670: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x17f670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x17f674: 0xa4c20014  sh          $v0, 0x14($a2)
    ctx->pc = 0x17f674u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f678: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x17f678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17f67c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f680: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x17f684: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x17f684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17f688: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x17f688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x17f68c: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x17f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x17f690: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x17f690u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x17f694: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x17f698: 0xa4c20016  sh          $v0, 0x16($a2)
    ctx->pc = 0x17f698u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f69c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f6a0: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x17f6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17f6a4: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x17f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
    // 0x17f6a8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x17f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x17f6ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17f6b0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x17f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17f6b4: 0xacc80020  sw          $t0, 0x20($a2)
    ctx->pc = 0x17f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 8));
    // 0x17f6b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f6bc: 0xacc90024  sw          $t1, 0x24($a2)
    ctx->pc = 0x17f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 9));
    // 0x17f6c0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x17f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x17f6c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f6c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f6cc: 0xacc70028  sw          $a3, 0x28($a2)
    ctx->pc = 0x17f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 7));
    // 0x17f6d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f6d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17f6d8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x17f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x17f6dc: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x17f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x17f6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6E0u;
        // 0x17f6e4: 0xacc3002c  sw          $v1, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6E8u;
}
