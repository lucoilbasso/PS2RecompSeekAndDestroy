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

// Function: entry_00124db0
// Address: 0x124db0 - 0x124df4
void entry_00124db0_0x124db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124db0_0x124db0");
#endif

    ctx->pc = 0x124db0u;

    // 0x124db0: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x124DB0u;
    {
        const bool branch_taken_0x124db0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x124DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DB0u;
        // 0x124db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124db0) {
            ctx->pc = 0x124DF4u;
            return;
        }
    }
    ctx->pc = 0x124DB8u;
    // 0x124db8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124dbc: 0x3404e800  ori         $a0, $zero, 0xE800
    ctx->pc = 0x124dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x124dc0: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x124dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x124dc4: 0x2431025  or          $v0, $s2, $v1
    ctx->pc = 0x124dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x124dc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124dcc: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x124dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x124dd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124dd4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x124dd8: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x124dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x124ddc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124de0: 0x24044242  addiu       $a0, $zero, 0x4242
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16962));
    // 0x124de4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124de8: 0xfee40008  sd          $a0, 0x8($s7)
    ctx->pc = 0x124de8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 4));
    // 0x124dec: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x124decu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x124df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124df4u;
}
