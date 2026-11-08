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

// Function: entry_001697ec
// Address: 0x1697ec - 0x169818
void entry_001697ec_0x1697ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697ec_0x1697ec");
#endif

    ctx->pc = 0x1697ecu;

    // 0x1697ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1697ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1697f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1697f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1697f4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1697F4u;
    {
        const bool branch_taken_0x1697f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1697F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697F4u;
        // 0x1697f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697f4) {
            ctx->pc = 0x169824u;
            return;
        }
    }
    ctx->pc = 0x1697FCu;
    // 0x1697fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169800: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x169800u;
    {
        const bool branch_taken_0x169800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169800) {
            ctx->pc = 0x169804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169800u;
            // 0x169804: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169818u;
            return;
        }
    }
    ctx->pc = 0x169808u;
    // 0x169808: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x169808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16980c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16980Cu;
    {
        const bool branch_taken_0x16980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16980c) {
            ctx->pc = 0x169820u;
            return;
        }
    }
    ctx->pc = 0x169814u;
    // 0x169814: 0x0  nop
    ctx->pc = 0x169814u;
    // NOP
    ctx->pc = 0x169818u;
}
