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

// Function: entry_00130dd0
// Address: 0x130dd0 - 0x130df8
void entry_00130dd0_0x130dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130dd0_0x130dd0");
#endif

    ctx->pc = 0x130dd0u;

    // 0x130dd0: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x130dd4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x130DD4u;
    {
        const bool branch_taken_0x130dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DD4u;
        // 0x130dd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dd4) {
            ctx->pc = 0x130E40u;
            return;
        }
    }
    ctx->pc = 0x130DDCu;
    // 0x130ddc: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x130ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x130de0: 0x54500060  bnel        $v0, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x130DE0u;
    {
        const bool branch_taken_0x130de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130de0) {
            ctx->pc = 0x130DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130DE0u;
            // 0x130de4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130DE8u;
    // 0x130de8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x130de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x130dec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x130decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130df0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130DF0u;
    {
        const bool branch_taken_0x130df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x130DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DF0u;
        // 0x130df4: 0x24a40070  addiu       $a0, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130df0) {
            ctx->pc = 0x130E08u;
            return;
        }
    }
    ctx->pc = 0x130DF8u;
}
