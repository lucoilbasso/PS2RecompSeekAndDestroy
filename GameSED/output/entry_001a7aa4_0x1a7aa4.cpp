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

// Function: entry_001a7aa4
// Address: 0x1a7aa4 - 0x1a7ae0
void entry_001a7aa4_0x1a7aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7aa4_0x1a7aa4");
#endif

    ctx->pc = 0x1a7aa4u;

    // 0x1a7aa4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7aa8: 0x660001d  bltz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7AA8u;
    {
        const bool branch_taken_0x1a7aa8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1A7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AA8u;
        // 0x1a7aac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7aa8) {
            ctx->pc = 0x1A7B20u;
            return;
        }
    }
    ctx->pc = 0x1A7AB0u;
    // 0x1a7ab0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a7ab4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a7ab8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7abc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7ac0: 0x1045002d  beq         $v0, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7AC0u;
    {
        const bool branch_taken_0x1a7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AC0u;
        // 0x1a7ac4: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ac0) {
            ctx->pc = 0x1A7B78u;
            return;
        }
    }
    ctx->pc = 0x1A7AC8u;
    // 0x1a7ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7acc: 0x1045002a  beq         $v0, $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A7ACCu;
    {
        const bool branch_taken_0x1a7acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ACCu;
        // 0x1a7ad0: 0x2651001c  addiu       $s1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7acc) {
            ctx->pc = 0x1A7B78u;
            return;
        }
    }
    ctx->pc = 0x1A7AD4u;
    // 0x1a7ad4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7ad8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7adc: 0x0  nop
    ctx->pc = 0x1a7adcu;
    // NOP
    ctx->pc = 0x1a7ae0u;
}
