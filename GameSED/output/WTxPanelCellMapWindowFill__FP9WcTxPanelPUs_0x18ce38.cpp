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

// Function: WTxPanelCellMapWindowFill__FP9WcTxPanelPUs
// Address: 0x18ce38 - 0x18cee8
void WTxPanelCellMapWindowFill__FP9WcTxPanelPUs_0x18ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCellMapWindowFill__FP9WcTxPanelPUs_0x18ce38");
#endif

    switch (ctx->pc) {
        case 0x18ce58u: goto label_18ce58;
        case 0x18ce90u: goto label_18ce90;
        default: break;
    }

    ctx->pc = 0x18ce38u;

    // 0x18ce38: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x18ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x18ce3c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x18ce3cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce40: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x18CE40u;
    {
        const bool branch_taken_0x18ce40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE40u;
        // 0x18ce44: 0x8c860214  lw          $a2, 0x214($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce40) {
            ctx->pc = 0x18CEE0u;
            goto label_18cee0;
        }
    }
    ctx->pc = 0x18CE48u;
    // 0x18ce48: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x18ce48u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce4c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x18ce4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ce50: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x18ce50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18ce54: 0x0  nop
    ctx->pc = 0x18ce54u;
    // NOP
label_18ce58:
    // 0x18ce58: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CE58u;
    {
        const bool branch_taken_0x18ce58 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE58u;
        // 0x18ce5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce58) {
            ctx->pc = 0x18CE74u;
            goto label_18ce74;
        }
    }
    ctx->pc = 0x18CE60u;
    // 0x18ce60: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x18ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x18ce64: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x18ce64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ce6c: 0x1821026  xor         $v0, $t4, $v0
    ctx->pc = 0x18ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 2));
    // 0x18ce70: 0x1e2400b  movn        $t0, $t7, $v0
    ctx->pc = 0x18ce70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
label_18ce74:
    // 0x18ce74: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x18ce78: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18CE78u;
    {
        const bool branch_taken_0x18ce78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE78u;
        // 0x18ce7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce78) {
            ctx->pc = 0x18CED0u;
            goto label_18ced0;
        }
    }
    ctx->pc = 0x18CE80u;
    // 0x18ce80: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x18ce80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce84: 0x250a0002  addiu       $t2, $t0, 0x2
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x18ce88: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x18ce88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18ce8c: 0x0  nop
    ctx->pc = 0x18ce8cu;
    // NOP
label_18ce90:
    // 0x18ce90: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CE90u;
    {
        const bool branch_taken_0x18ce90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE90u;
        // 0x18ce94: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce90) {
            ctx->pc = 0x18CEACu;
            goto label_18ceac;
        }
    }
    ctx->pc = 0x18CE98u;
    // 0x18ce98: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x18ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x18ce9c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x18ce9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cea4: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x18cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x18cea8: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x18cea8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_18ceac:
    // 0x18ceac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CEACu;
    {
        const bool branch_taken_0x18ceac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEACu;
        // 0x18ceb0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ceac) {
            ctx->pc = 0x18CEBCu;
            goto label_18cebc;
        }
    }
    ctx->pc = 0x18CEB4u;
    // 0x18ceb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18ceb8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x18ceb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18cebc:
    // 0x18cebc: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x18cebcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18cec0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18cec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18cec4: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x18cec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x18cec8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18CEC8u;
    {
        const bool branch_taken_0x18cec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEC8u;
        // 0x18cecc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cec8) {
            ctx->pc = 0x18CE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ce90;
        }
    }
    ctx->pc = 0x18CED0u;
label_18ced0:
    // 0x18ced0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x18ced4: 0x18d102a  slt         $v0, $t4, $t5
    ctx->pc = 0x18ced4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x18ced8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x18CED8u;
    {
        const bool branch_taken_0x18ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ced8) {
            ctx->pc = 0x18CE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ce58;
        }
    }
    ctx->pc = 0x18CEE0u;
label_18cee0:
    // 0x18cee0: 0x3e00008  jr          $ra
    ctx->pc = 0x18CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CEE8u;
}
