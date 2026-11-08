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

// Function: ClassJobRelease__9ApcCqpartUi
// Address: 0x1db230 - 0x1db268
void ClassJobRelease__9ApcCqpartUi_0x1db230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRelease__9ApcCqpartUi_0x1db230");
#endif

    switch (ctx->pc) {
        case 0x1db25cu: goto label_1db25c;
        default: break;
    }

    ctx->pc = 0x1db230u;

    // 0x1db230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db234: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x1db234u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1db238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db23c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1db23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db240: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x1db240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1db244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1db248: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB248u;
    {
        const bool branch_taken_0x1db248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB248u;
        // 0x1db24c: 0xac820c04  sw          $v0, 0xC04($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db248) {
            ctx->pc = 0x1DB25Cu;
            goto label_1db25c;
        }
    }
    ctx->pc = 0x1DB250u;
    // 0x1db250: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1db250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1db254: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DB254u;
    SET_GPR_U32(ctx, 31, 0x1DB25Cu);
    ctx->pc = 0x1DB258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB254u;
    // 0x1db258: 0x24841208  addiu       $a0, $a0, 0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DB254u, 0x1DB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB25Cu;
label_1db25c:
    // 0x1db25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db260: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB260u;
        // 0x1db264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB268u;
}
