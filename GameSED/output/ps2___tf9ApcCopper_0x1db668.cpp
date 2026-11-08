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

// Function: __tf9ApcCopper
// Address: 0x1db668 - 0x1db6ec
void ps2___tf9ApcCopper_0x1db668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9ApcCopper_0x1db668");
#endif

    switch (ctx->pc) {
        case 0x1db6a4u: goto label_1db6a4;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6d0u: goto label_1db6d0;
        default: break;
    }

    ctx->pc = 0x1db668u;

    // 0x1db668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db66c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1db670: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db674: 0x24511248  addiu       $s1, $v0, 0x1248
    ctx->pc = 0x1db674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
    // 0x1db678: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411248u));
    // 0x1db67c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db680: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DB680u;
    {
        const bool branch_taken_0x1db680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB680u;
        // 0x1db684: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db680) {
            ctx->pc = 0x1DB6D4u;
            goto label_1db6d4;
        }
    }
    ctx->pc = 0x1DB688u;
    // 0x1db688: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1db68c: 0x24501268  addiu       $s0, $v0, 0x1268
    ctx->pc = 0x1db68cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x1db690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411268u));
    // 0x1db694: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB694u;
    {
        const bool branch_taken_0x1db694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db694) {
            ctx->pc = 0x1DB698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB694u;
            // 0x1db698: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6C0u;
            goto label_1db6c0;
        }
    }
    ctx->pc = 0x1DB69Cu;
    // 0x1db69c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DB69Cu;
    SET_GPR_U32(ctx, 31, 0x1DB6A4u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DB69Cu, 0x1DB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6A4u;
label_1db6a4:
    // 0x1db6a4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1db6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1db6a8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1db6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1db6ac: 0x24a57528  addiu       $a1, $a1, 0x7528
    ctx->pc = 0x1db6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29992));
    // 0x1db6b0: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1db6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1db6b4: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DB6B4u;
    SET_GPR_U32(ctx, 31, 0x1DB6BCu);
    ctx->pc = 0x1DB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6B4u;
    // 0x1db6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DB6B4u, 0x1DB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6BCu;
label_1db6bc:
    // 0x1db6bc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1db6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1db6c0:
    // 0x1db6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1db6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6c8: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DB6C8u;
    SET_GPR_U32(ctx, 31, 0x1DB6D0u);
    ctx->pc = 0x1DB6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6C8u;
    // 0x1db6cc: 0x24a57538  addiu       $a1, $a1, 0x7538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DB6C8u, 0x1DB6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6D0u;
label_1db6d0:
    // 0x1db6d0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1db6d4:
    // 0x1db6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db6dc: 0x24421248  addiu       $v0, $v0, 0x1248
    ctx->pc = 0x1db6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
    // 0x1db6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E4u;
        // 0x1db6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB6ECu;
}
