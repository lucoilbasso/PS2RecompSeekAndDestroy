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

// Function: caseD_e
// Address: 0x133680 - 0x1336b8
void caseD_e_0x133680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x133680");
#endif

    switch (ctx->pc) {
        case 0x133688u: goto label_133688;
        case 0x133694u: goto label_133694;
        case 0x1336b4u: goto label_1336b4;
        default: break;
    }

    ctx->pc = 0x133680u;

    // 0x133680: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133680u;
    SET_GPR_U32(ctx, 31, 0x133688u);
    ctx->pc = 0x133684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133680u;
    // 0x133684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133680u, 0x133688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133688u;
label_133688:
    // 0x133688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13368c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13368Cu;
    SET_GPR_U32(ctx, 31, 0x133694u);
    ctx->pc = 0x133690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13368Cu;
    // 0x133690: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13368Cu, 0x133694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133694u;
label_133694:
    // 0x133694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133698: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13369c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13369cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1336a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1336a4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1336A4u;
    {
        const bool branch_taken_0x1336a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1336A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336A4u;
        // 0x1336a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336a4) {
            ctx->pc = 0x1336B8u;
            return;
        }
    }
    ctx->pc = 0x1336ACu;
    // 0x1336ac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1336ACu;
    SET_GPR_U32(ctx, 31, 0x1336B4u);
    ctx->pc = 0x1336B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336ACu;
    // 0x1336b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1336ACu, 0x1336B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336B4u;
label_1336b4:
    // 0x1336b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1336b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1336b8u;
}
