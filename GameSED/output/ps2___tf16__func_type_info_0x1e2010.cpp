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

// Function: __tf16__func_type_info
// Address: 0x1e2010 - 0x1e2060
void ps2___tf16__func_type_info_0x1e2010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__func_type_info_0x1e2010");
#endif

    switch (ctx->pc) {
        case 0x1e2034u: goto label_1e2034;
        case 0x1e204cu: goto label_1e204c;
        default: break;
    }

    ctx->pc = 0x1e2010u;

    // 0x1e2010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2014: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e2014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e2018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e201c: 0x24502130  addiu       $s0, $v0, 0x2130
    ctx->pc = 0x1e201cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
    // 0x1e2020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e2020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x412130u));
    // 0x1e2024: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2024u;
    {
        const bool branch_taken_0x1e2024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2024u;
        // 0x1e2028: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2024) {
            ctx->pc = 0x1E204Cu;
            goto label_1e204c;
        }
    }
    ctx->pc = 0x1E202Cu;
    // 0x1e202c: 0xc0785e0  jal         func_1E1780
    ctx->pc = 0x1E202Cu;
    SET_GPR_U32(ctx, 31, 0x1E2034u);
    ctx->pc = 0x1E1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1780u, 0x1E202Cu, 0x1E2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2034u;
label_1e2034:
    // 0x1e2034: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e2034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e2038: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1e2038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1e203c: 0x24a5c248  addiu       $a1, $a1, -0x3DB8
    ctx->pc = 0x1e203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951496));
    // 0x1e2040: 0x24c6da30  addiu       $a2, $a2, -0x25D0
    ctx->pc = 0x1e2040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957616));
    // 0x1e2044: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E2044u;
    SET_GPR_U32(ctx, 31, 0x1E204Cu);
    ctx->pc = 0x1E2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2044u;
    // 0x1e2048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E2044u, 0x1E204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E204Cu;
label_1e204c:
    // 0x1e204c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e204cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e2054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2058: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2058u;
        // 0x1e205c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2060u;
}
