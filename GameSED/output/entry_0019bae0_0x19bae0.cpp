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

// Function: entry_0019bae0
// Address: 0x19bae0 - 0x19bb08
void entry_0019bae0_0x19bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bae0_0x19bae0");
#endif

    ctx->pc = 0x19bae0u;

    // 0x19bae0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x19bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x19bae4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19bae8: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BAE8u;
    {
        const bool branch_taken_0x19bae8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAE8u;
        // 0x19baec: 0x21e03  sra         $v1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bae8) {
            ctx->pc = 0x19BB30u;
            return;
        }
    }
    ctx->pc = 0x19BAF0u;
    // 0x19baf0: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x19baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x19baf4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19baf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19baf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BAF8u;
    {
        const bool branch_taken_0x19baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAF8u;
        // 0x19bafc: 0x691026  xor         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19baf8) {
            ctx->pc = 0x19BB08u;
            return;
        }
    }
    ctx->pc = 0x19BB00u;
    // 0x19bb00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19BB00u;
    {
        const bool branch_taken_0x19bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB00u;
        // 0x19bb04: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb00) {
            ctx->pc = 0x19BB0Cu;
            return;
        }
    }
    ctx->pc = 0x19BB08u;
}
