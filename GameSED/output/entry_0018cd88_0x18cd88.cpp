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

// Function: entry_0018cd88
// Address: 0x18cd88 - 0x18cdb0
void entry_0018cd88_0x18cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd88_0x18cd88");
#endif

    ctx->pc = 0x18cd88u;

    // 0x18cd88: 0x8eca000c  lw          $t2, 0xC($s6)
    ctx->pc = 0x18cd88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x18cd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd90: 0x8e490048  lw          $t1, 0x48($s2)
    ctx->pc = 0x18cd90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x18cd94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cd94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd98: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x18cd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x18cd9c: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18CD9Cu;
    {
        const bool branch_taken_0x18cd9c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD9Cu;
        // 0x18cda0: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd9c) {
            ctx->pc = 0x18CDF4u;
            return;
        }
    }
    ctx->pc = 0x18CDA4u;
    // 0x18cda4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18cda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cda8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdac: 0x0  nop
    ctx->pc = 0x18cdacu;
    // NOP
    ctx->pc = 0x18cdb0u;
}
