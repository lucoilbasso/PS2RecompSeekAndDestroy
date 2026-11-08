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

// Function: EffectSendStungunExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x120d98 - 0x120e34
void EffectSendStungunExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendStungunExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120d98");
#endif

    switch (ctx->pc) {
        case 0x120dd8u: goto label_120dd8;
        default: break;
    }

    ctx->pc = 0x120d98u;

    // 0x120d98: 0x8f8289c8  lw          $v0, -0x7638($gp)
    ctx->pc = 0x120d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x120d9c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x120d9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120da0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x120DA0u;
    {
        const bool branch_taken_0x120da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DA0u;
        // 0x120da4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120da0) {
            ctx->pc = 0x120E2Cu;
            goto label_120e2c;
        }
    }
    ctx->pc = 0x120DA8u;
    // 0x120da8: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x120da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120dac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x120DACu;
    {
        const bool branch_taken_0x120dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DACu;
        // 0x120db0: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dac) {
            ctx->pc = 0x120E2Cu;
            goto label_120e2c;
        }
    }
    ctx->pc = 0x120DB4u;
    // 0x120db4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x120db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x120db8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x120db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x120dbc: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x120dc0: 0x244d7b80  addiu       $t5, $v0, 0x7B80
    ctx->pc = 0x120dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 31616));
    // 0x120dc4: 0x246c7c20  addiu       $t4, $v1, 0x7C20
    ctx->pc = 0x120dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 31776));
    // 0x120dc8: 0x248b7cc0  addiu       $t3, $a0, 0x7CC0
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 31936));
    // 0x120dcc: 0x24a90790  addiu       $t1, $a1, 0x790
    ctx->pc = 0x120dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
    // 0x120dd0: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x120dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x120dd4: 0x0  nop
    ctx->pc = 0x120dd4u;
    // NOP
label_120dd8:
    // 0x120dd8: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x120dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x120ddc: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x120ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x120de0: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x120de4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x120de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120de8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x120de8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x120dec: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x120decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x120df0: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x120df4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x120df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120df8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x120df8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x120dfc: 0x24e70090  addiu       $a3, $a3, 0x90
    ctx->pc = 0x120dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x120e00: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x120e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x120e04: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x120e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x120e08: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x120e08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x120e0c: 0x8f8389c8  lw          $v1, -0x7638($gp)
    ctx->pc = 0x120e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
    // 0x120e10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x120e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x120e14: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x120e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x120e18: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x120e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120e1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120E1Cu;
    {
        const bool branch_taken_0x120e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E1Cu;
        // 0x120e20: 0x10a102b  sltu        $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e1c) {
            ctx->pc = 0x120E2Cu;
            goto label_120e2c;
        }
    }
    ctx->pc = 0x120E24u;
    // 0x120e24: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x120E24u;
    {
        const bool branch_taken_0x120e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e24) {
            ctx->pc = 0x120E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120E24u;
            // 0x120e28: 0x8d270000  lw          $a3, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120dd8;
        }
    }
    ctx->pc = 0x120E2Cu;
label_120e2c:
    // 0x120e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x120E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120E34u;
}
