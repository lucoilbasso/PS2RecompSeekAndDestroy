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

// Function: entry_0013b760
// Address: 0x13b760 - 0x13b798
void entry_0013b760_0x13b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b760_0x13b760");
#endif

    ctx->pc = 0x13b760u;

    // 0x13b760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b764: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x13b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x13b768: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13b76c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13B76Cu;
    {
        const bool branch_taken_0x13b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b76c) {
            ctx->pc = 0x13B770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B76Cu;
            // 0x13b770: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B798u;
            return;
        }
    }
    ctx->pc = 0x13B774u;
    // 0x13b774: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x13b774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x13b778: 0x24020846  addiu       $v0, $zero, 0x846
    ctx->pc = 0x13b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x13b77c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B77Cu;
    {
        const bool branch_taken_0x13b77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b77c) {
            ctx->pc = 0x13B780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B77Cu;
            // 0x13b780: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B798u;
            return;
        }
    }
    ctx->pc = 0x13B784u;
    // 0x13b784: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x13b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x13b788: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13b78c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x13B78Cu;
    {
        const bool branch_taken_0x13b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B78Cu;
        // 0x13b790: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b78c) {
            ctx->pc = 0x13B8FCu;
            return;
        }
    }
    ctx->pc = 0x13B794u;
    // 0x13b794: 0x0  nop
    ctx->pc = 0x13b794u;
    // NOP
    ctx->pc = 0x13b798u;
}
