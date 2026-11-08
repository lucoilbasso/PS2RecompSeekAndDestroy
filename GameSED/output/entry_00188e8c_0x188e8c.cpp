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

// Function: entry_00188e8c
// Address: 0x188e8c - 0x188ed0
void entry_00188e8c_0x188e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e8c_0x188e8c");
#endif

    ctx->pc = 0x188e8cu;

    // 0x188e8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x188e90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x188e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188e98: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x188E98u;
    {
        const bool branch_taken_0x188e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E98u;
        // 0x188e9c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e98) {
            ctx->pc = 0x188FB0u;
            return;
        }
    }
    ctx->pc = 0x188EA0u;
    // 0x188ea0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x188ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ea8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x188EA8u;
    {
        const bool branch_taken_0x188ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EA8u;
        // 0x188eac: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ea8) {
            ctx->pc = 0x188F00u;
            return;
        }
    }
    ctx->pc = 0x188EB0u;
    // 0x188eb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188EB0u;
    {
        const bool branch_taken_0x188eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EB0u;
        // 0x188eb4: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188eb0) {
            ctx->pc = 0x188ED0u;
            return;
        }
    }
    ctx->pc = 0x188EB8u;
    // 0x188eb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x188eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188ebc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188EBCu;
    {
        const bool branch_taken_0x188ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EBCu;
        // 0x188ec0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ebc) {
            ctx->pc = 0x188F60u;
            return;
        }
    }
    ctx->pc = 0x188EC4u;
    // 0x188ec4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x188EC4u;
    {
        const bool branch_taken_0x188ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EC4u;
        // 0x188ec8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ec4) {
            ctx->pc = 0x188FA0u;
            return;
        }
    }
    ctx->pc = 0x188ECCu;
    // 0x188ecc: 0x0  nop
    ctx->pc = 0x188eccu;
    // NOP
    ctx->pc = 0x188ed0u;
}
