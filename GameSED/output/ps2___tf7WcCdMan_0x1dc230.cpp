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

// Function: __tf7WcCdMan
// Address: 0x1dc230 - 0x1dc27c
void ps2___tf7WcCdMan_0x1dc230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7WcCdMan_0x1dc230");
#endif

    switch (ctx->pc) {
        case 0x1dc254u: goto label_1dc254;
        case 0x1dc268u: goto label_1dc268;
        default: break;
    }

    ctx->pc = 0x1dc230u;

    // 0x1dc230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc234: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc23c: 0x24501490  addiu       $s0, $v0, 0x1490
    ctx->pc = 0x1dc23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x1dc240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411490u));
    // 0x1dc244: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC244u;
    {
        const bool branch_taken_0x1dc244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC244u;
        // 0x1dc248: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc244) {
            ctx->pc = 0x1DC268u;
            goto label_1dc268;
        }
    }
    ctx->pc = 0x1DC24Cu;
    // 0x1dc24c: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC24Cu;
    SET_GPR_U32(ctx, 31, 0x1DC254u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC24Cu, 0x1DC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC254u;
label_1dc254:
    // 0x1dc254: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dc258: 0x24a579f8  addiu       $a1, $a1, 0x79F8
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31224));
    // 0x1dc25c: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc260: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC260u;
    SET_GPR_U32(ctx, 31, 0x1DC268u);
    ctx->pc = 0x1DC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC260u;
    // 0x1dc264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC260u, 0x1DC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC268u;
label_1dc268:
    // 0x1dc268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc26c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc270: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc274: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC274u;
        // 0x1dc278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC27Cu;
}
