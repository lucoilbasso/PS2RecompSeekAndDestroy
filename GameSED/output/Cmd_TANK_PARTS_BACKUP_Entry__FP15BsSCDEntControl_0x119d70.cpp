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

// Function: Cmd_TANK_PARTS_BACKUP_Entry__FP15BsSCDEntControl
// Address: 0x119d70 - 0x119e18
void Cmd_TANK_PARTS_BACKUP_Entry__FP15BsSCDEntControl_0x119d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARTS_BACKUP_Entry__FP15BsSCDEntControl_0x119d70");
#endif

    switch (ctx->pc) {
        case 0x119d80u: goto label_119d80;
        case 0x119dc0u: goto label_119dc0;
        default: break;
    }

    ctx->pc = 0x119d70u;

    // 0x119d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119d78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119D78u;
    SET_GPR_U32(ctx, 31, 0x119D80u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119D78u, 0x119D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D80u;
label_119d80:
    // 0x119d80: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x119d80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d84: 0x240424d0  addiu       $a0, $zero, 0x24D0
    ctx->pc = 0x119d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119d88: 0x1242018  mult        $a0, $t1, $a0
    ctx->pc = 0x119d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x119d8c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119d90: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x119d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x119d94: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x119d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x119d98: 0x24620ff0  addiu       $v0, $v1, 0xFF0
    ctx->pc = 0x119d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x119d9c: 0x246511c0  addiu       $a1, $v1, 0x11C0
    ctx->pc = 0x119d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4544));
    // 0x119da0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x119da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x119da4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119da8: 0x8c670fe8  lw          $a3, 0xFE8($v1)
    ctx->pc = 0x119da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x119dac: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x119db0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x119db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x119db4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x119db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x119db8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x119db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119dbc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x119dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
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
