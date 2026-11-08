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

// Function: EffectAirExplodataChange__Fii
// Address: 0x120288 - 0x1202f0
void EffectAirExplodataChange__Fii_0x120288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectAirExplodataChange__Fii_0x120288");
#endif

    switch (ctx->pc) {
        case 0x1202c0u: goto label_1202c0;
        default: break;
    }

    ctx->pc = 0x120288u;

    // 0x120288: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x120288u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12028c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x12028cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x120290: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x120290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x120294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x120298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12029c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x12029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1202a0: 0x244274e0  addiu       $v0, $v0, 0x74E0
    ctx->pc = 0x1202a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29920));
    // 0x1202a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1202a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1202a8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1202a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1202ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1202acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1202b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1202b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1202b4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1202b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1202b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1202b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202bc: 0x0  nop
    ctx->pc = 0x1202bcu;
    // NOP
label_1202c0:
    // 0x1202c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1202c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1202c4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1202c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1202c8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1202c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1202cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1202ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1202d0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1202d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1202d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1202d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1202d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1202dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1202dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1202e0: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1202E0u;
    {
        const bool branch_taken_0x1202e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E0u;
        // 0x1202e4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202e0) {
            ctx->pc = 0x1202C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1202c0;
        }
    }
    ctx->pc = 0x1202E8u;
    // 0x1202e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1202E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1202ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E8u;
        // 0x1202ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1202F0u;
}
