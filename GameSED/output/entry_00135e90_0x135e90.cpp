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

// Function: entry_00135e90
// Address: 0x135e90 - 0x135ec0
void entry_00135e90_0x135e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135e90_0x135e90");
#endif

    ctx->pc = 0x135e90u;

    // 0x135e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135e94: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x135e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x135e98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x135e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x135e9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x135e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135ea0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x135ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x135ea4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135EA4u;
    {
        const bool branch_taken_0x135ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x135EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA4u;
        // 0x135ea8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ea4) {
            ctx->pc = 0x135EC0u;
            return;
        }
    }
    ctx->pc = 0x135EACu;
    // 0x135eac: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x135eb0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x135eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x135eb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x135EB4u;
    {
        const bool branch_taken_0x135eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EB4u;
        // 0x135eb8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135eb4) {
            ctx->pc = 0x135F00u;
            return;
        }
    }
    ctx->pc = 0x135EBCu;
    // 0x135ebc: 0x0  nop
    ctx->pc = 0x135ebcu;
    // NOP
    ctx->pc = 0x135ec0u;
}
