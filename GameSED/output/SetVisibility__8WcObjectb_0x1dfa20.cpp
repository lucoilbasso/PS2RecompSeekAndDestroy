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

// Function: SetVisibility__8WcObjectb
// Address: 0x1dfa20 - 0x1dfa40
void SetVisibility__8WcObjectb_0x1dfa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVisibility__8WcObjectb_0x1dfa20");
#endif

    ctx->pc = 0x1dfa20u;

    // 0x1dfa20: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1dfa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1dfa24: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x1dfa24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1dfa28: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1dfa28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfa2c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1dfa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dfa30: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1dfa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1dfa34: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1dfa34u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1dfa38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA38u;
        // 0x1dfa3c: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA40u;
}
