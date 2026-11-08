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

// Function: entry_00150108
// Address: 0x150108 - 0x150124
void entry_00150108_0x150108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150108_0x150108");
#endif

    ctx->pc = 0x150108u;

    // 0x150108: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x150108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x15010c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15010Cu;
    {
        const bool branch_taken_0x15010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15010Cu;
        // 0x150110: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15010c) {
            ctx->pc = 0x150124u;
            return;
        }
    }
    ctx->pc = 0x150114u;
    // 0x150114: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x150114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x150118: 0x90620c00  lbu         $v0, 0xC00($v1)
    ctx->pc = 0x150118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x15011c: 0x38420025  xori        $v0, $v0, 0x25
    ctx->pc = 0x15011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)37);
    // 0x150120: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x150120u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->pc = 0x150124u;
}
