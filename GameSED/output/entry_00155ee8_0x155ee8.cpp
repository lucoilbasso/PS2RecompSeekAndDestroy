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

// Function: entry_00155ee8
// Address: 0x155ee8 - 0x155f08
void entry_00155ee8_0x155ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ee8_0x155ee8");
#endif

    ctx->pc = 0x155ee8u;

    // 0x155ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155EE8u;
    {
        const bool branch_taken_0x155ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EE8u;
        // 0x155eec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ee8) {
            ctx->pc = 0x155F08u;
            return;
        }
    }
    ctx->pc = 0x155EF0u;
    // 0x155ef0: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x155ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x155ef4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x155ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x155ef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155efc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155EFCu;
    {
        const bool branch_taken_0x155efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EFCu;
        // 0x155f00: 0xac820184  sw          $v0, 0x184($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155efc) {
            ctx->pc = 0x155F1Cu;
            return;
        }
    }
    ctx->pc = 0x155F04u;
    // 0x155f04: 0x0  nop
    ctx->pc = 0x155f04u;
    // NOP
    ctx->pc = 0x155f08u;
}
