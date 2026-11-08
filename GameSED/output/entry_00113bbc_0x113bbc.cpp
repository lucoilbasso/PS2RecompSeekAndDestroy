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

// Function: entry_00113bbc
// Address: 0x113bbc - 0x113be4
void entry_00113bbc_0x113bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113bbc_0x113bbc");
#endif

    ctx->pc = 0x113bbcu;

label_113bbc:
    // 0x113bbc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x113bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x113bc0: 0x2c830036  sltiu       $v1, $a0, 0x36
    ctx->pc = 0x113bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
    // 0x113bc4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113BC4u;
    {
        const bool branch_taken_0x113bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BC4u;
        // 0x113bc8: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bc4) {
            ctx->pc = 0x113BE4u;
            return;
        }
    }
    ctx->pc = 0x113BCCu;
    // 0x113bcc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x113bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113bd0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x113bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113bd4: 0x0  nop
    ctx->pc = 0x113bd4u;
    // NOP
    // 0x113bd8: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113BD8u;
    {
        const bool branch_taken_0x113bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x113bd8) {
            ctx->pc = 0x113BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113BD8u;
            // 0x113bdc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113bbc;
        }
    }
    ctx->pc = 0x113BE0u;
    // 0x113be0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x113be0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x113be4u;
}
