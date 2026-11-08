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

// Function: entry_001b97ec
// Address: 0x1b97ec - 0x1b9838
void entry_001b97ec_0x1b97ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b97ec_0x1b97ec");
#endif

    ctx->pc = 0x1b97ecu;

    // 0x1b97ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b97ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b97f0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B97F0u;
    {
        const bool branch_taken_0x1b97f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97F0u;
        // 0x1b97f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97f0) {
            ctx->pc = 0x1B9838u;
            return;
        }
    }
    ctx->pc = 0x1B97F8u;
    // 0x1b97f8: 0x90c20066  lbu         $v0, 0x66($a2)
    ctx->pc = 0x1b97f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
    // 0x1b97fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b97fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9800: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9800u;
    {
        const bool branch_taken_0x1b9800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9800u;
        // 0x1b9804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9800) {
            ctx->pc = 0x1B9838u;
            return;
        }
    }
    ctx->pc = 0x1B9808u;
    // 0x1b9808: 0x90c5007a  lbu         $a1, 0x7A($a2)
    ctx->pc = 0x1b9808u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x1b980c: 0x90c4007c  lbu         $a0, 0x7C($a2)
    ctx->pc = 0x1b980cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1b9810: 0x90c3007b  lbu         $v1, 0x7B($a2)
    ctx->pc = 0x1b9810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 123)));
    // 0x1b9814: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x1b9814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x1b9818: 0x90c20079  lbu         $v0, 0x79($a2)
    ctx->pc = 0x1b9818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 121)));
    // 0x1b981c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1b981cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1b9820: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b9820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b9824: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1b9824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1b9828: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1b9828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1b982c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1b982cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1b9830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b9830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b9834: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b9834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1b9838u;
}
