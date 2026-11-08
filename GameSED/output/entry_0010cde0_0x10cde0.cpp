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

// Function: entry_0010cde0
// Address: 0x10cde0 - 0x10ce1c
void entry_0010cde0_0x10cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cde0_0x10cde0");
#endif

    switch (ctx->pc) {
        case 0x10cdfcu: goto label_10cdfc;
        default: break;
    }

    ctx->pc = 0x10cde0u;

    // 0x10cde0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cde4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cde8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10cdec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdf0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cdf4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CDF4u;
    SET_GPR_U32(ctx, 31, 0x10CDFCu);
    ctx->pc = 0x10CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDF4u;
    // 0x10cdf8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CDF4u, 0x10CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDFCu;
label_10cdfc:
    // 0x10cdfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce00: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10ce04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CE04u;
    {
        const bool branch_taken_0x10ce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE04u;
        // 0x10ce08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce04) {
            ctx->pc = 0x10CE1Cu;
            return;
        }
    }
    ctx->pc = 0x10CE0Cu;
    // 0x10ce0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ce10: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10ce14: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CE14u;
    {
        const bool branch_taken_0x10ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10ce14) {
            ctx->pc = 0x10CE20u;
            return;
        }
    }
    ctx->pc = 0x10CE1Cu;
}
