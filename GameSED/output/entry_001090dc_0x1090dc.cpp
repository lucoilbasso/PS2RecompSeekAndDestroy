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

// Function: entry_001090dc
// Address: 0x1090dc - 0x109100
void entry_001090dc_0x1090dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001090dc_0x1090dc");
#endif

    ctx->pc = 0x1090dcu;

    // 0x1090dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1090e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1090e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1090e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090e8: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x1090e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x1090ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1090ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090f0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1090f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x1090f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1090f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090f8: 0xc0695da  jal         func_1A5768
    ctx->pc = 0x1090F8u;
    SET_GPR_U32(ctx, 31, 0x109100u);
    ctx->pc = 0x1090FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090F8u;
    // 0x1090fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5768u, 0x1090F8u, 0x109100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109100u;
}
