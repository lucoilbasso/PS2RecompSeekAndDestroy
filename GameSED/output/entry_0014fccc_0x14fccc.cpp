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

// Function: entry_0014fccc
// Address: 0x14fccc - 0x14fcf8
void entry_0014fccc_0x14fccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fccc_0x14fccc");
#endif

    switch (ctx->pc) {
        case 0x14fcd4u: goto label_14fcd4;
        default: break;
    }

    ctx->pc = 0x14fcccu;

    // 0x14fccc: 0xc05929a  jal         func_164A68
    ctx->pc = 0x14FCCCu;
    SET_GPR_U32(ctx, 31, 0x14FCD4u);
    ctx->pc = 0x14FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCCCu;
    // 0x14fcd0: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A68u, 0x14FCCCu, 0x14FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCD4u;
label_14fcd4:
    // 0x14fcd4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x14fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14fcd8: 0x2442dfff  addiu       $v0, $v0, -0x2001
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959103));
    // 0x14fcdc: 0x2c423fff  sltiu       $v0, $v0, 0x3FFF
    ctx->pc = 0x14fcdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16383) ? 1 : 0);
    // 0x14fce0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FCE0u;
    {
        const bool branch_taken_0x14fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fce0) {
            ctx->pc = 0x14FCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FCE0u;
            // 0x14fce4: 0x8e260310  lw          $a2, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FCF8u;
            return;
        }
    }
    ctx->pc = 0x14FCE8u;
    // 0x14fce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcec: 0x720210c8  pmaxw       $v0, $s0, $v0
    ctx->pc = 0x14fcecu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x14fcf0: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x14fcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14fcf4: 0x8e260310  lw          $a2, 0x310($s1)
    ctx->pc = 0x14fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->pc = 0x14fcf8u;
}
