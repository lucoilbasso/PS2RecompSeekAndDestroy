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

// Function: Rotate__8WcEntityP9DVAngle32b
// Address: 0x186368 - 0x1863ac
void Rotate__8WcEntityP9DVAngle32b_0x186368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rotate__8WcEntityP9DVAngle32b_0x186368");
#endif

    ctx->pc = 0x186368u;

    // 0x186368: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x18636c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18636Cu;
        // 0x186370: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18636c) {
            ctx->pc = 0x186388u;
            goto label_186388;
        }
    }
    ctx->pc = 0x186374u;
    // 0x186374: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x186374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186378: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x186378u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x18637c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18637Cu;
    {
        const bool branch_taken_0x18637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18637Cu;
        // 0x186380: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18637c) {
            ctx->pc = 0x18639Cu;
            goto label_18639c;
        }
    }
    ctx->pc = 0x186384u;
    // 0x186384: 0x0  nop
    ctx->pc = 0x186384u;
    // NOP
label_186388:
    // 0x186388: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x186388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18638c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x18638cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186390: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x186390u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x186394: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x186394u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x186398: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_18639c:
    // 0x18639c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x18639cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1863a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1863a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1863a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1863A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863A4u;
        // 0x1863a8: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1863A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1863ACu;
}
