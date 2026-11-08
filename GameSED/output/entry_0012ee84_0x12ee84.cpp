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

// Function: entry_0012ee84
// Address: 0x12ee84 - 0x12eeb0
void entry_0012ee84_0x12ee84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ee84_0x12ee84");
#endif

    ctx->pc = 0x12ee84u;

    // 0x12ee84: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x12EE84u;
    {
        const bool branch_taken_0x12ee84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE84u;
        // 0x12ee88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee84) {
            ctx->pc = 0x12EFA4u;
            return;
        }
    }
    ctx->pc = 0x12EE8Cu;
    // 0x12ee8c: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x12ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x12ee90: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12EE90u;
    {
        const bool branch_taken_0x12ee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ee90) {
            ctx->pc = 0x12EE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE90u;
            // 0x12ee94: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EECCu;
            return;
        }
    }
    ctx->pc = 0x12EE98u;
    // 0x12ee98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EE98u;
    {
        const bool branch_taken_0x12ee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE98u;
        // 0x12ee9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee98) {
            ctx->pc = 0x12EEB0u;
            return;
        }
    }
    ctx->pc = 0x12EEA0u;
    // 0x12eea0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EEA0u;
    {
        const bool branch_taken_0x12eea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12eea0) {
            ctx->pc = 0x12EEC0u;
            return;
        }
    }
    ctx->pc = 0x12EEA8u;
    // 0x12eea8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12EEA8u;
    {
        const bool branch_taken_0x12eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEA8u;
        // 0x12eeac: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eea8) {
            ctx->pc = 0x12EECCu;
            return;
        }
    }
    ctx->pc = 0x12EEB0u;
}
