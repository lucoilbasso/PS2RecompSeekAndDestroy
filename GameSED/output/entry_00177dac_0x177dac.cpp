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

// Function: entry_00177dac
// Address: 0x177dac - 0x177dc0
void entry_00177dac_0x177dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177dac_0x177dac");
#endif

    ctx->pc = 0x177dacu;

    // 0x177dac: 0x21982  srl         $v1, $v0, 6
    ctx->pc = 0x177dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x177db0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177DB0u;
    {
        const bool branch_taken_0x177db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DB0u;
        // 0x177db4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177db0) {
            ctx->pc = 0x177DC8u;
            return;
        }
    }
    ctx->pc = 0x177DB8u;
    // 0x177db8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177DB8u;
    {
        const bool branch_taken_0x177db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177db8) {
            ctx->pc = 0x177DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177DB8u;
            // 0x177dbc: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177DD8u;
            return;
        }
    }
    ctx->pc = 0x177DC0u;
}
