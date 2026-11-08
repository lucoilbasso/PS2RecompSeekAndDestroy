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

// Function: caseD_6
// Address: 0x1054f0 - 0x105530
void caseD_6_0x1054f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1054f0");
#endif

    switch (ctx->pc) {
        case 0x105510u: goto label_105510;
        default: break;
    }

    ctx->pc = 0x1054f0u;

    // 0x1054f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1054f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1054f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1054f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1054fc: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1054FCu;
    {
        const bool branch_taken_0x1054fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x105500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054FCu;
        // 0x105500: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054fc) {
            ctx->pc = 0x105530u;
            return;
        }
    }
    ctx->pc = 0x105504u;
    // 0x105504: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x105504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x105508: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105508u;
    SET_GPR_U32(ctx, 31, 0x105510u);
    ctx->pc = 0x10550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105508u;
    // 0x10550c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105508u, 0x105510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105510u;
label_105510:
    // 0x105510: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x105514: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x105514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x105518: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10551c: 0x34640200  ori         $a0, $v1, 0x200
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x105520: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x105520u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x105524: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x105524u;
    {
        const bool branch_taken_0x105524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105524u;
        // 0x105528: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105524) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x10552Cu;
    // 0x10552c: 0x0  nop
    ctx->pc = 0x10552cu;
    // NOP
    ctx->pc = 0x105530u;
}
