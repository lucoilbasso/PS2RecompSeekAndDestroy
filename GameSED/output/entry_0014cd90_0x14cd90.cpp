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

// Function: entry_0014cd90
// Address: 0x14cd90 - 0x14cdb0
void entry_0014cd90_0x14cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd90_0x14cd90");
#endif

    ctx->pc = 0x14cd90u;

    // 0x14cd90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14cd94: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
    // 0x14cd98: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x14cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14cd9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cda4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x14cda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x14cda8: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CDA8u;
    {
        const bool branch_taken_0x14cda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x14CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDA8u;
        // 0x14cdac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cda8) {
            ctx->pc = 0x14CDC0u;
            return;
        }
    }
    ctx->pc = 0x14CDB0u;
}
