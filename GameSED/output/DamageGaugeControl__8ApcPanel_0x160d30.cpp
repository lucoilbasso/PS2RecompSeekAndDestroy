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

// Function: DamageGaugeControl__8ApcPanel
// Address: 0x160d30 - 0x160d90
void DamageGaugeControl__8ApcPanel_0x160d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageGaugeControl__8ApcPanel_0x160d30");
#endif

    switch (ctx->pc) {
        case 0x160d84u: goto label_160d84;
        default: break;
    }

    ctx->pc = 0x160d30u;

    // 0x160d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160d34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x160d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x160d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160d3c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x160d40: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x160d44: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x160d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160d4c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x160d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x160d50: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x160d50u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x160d54: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x160d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x160d58: 0x28624000  slti        $v0, $v1, 0x4000
    ctx->pc = 0x160d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x160d5c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x160d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160D64u;
    {
        const bool branch_taken_0x160d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D64u;
        // 0x160d68: 0x28632000  slti        $v1, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d64) {
            ctx->pc = 0x160D78u;
            goto label_160d78;
        }
    }
    ctx->pc = 0x160D6Cu;
    // 0x160d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160D70u;
    {
        const bool branch_taken_0x160d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D70u;
        // 0x160d74: 0x43300a  movz        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d70) {
            ctx->pc = 0x160D7Cu;
            goto label_160d7c;
        }
    }
    ctx->pc = 0x160D78u;
label_160d78:
    // 0x160d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160d7c:
    // 0x160d7c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x160D7Cu;
    SET_GPR_U32(ctx, 31, 0x160D84u);
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x160D7Cu, 0x160D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D84u;
label_160d84:
    // 0x160d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d88: 0x3e00008  jr          $ra
    ctx->pc = 0x160D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D88u;
        // 0x160d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D90u;
}
