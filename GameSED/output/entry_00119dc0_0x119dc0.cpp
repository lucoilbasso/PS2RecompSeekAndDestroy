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

// Function: entry_00119dc0
// Address: 0x119dc0 - 0x119e18
void entry_00119dc0_0x119dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119dc0_0x119dc0");
#endif

    ctx->pc = 0x119dc0u;

label_119dc0:
    // 0x119dc0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x119dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119dc4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x119dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x119dc8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x119dcc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x119dccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119dd0: 0x0  nop
    ctx->pc = 0x119dd0u;
    // NOP
    // 0x119dd4: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119DD4u;
    {
        const bool branch_taken_0x119dd4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x119DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DD4u;
        // 0x119dd8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dd4) {
            ctx->pc = 0x119DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119dc0;
        }
    }
    ctx->pc = 0x119DDCu;
    // 0x119ddc: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x119ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119de0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119de4: 0x1232818  mult        $a1, $t1, $v1
    ctx->pc = 0x119de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119de8: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119dec: 0x24020934  addiu       $v0, $zero, 0x934
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x119df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119df4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x119df8: 0x1222818  mult        $a1, $t1, $v0
    ctx->pc = 0x119df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x119dfc: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x119dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x119e00: 0x8c650fec  lw          $a1, 0xFEC($v1)
    ctx->pc = 0x119e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
    // 0x119e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119e08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119e0c: 0xac451008  sw          $a1, 0x1008($v0)
    ctx->pc = 0x119e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4104), GPR_U32(ctx, 5));
    // 0x119e10: 0x3e00008  jr          $ra
    ctx->pc = 0x119E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E10u;
        // 0x119e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119E18u;
}
