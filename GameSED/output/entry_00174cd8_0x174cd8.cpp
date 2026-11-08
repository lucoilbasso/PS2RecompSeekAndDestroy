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

// Function: entry_00174cd8
// Address: 0x174cd8 - 0x174d04
void entry_00174cd8_0x174cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174cd8_0x174cd8");
#endif

    ctx->pc = 0x174cd8u;

    // 0x174cd8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x174cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x174cdc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x174cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x174ce0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x174ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x174ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174ce8: 0x9042c2a9  lbu         $v0, -0x3D57($v0)
    ctx->pc = 0x174ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951593)));
    // 0x174cec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x174cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cf0: 0x2465ffe0  addiu       $a1, $v1, -0x20
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x174cf4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x174cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x174cf8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x174cf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x174cfc: 0x1500ffee  bnez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x174CFCu;
    {
        const bool branch_taken_0x174cfc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CFCu;
        // 0x174d00: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cfc) {
            ctx->pc = 0x174CB8u;
            return;
        }
    }
    ctx->pc = 0x174D04u;
}
