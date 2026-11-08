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

// Function: WSpriteAnimeJobProc__FP8WcSpriteP10WcSequence
// Address: 0x18b6a8 - 0x18b744
void WSpriteAnimeJobProc__FP8WcSpriteP10WcSequence_0x18b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteAnimeJobProc__FP8WcSpriteP10WcSequence_0x18b6a8");
#endif

    switch (ctx->pc) {
        case 0x18b6fcu: goto label_18b6fc;
        case 0x18b728u: goto label_18b728;
        default: break;
    }

    ctx->pc = 0x18b6a8u;

    // 0x18b6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b6b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18b6b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18b6bc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x18B6BCu;
    {
        const bool branch_taken_0x18b6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6bc) {
            ctx->pc = 0x18B6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B6BCu;
            // 0x18b6c0: 0x8e020208  lw          $v0, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B700u;
            goto label_18b700;
        }
    }
    ctx->pc = 0x18B6C4u;
    // 0x18b6c4: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18b6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18b6c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18b6cc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18B6CCu;
    {
        const bool branch_taken_0x18b6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6cc) {
            ctx->pc = 0x18B6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B6CCu;
            // 0x18b6d0: 0x8e020208  lw          $v0, 0x208($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B700u;
            goto label_18b700;
        }
    }
    ctx->pc = 0x18B6D4u;
    // 0x18b6d4: 0x8e050208  lw          $a1, 0x208($s0)
    ctx->pc = 0x18b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18b6d8: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x18b6d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18b6dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18b6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18b6e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b6e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B6E4u;
    {
        const bool branch_taken_0x18b6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6E4u;
        // 0x18b6e8: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6e4) {
            ctx->pc = 0x18B6FCu;
            goto label_18b6fc;
        }
    }
    ctx->pc = 0x18B6ECu;
    // 0x18b6ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6ECu;
    {
        const bool branch_taken_0x18b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6ECu;
        // 0x18b6f0: 0xa4a3000c  sh          $v1, 0xC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6ec) {
            ctx->pc = 0x18B6FCu;
            goto label_18b6fc;
        }
    }
    ctx->pc = 0x18B6F4u;
    // 0x18b6f4: 0xc0629f0  jal         func_18A7C0
    ctx->pc = 0x18B6F4u;
    SET_GPR_U32(ctx, 31, 0x18B6FCu);
    ctx->pc = 0x18A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A7C0u, 0x18B6F4u, 0x18B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6FCu;
label_18b6fc:
    // 0x18b6fc: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x18b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
label_18b700:
    // 0x18b700: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x18B700u;
    {
        const bool branch_taken_0x18b700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b700) {
            ctx->pc = 0x18B704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B700u;
            // 0x18b704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B738u;
            goto label_18b738;
        }
    }
    ctx->pc = 0x18B708u;
    // 0x18b708: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18b710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B714u;
    {
        const bool branch_taken_0x18b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B714u;
        // 0x18b718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b714) {
            ctx->pc = 0x18B734u;
            goto label_18b734;
        }
    }
    ctx->pc = 0x18B71Cu;
    // 0x18b71c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x18b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x18b720: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18B720u;
    SET_GPR_U32(ctx, 31, 0x18B728u);
    ctx->pc = 0x18B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B720u;
    // 0x18b724: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18B720u, 0x18B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B728u;
label_18b728:
    // 0x18b728: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b72c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x18b72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x18b730: 0xa6020202  sh          $v0, 0x202($s0)
    ctx->pc = 0x18b730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 2));
label_18b734:
    // 0x18b734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18b738:
    // 0x18b738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18b738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b73c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B73Cu;
        // 0x18b740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B744u;
}
