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

// Function: entry_0017df58
// Address: 0x17df58 - 0x17dfa8
void entry_0017df58_0x17df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017df58_0x17df58");
#endif

    switch (ctx->pc) {
        case 0x17df70u: goto label_17df70;
        default: break;
    }

    ctx->pc = 0x17df58u;

    // 0x17df58: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17df5c: 0x27c47c78  addiu       $a0, $fp, 0x7C78
    ctx->pc = 0x17df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 31864));
    // 0x17df60: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17df64: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x17df68: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17DF68u;
    SET_GPR_U32(ctx, 31, 0x17DF70u);
    ctx->pc = 0x17DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF68u;
    // 0x17df6c: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17DF68u, 0x17DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF70u;
label_17df70:
    // 0x17df70: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17df74: 0x14570014  bne         $v0, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x17DF74u;
    {
        const bool branch_taken_0x17df74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x17DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF74u;
        // 0x17df78: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df74) {
            ctx->pc = 0x17DFC8u;
            return;
        }
    }
    ctx->pc = 0x17DF7Cu;
    // 0x17df7c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x17df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17df80: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DF80u;
    {
        const bool branch_taken_0x17df80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF80u;
        // 0x17df84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df80) {
            ctx->pc = 0x17DFA8u;
            return;
        }
    }
    ctx->pc = 0x17DF88u;
    // 0x17df88: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x17df88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17df8c: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x17df8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x17df90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17df90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df94: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x17df94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17df98: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x17df98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17df9c: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x17df9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dfa0: 0xc05dc0a  jal         func_177028
    ctx->pc = 0x17DFA0u;
    SET_GPR_U32(ctx, 31, 0x17DFA8u);
    ctx->pc = 0x17DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFA0u;
    // 0x17dfa4: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177028u, 0x17DFA0u, 0x17DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFA8u;
}
