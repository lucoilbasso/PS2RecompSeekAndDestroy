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

// Function: WModelSetModelTextureAlone__FP13WModelPackageiP10WImageInfo
// Address: 0x17f7d8 - 0x17f86c
void WModelSetModelTextureAlone__FP13WModelPackageiP10WImageInfo_0x17f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelSetModelTextureAlone__FP13WModelPackageiP10WImageInfo_0x17f7d8");
#endif

    ctx->pc = 0x17f7d8u;

    // 0x17f7d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f7dc: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f7e0: 0x94cb001c  lhu         $t3, 0x1C($a2)
    ctx->pc = 0x17f7e0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x17f7e4: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x17f7e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17f7e8: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x17f7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17f7ec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17f7f0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17f7f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f7f8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17f7fc: 0xdcc80038  ld          $t0, 0x38($a2)
    ctx->pc = 0x17f7fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x17f800: 0xa4eb0000  sh          $t3, 0x0($a3)
    ctx->pc = 0x17f800u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x17f804: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17f804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17f808: 0x8c89003c  lw          $t1, 0x3C($a0)
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17f80c: 0x94c3001e  lhu         $v1, 0x1E($a2)
    ctx->pc = 0x17f80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x17f810: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x17f814: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x17f814u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f818: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x17f818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17f81c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17f820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f824: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x17f824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17f828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f82c: 0x8c63eb30  lw          $v1, -0x14D0($v1)
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961968)));
    // 0x17f830: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x17f830u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f834: 0x94c30030  lhu         $v1, 0x30($a2)
    ctx->pc = 0x17f834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x17f838: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x17f838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17f83c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x17f83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17f840: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x17f840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x17f844: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x17f844u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x17f848: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x17f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x17f84c: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x17f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x17f850: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17f850u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x17f854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f858: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17f858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x17f85c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17f860: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x17f860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x17f864: 0x3e00008  jr          $ra
    ctx->pc = 0x17F864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F864u;
        // 0x17f868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F86Cu;
}
