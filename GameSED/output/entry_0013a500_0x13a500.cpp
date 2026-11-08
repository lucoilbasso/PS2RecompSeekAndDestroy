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

// Function: entry_0013a500
// Address: 0x13a500 - 0x13a530
void entry_0013a500_0x13a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a500_0x13a500");
#endif

    ctx->pc = 0x13a500u;

    // 0x13a500: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13a504: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a510: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13a514: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13a518: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13a51c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A51Cu;
    {
        const bool branch_taken_0x13a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A51Cu;
        // 0x13a520: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a51c) {
            ctx->pc = 0x13A530u;
            return;
        }
    }
    ctx->pc = 0x13A524u;
    // 0x13a524: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x13a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13a528: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13A528u;
    SET_GPR_U32(ctx, 31, 0x13A530u);
    ctx->pc = 0x13A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A528u;
    // 0x13a52c: 0x24a56808  addiu       $a1, $a1, 0x6808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13A528u, 0x13A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A530u;
}
