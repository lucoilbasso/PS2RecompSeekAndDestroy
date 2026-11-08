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

// Function: entry_0010bad0
// Address: 0x10bad0 - 0x10baf4
void entry_0010bad0_0x10bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bad0_0x10bad0");
#endif

    ctx->pc = 0x10bad0u;

    // 0x10bad0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10bad4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10bad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10badc: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BADCu;
    {
        const bool branch_taken_0x10badc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10badc) {
            ctx->pc = 0x10BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BADCu;
            // 0x10bae0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BB00u;
            return;
        }
    }
    ctx->pc = 0x10BAE4u;
    // 0x10bae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10bae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baec: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x10BAECu;
    SET_GPR_U32(ctx, 31, 0x10BAF4u);
    ctx->pc = 0x10BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAECu;
    // 0x10baf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x10BAECu, 0x10BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAF4u;
}
