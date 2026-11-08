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

// Function: entry_001142f0
// Address: 0x1142f0 - 0x114318
void entry_001142f0_0x1142f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001142f0_0x1142f0");
#endif

    ctx->pc = 0x1142f0u;

    // 0x1142f0: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1142F0u;
    {
        const bool branch_taken_0x1142f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1142F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F0u;
        // 0x1142f4: 0x2a420016  slti        $v0, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f0) {
            ctx->pc = 0x114330u;
            return;
        }
    }
    ctx->pc = 0x1142F8u;
    // 0x1142f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1142F8u;
    {
        const bool branch_taken_0x1142f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F8u;
        // 0x1142fc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f8) {
            ctx->pc = 0x114318u;
            return;
        }
    }
    ctx->pc = 0x114300u;
    // 0x114300: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x114300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114304: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114304u;
    {
        const bool branch_taken_0x114304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x114308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114304u;
        // 0x114308: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114304) {
            ctx->pc = 0x114328u;
            return;
        }
    }
    ctx->pc = 0x11430Cu;
    // 0x11430c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11430Cu;
    {
        const bool branch_taken_0x11430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11430Cu;
        // 0x114310: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11430c) {
            ctx->pc = 0x114358u;
            return;
        }
    }
    ctx->pc = 0x114314u;
    // 0x114314: 0x0  nop
    ctx->pc = 0x114314u;
    // NOP
    ctx->pc = 0x114318u;
}
