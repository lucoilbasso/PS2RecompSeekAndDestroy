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

// Function: WSpriteAnimeJobRelease__FP8WcSprite
// Address: 0x18b628 - 0x18b674
void WSpriteAnimeJobRelease__FP8WcSprite_0x18b628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteAnimeJobRelease__FP8WcSprite_0x18b628");
#endif

    switch (ctx->pc) {
        case 0x18b658u: goto label_18b658;
        default: break;
    }

    ctx->pc = 0x18b628u;

    // 0x18b628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b634: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18b638: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b63c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18b640: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b644: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B644u;
    {
        const bool branch_taken_0x18b644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B644u;
        // 0x18b648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b644) {
            ctx->pc = 0x18B664u;
            goto label_18b664;
        }
    }
    ctx->pc = 0x18B64Cu;
    // 0x18b64c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x18b650: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18B650u;
    SET_GPR_U32(ctx, 31, 0x18B658u);
    ctx->pc = 0x18B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B650u;
    // 0x18b654: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18B650u, 0x18B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B658u;
label_18b658:
    // 0x18b658: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b65c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x18b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x18b660: 0xa6020202  sh          $v0, 0x202($s0)
    ctx->pc = 0x18b660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 2));
label_18b664:
    // 0x18b664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b668: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18b668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b66c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B66Cu;
        // 0x18b670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B674u;
}
