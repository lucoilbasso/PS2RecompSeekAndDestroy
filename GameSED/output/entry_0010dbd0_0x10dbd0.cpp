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

// Function: entry_0010dbd0
// Address: 0x10dbd0 - 0x10dbf8
void entry_0010dbd0_0x10dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dbd0_0x10dbd0");
#endif

    switch (ctx->pc) {
        case 0x10dbd8u: goto label_10dbd8;
        default: break;
    }

    ctx->pc = 0x10dbd0u;

    // 0x10dbd0: 0xc04106a  jal         func_1041A8
    ctx->pc = 0x10DBD0u;
    SET_GPR_U32(ctx, 31, 0x10DBD8u);
    ctx->pc = 0x10DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBD0u;
    // 0x10dbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041A8u, 0x10DBD0u, 0x10DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBD8u;
label_10dbd8:
    // 0x10dbd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10dbdc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10dbdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbe0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10dbe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dbe8: 0x14640027  bne         $v1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10DBE8u;
    {
        const bool branch_taken_0x10dbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE8u;
        // 0x10dbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe8) {
            ctx->pc = 0x10DC88u;
            return;
        }
    }
    ctx->pc = 0x10DBF0u;
    // 0x10dbf0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10DBF0u;
    {
        const bool branch_taken_0x10dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF0u;
        // 0x10dbf4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf0) {
            ctx->pc = 0x10DC9Cu;
            return;
        }
    }
    ctx->pc = 0x10DBF8u;
}
