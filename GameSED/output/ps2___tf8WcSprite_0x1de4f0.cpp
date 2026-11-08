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

// Function: __tf8WcSprite
// Address: 0x1de4f0 - 0x1de540
void ps2___tf8WcSprite_0x1de4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8WcSprite_0x1de4f0");
#endif

    switch (ctx->pc) {
        case 0x1de514u: goto label_1de514;
        case 0x1de52cu: goto label_1de52c;
        default: break;
    }

    ctx->pc = 0x1de4f0u;

    // 0x1de4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de4f4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1de4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1de4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de4fc: 0x24501658  addiu       $s0, $v0, 0x1658
    ctx->pc = 0x1de4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5720));
    // 0x1de500: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411658u));
    // 0x1de504: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE504u;
    {
        const bool branch_taken_0x1de504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE504u;
        // 0x1de508: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de504) {
            ctx->pc = 0x1DE52Cu;
            goto label_1de52c;
        }
    }
    ctx->pc = 0x1DE50Cu;
    // 0x1de50c: 0xc077340  jal         func_1DCD00
    ctx->pc = 0x1DE50Cu;
    SET_GPR_U32(ctx, 31, 0x1DE514u);
    ctx->pc = 0x1DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD00u, 0x1DE50Cu, 0x1DE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE514u;
label_1de514:
    // 0x1de514: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1de514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1de518: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1de518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1de51c: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8
    ctx->pc = 0x1de51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
    // 0x1de520: 0x24c61580  addiu       $a2, $a2, 0x1580
    ctx->pc = 0x1de520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5504));
    // 0x1de524: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DE524u;
    SET_GPR_U32(ctx, 31, 0x1DE52Cu);
    ctx->pc = 0x1DE528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE524u;
    // 0x1de528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DE524u, 0x1DE52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE52Cu;
label_1de52c:
    // 0x1de52c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de538: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE538u;
        // 0x1de53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE540u;
}
