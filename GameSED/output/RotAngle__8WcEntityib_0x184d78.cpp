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

// Function: RotAngle__8WcEntityib
// Address: 0x184d78 - 0x184dc8
void RotAngle__8WcEntityib_0x184d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RotAngle__8WcEntityib_0x184d78");
#endif

    ctx->pc = 0x184d78u;

    // 0x184d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184d7c: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x184d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x184d80: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x184d80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x184d84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x184d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x184d88: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x184D88u;
    {
        const bool branch_taken_0x184d88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D88u;
        // 0x184d8c: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d88) {
            ctx->pc = 0x184DA0u;
            goto label_184da0;
        }
    }
    ctx->pc = 0x184D90u;
    // 0x184d90: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x184d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d94: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x184d94u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x184d98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x184D98u;
    {
        const bool branch_taken_0x184d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D98u;
        // 0x184d9c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d98) {
            ctx->pc = 0x184DB4u;
            goto label_184db4;
        }
    }
    ctx->pc = 0x184DA0u;
label_184da0:
    // 0x184da0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x184da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x184da4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x184da4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184da8: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x184da8u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x184dac: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x184dacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x184db0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x184db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_184db4:
    // 0x184db4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x184db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x184db8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x184db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x184dbc: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x184dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x184dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x184DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DC0u;
        // 0x184dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184DC8u;
}
