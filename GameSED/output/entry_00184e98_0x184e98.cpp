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

// Function: entry_00184e98
// Address: 0x184e98 - 0x184eb0
void entry_00184e98_0x184e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184e98_0x184e98");
#endif

    switch (ctx->pc) {
        case 0x184ea4u: goto label_184ea4;
        default: break;
    }

    ctx->pc = 0x184e98u;

    // 0x184e98: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x184e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184e9c: 0xc067abe  jal         func_19EAF8
    ctx->pc = 0x184E9Cu;
    SET_GPR_U32(ctx, 31, 0x184EA4u);
    ctx->pc = 0x184EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E9Cu;
    // 0x184ea0: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EAF8u, 0x184E9Cu, 0x184EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EA4u;
label_184ea4:
    // 0x184ea4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x184EA4u;
    {
        const bool branch_taken_0x184ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EA4u;
        // 0x184ea8: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ea4) {
            ctx->pc = 0x184EECu;
            return;
        }
    }
    ctx->pc = 0x184EACu;
    // 0x184eac: 0x0  nop
    ctx->pc = 0x184eacu;
    // NOP
    ctx->pc = 0x184eb0u;
}
