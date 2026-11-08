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

// Function: entry_001192cc
// Address: 0x1192cc - 0x119308
void entry_001192cc_0x1192cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192cc_0x1192cc");
#endif

    switch (ctx->pc) {
        case 0x1192e0u: goto label_1192e0;
        case 0x119304u: goto label_119304;
        default: break;
    }

    ctx->pc = 0x1192ccu;

    // 0x1192cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1192ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1192d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1192d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1192d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1192d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1192d8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1192D8u;
    SET_GPR_U32(ctx, 31, 0x1192E0u);
    ctx->pc = 0x1192DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192D8u;
    // 0x1192dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1192D8u, 0x1192E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192E0u;
label_1192e0:
    // 0x1192e0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1192e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1192e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1192e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1192ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1192ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1192f4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1192F4u;
    {
        const bool branch_taken_0x1192f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1192F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192F4u;
        // 0x1192f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192f4) {
            ctx->pc = 0x119308u;
            return;
        }
    }
    ctx->pc = 0x1192FCu;
    // 0x1192fc: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1192FCu;
    SET_GPR_U32(ctx, 31, 0x119304u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1192FCu, 0x119304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119304u;
label_119304:
    // 0x119304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119308u;
}
