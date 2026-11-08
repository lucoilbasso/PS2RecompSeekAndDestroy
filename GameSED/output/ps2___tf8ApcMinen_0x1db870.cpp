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

// Function: __tf8ApcMinen
// Address: 0x1db870 - 0x1db8f4
void ps2___tf8ApcMinen_0x1db870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8ApcMinen_0x1db870");
#endif

    switch (ctx->pc) {
        case 0x1db8acu: goto label_1db8ac;
        case 0x1db8c4u: goto label_1db8c4;
        case 0x1db8d8u: goto label_1db8d8;
        default: break;
    }

    ctx->pc = 0x1db870u;

    // 0x1db870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db874: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1db878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db87c: 0x24511288  addiu       $s1, $v0, 0x1288
    ctx->pc = 0x1db87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x1db880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411288u));
    // 0x1db884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db888: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DB888u;
    {
        const bool branch_taken_0x1db888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB888u;
        // 0x1db88c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db888) {
            ctx->pc = 0x1DB8DCu;
            goto label_1db8dc;
        }
    }
    ctx->pc = 0x1DB890u;
    // 0x1db890: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1db894: 0x24501268  addiu       $s0, $v0, 0x1268
    ctx->pc = 0x1db894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
    // 0x1db898: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1db898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411268u));
    // 0x1db89c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB89Cu;
    {
        const bool branch_taken_0x1db89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db89c) {
            ctx->pc = 0x1DB8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB89Cu;
            // 0x1db8a0: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB8C8u;
            goto label_1db8c8;
        }
    }
    ctx->pc = 0x1DB8A4u;
    // 0x1db8a4: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DB8A4u;
    SET_GPR_U32(ctx, 31, 0x1DB8ACu);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DB8A4u, 0x1DB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8ACu;
label_1db8ac:
    // 0x1db8ac: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1db8b0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1db8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1db8b4: 0x24a57528  addiu       $a1, $a1, 0x7528
    ctx->pc = 0x1db8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29992));
    // 0x1db8b8: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1db8bc: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DB8BCu;
    SET_GPR_U32(ctx, 31, 0x1DB8C4u);
    ctx->pc = 0x1DB8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8BCu;
    // 0x1db8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DB8BCu, 0x1DB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8C4u;
label_1db8c4:
    // 0x1db8c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1db8c8:
    // 0x1db8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1db8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8d0: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DB8D0u;
    SET_GPR_U32(ctx, 31, 0x1DB8D8u);
    ctx->pc = 0x1DB8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8D0u;
    // 0x1db8d4: 0x24a57548  addiu       $a1, $a1, 0x7548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DB8D0u, 0x1DB8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB8D8u;
label_1db8d8:
    // 0x1db8d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1db8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1db8dc:
    // 0x1db8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db8e4: 0x24421288  addiu       $v0, $v0, 0x1288
    ctx->pc = 0x1db8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x1db8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8ECu;
        // 0x1db8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB8F4u;
}
