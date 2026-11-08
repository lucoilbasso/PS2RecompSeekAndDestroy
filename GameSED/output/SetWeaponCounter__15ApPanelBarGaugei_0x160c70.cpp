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

// Function: SetWeaponCounter__15ApPanelBarGaugei
// Address: 0x160c70 - 0x160d2c
void SetWeaponCounter__15ApPanelBarGaugei_0x160c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWeaponCounter__15ApPanelBarGaugei_0x160c70");
#endif

    switch (ctx->pc) {
        case 0x160ca8u: goto label_160ca8;
        case 0x160cd8u: goto label_160cd8;
        case 0x160d04u: goto label_160d04;
        case 0x160d1cu: goto label_160d1c;
        default: break;
    }

    ctx->pc = 0x160c70u;

    // 0x160c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160c74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x160c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x160c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x160c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x160c80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x160c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160c84: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x160C84u;
    {
        const bool branch_taken_0x160c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C84u;
        // 0x160c88: 0x28a203e8  slti        $v0, $a1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c84) {
            ctx->pc = 0x160D1Cu;
            goto label_160d1c;
        }
    }
    ctx->pc = 0x160C8Cu;
    // 0x160c8c: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x160c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x160c90: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x160c90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x160c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c98: 0x28a20064  slti        $v0, $a1, 0x64
    ctx->pc = 0x160c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x160c9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160C9Cu;
    {
        const bool branch_taken_0x160c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C9Cu;
        // 0x160ca0: 0xae05001c  sw          $a1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c9c) {
            ctx->pc = 0x160CC4u;
            goto label_160cc4;
        }
    }
    ctx->pc = 0x160CA4u;
    // 0x160ca4: 0x0  nop
    ctx->pc = 0x160ca4u;
    // NOP
label_160ca8:
    // 0x160ca8: 0x24a5ff9c  addiu       $a1, $a1, -0x64
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967196));
    // 0x160cac: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x160cb0: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x160cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x160cb4: 0x0  nop
    ctx->pc = 0x160cb4u;
    // NOP
    // 0x160cb8: 0x0  nop
    ctx->pc = 0x160cb8u;
    // NOP
    // 0x160cbc: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160CBCu;
    {
        const bool branch_taken_0x160cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CBCu;
        // 0x160cc0: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cbc) {
            ctx->pc = 0x160CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160ca8;
        }
    }
    ctx->pc = 0x160CC4u;
label_160cc4:
    // 0x160cc4: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x160cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160cc8: 0xa7a60000  sh          $a2, 0x0($sp)
    ctx->pc = 0x160cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x160ccc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160CCCu;
    {
        const bool branch_taken_0x160ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CCCu;
        // 0x160cd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ccc) {
            ctx->pc = 0x160CF4u;
            goto label_160cf4;
        }
    }
    ctx->pc = 0x160CD4u;
    // 0x160cd4: 0x0  nop
    ctx->pc = 0x160cd4u;
    // NOP
label_160cd8:
    // 0x160cd8: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x160cdc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x160cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x160ce0: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x160ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160ce4: 0x0  nop
    ctx->pc = 0x160ce4u;
    // NOP
    // 0x160ce8: 0x0  nop
    ctx->pc = 0x160ce8u;
    // NOP
    // 0x160cec: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160CECu;
    {
        const bool branch_taken_0x160cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CECu;
        // 0x160cf0: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cec) {
            ctx->pc = 0x160CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160cd8;
        }
    }
    ctx->pc = 0x160CF4u;
label_160cf4:
    // 0x160cf4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160cf8: 0xa7a60002  sh          $a2, 0x2($sp)
    ctx->pc = 0x160cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x160cfc: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x160CFCu;
    SET_GPR_U32(ctx, 31, 0x160D04u);
    ctx->pc = 0x160D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160CFCu;
    // 0x160d00: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x160CFCu, 0x160D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D04u;
label_160d04:
    // 0x160d04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160d08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x160d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d14: 0xc063b10  jal         func_18EC40
    ctx->pc = 0x160D14u;
    SET_GPR_U32(ctx, 31, 0x160D1Cu);
    ctx->pc = 0x160D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D14u;
    // 0x160d18: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC40u, 0x160D14u, 0x160D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D1Cu;
label_160d1c:
    // 0x160d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x160d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x160d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160d24: 0x3e00008  jr          $ra
    ctx->pc = 0x160D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D24u;
        // 0x160d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D2Cu;
}
