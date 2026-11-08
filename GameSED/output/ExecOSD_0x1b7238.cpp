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

// Function: ExecOSD
// Address: 0x1b7238 - 0x1b7284
void ExecOSD_0x1b7238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecOSD_0x1b7238");
#endif

    switch (ctx->pc) {
        case 0x1b725cu: goto label_1b725c;
        case 0x1b7264u: goto label_1b7264;
        default: break;
    }

    ctx->pc = 0x1b7238u;

    // 0x1b7238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b723c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b723cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b724c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b724cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b7250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7254: 0xc06dc0e  jal         func_1B7038
    ctx->pc = 0x1B7254u;
    SET_GPR_U32(ctx, 31, 0x1B725Cu);
    ctx->pc = 0x1B7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7254u;
    // 0x1b7258: 0x2484acd0  addiu       $a0, $a0, -0x5330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7038u, 0x1B7254u, 0x1B725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B725Cu;
label_1b725c:
    // 0x1b725c: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1B725Cu;
    SET_GPR_U32(ctx, 31, 0x1B7264u);
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1B725Cu, 0x1B7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7264u;
label_1b7264:
    // 0x1b7264: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b7268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b726c: 0x8c45bd38  lw          $a1, -0x42C8($v0)
    ctx->pc = 0x1b726cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x24BD38u));
    // 0x1b7270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7278: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b7278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b727c: 0x806be20  j           func_1AF880
    ctx->pc = 0x1B727Cu;
    ctx->pc = 0x1B7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B727Cu;
    // 0x1b7280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF880u;
    ps2__ExecOSD_0x1af880(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7284u;
}
