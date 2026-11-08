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

// Function: ApCMTraceDirection__FP16CameraMotionWorkb
// Address: 0x140630 - 0x1406bc
void ApCMTraceDirection__FP16CameraMotionWorkb_0x140630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceDirection__FP16CameraMotionWorkb_0x140630");
#endif

    ctx->pc = 0x140630u;

    // 0x140630: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x140630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140634: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x140634u;
    {
        const bool branch_taken_0x140634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140634u;
        // 0x140638: 0x8ce60060  lw          $a2, 0x60($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140634) {
            ctx->pc = 0x140678u;
            goto label_140678;
        }
    }
    ctx->pc = 0x14063Cu;
    // 0x14063c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x14063cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x140640: 0x8cc30184  lw          $v1, 0x184($a2)
    ctx->pc = 0x140640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x140644: 0x8c85d188  lw          $a1, -0x2E78($a0)
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1ED188u));
    // 0x140648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14064c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x14064cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x140650: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x140650u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x140654: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x140654u;
    {
        const bool branch_taken_0x140654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140654) {
            ctx->pc = 0x140658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140654u;
            // 0x140658: 0x8cc30694  lw          $v1, 0x694($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406B0u;
            goto label_1406b0;
        }
    }
    ctx->pc = 0x14065Cu;
    // 0x14065c: 0x8cc2017c  lw          $v0, 0x17C($a2)
    ctx->pc = 0x14065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 380)));
    // 0x140660: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x140660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x140664: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x140664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x140668: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x140668u;
    {
        const bool branch_taken_0x140668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140668) {
            ctx->pc = 0x14066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140668u;
            // 0x14066c: 0x8cc30694  lw          $v1, 0x694($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406B0u;
            goto label_1406b0;
        }
    }
    ctx->pc = 0x140670u;
    // 0x140670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x140670u;
    {
        const bool branch_taken_0x140670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140670u;
        // 0x140674: 0x8cc30698  lw          $v1, 0x698($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140670) {
            ctx->pc = 0x1406B0u;
            goto label_1406b0;
        }
    }
    ctx->pc = 0x140678u;
label_140678:
    // 0x140678: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x14067c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14067cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x140680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x140680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x140684: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x140684u;
    {
        const bool branch_taken_0x140684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140684) {
            ctx->pc = 0x140688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140684u;
            // 0x140688: 0x8cc2001c  lw          $v0, 0x1C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x14068Cu;
    // 0x14068c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x14068cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140690: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x140694: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140694u;
    {
        const bool branch_taken_0x140694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x140694) {
            ctx->pc = 0x140698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140694u;
            // 0x140698: 0x8cc2001c  lw          $v0, 0x1C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406A8u;
            goto label_1406a8;
        }
    }
    ctx->pc = 0x14069Cu;
    // 0x14069c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14069Cu;
    {
        const bool branch_taken_0x14069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14069Cu;
        // 0x1406a0: 0x8cc30694  lw          $v1, 0x694($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14069c) {
            ctx->pc = 0x1406B0u;
            goto label_1406b0;
        }
    }
    ctx->pc = 0x1406A4u;
    // 0x1406a4: 0x0  nop
    ctx->pc = 0x1406a4u;
    // NOP
label_1406a8:
    // 0x1406a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1406ac: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1406b0:
    // 0x1406b0: 0x8ce20194  lw          $v0, 0x194($a3)
    ctx->pc = 0x1406b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x1406b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1406B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1406B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406B4u;
        // 0x1406b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1406B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1406BCu;
}
