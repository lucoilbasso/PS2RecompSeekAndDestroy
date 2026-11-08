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

// Function: caseD_f
// Address: 0x1336d0 - 0x133708
void caseD_f_0x1336d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1336d0");
#endif

    switch (ctx->pc) {
        case 0x1336d8u: goto label_1336d8;
        case 0x1336e4u: goto label_1336e4;
        case 0x133704u: goto label_133704;
        default: break;
    }

    ctx->pc = 0x1336d0u;

    // 0x1336d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1336D0u;
    SET_GPR_U32(ctx, 31, 0x1336D8u);
    ctx->pc = 0x1336D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336D0u;
    // 0x1336d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336D0u, 0x1336D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336D8u;
label_1336d8:
    // 0x1336d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1336d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1336DCu;
    SET_GPR_U32(ctx, 31, 0x1336E4u);
    ctx->pc = 0x1336E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336DCu;
    // 0x1336e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336DCu, 0x1336E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336E4u;
label_1336e4:
    // 0x1336e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1336e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336e8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1336ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1336f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1336f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1336f4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1336F4u;
    {
        const bool branch_taken_0x1336f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1336F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336F4u;
        // 0x1336f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336f4) {
            ctx->pc = 0x133708u;
            return;
        }
    }
    ctx->pc = 0x1336FCu;
    // 0x1336fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1336FCu;
    SET_GPR_U32(ctx, 31, 0x133704u);
    ctx->pc = 0x133700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336FCu;
    // 0x133700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336FCu, 0x133704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133704u;
label_133704:
    // 0x133704: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x133704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133708u;
}
