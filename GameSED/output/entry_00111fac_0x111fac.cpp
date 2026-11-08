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

// Function: entry_00111fac
// Address: 0x111fac - 0x111fd0
void entry_00111fac_0x111fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111fac_0x111fac");
#endif

    switch (ctx->pc) {
        case 0x111fb4u: goto label_111fb4;
        default: break;
    }

    ctx->pc = 0x111facu;

    // 0x111fac: 0xc061422  jal         func_185088
    ctx->pc = 0x111FACu;
    SET_GPR_U32(ctx, 31, 0x111FB4u);
    ctx->pc = 0x111FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FACu;
    // 0x111fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x111FACu, 0x111FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FB4u;
label_111fb4:
    // 0x111fb4: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x111fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x111fb8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x111fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x111fbc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111fc0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x111fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111fc4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x111FC4u;
    {
        const bool branch_taken_0x111fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FC4u;
        // 0x111fc8: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fc4) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111FCCu;
    // 0x111fcc: 0x0  nop
    ctx->pc = 0x111fccu;
    // NOP
    ctx->pc = 0x111fd0u;
}
