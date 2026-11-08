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

// Function: LoadExecPS2
// Address: 0x1b71c8 - 0x1b7210
void LoadExecPS2_0x1b71c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadExecPS2_0x1b71c8");
#endif

    switch (ctx->pc) {
        case 0x1b71e0u: goto label_1b71e0;
        case 0x1b71e8u: goto label_1b71e8;
        default: break;
    }

    ctx->pc = 0x1b71c8u;

    // 0x1b71c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b71c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b71cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b71ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b71d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b71d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b71d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b71d8: 0xc06dc0e  jal         func_1B7038
    ctx->pc = 0x1B71D8u;
    SET_GPR_U32(ctx, 31, 0x1B71E0u);
    ctx->pc = 0x1B71DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71D8u;
    // 0x1b71dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7038u, 0x1B71D8u, 0x1B71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71E0u;
label_1b71e0:
    // 0x1b71e0: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1B71E0u;
    SET_GPR_U32(ctx, 31, 0x1B71E8u);
    ctx->pc = 0x1B71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71E0u;
    // 0x1b71e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1B71E0u, 0x1B71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71E8u;
label_1b71e8:
    // 0x1b71e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b71ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b71ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71f0: 0x8c46bd38  lw          $a2, -0x42C8($v0)
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x24BD38u));
    // 0x1b71f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b71f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b71f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b71fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b71fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7200: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1b7200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1b7204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7208: 0x806bc28  j           func_1AF0A0
    ctx->pc = 0x1B7208u;
    ctx->pc = 0x1B720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7208u;
    // 0x1b720c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF0A0u;
    ps2__LoadExecPS2_0x1af0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7210u;
}
