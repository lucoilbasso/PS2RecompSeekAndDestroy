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

// Function: entry_00162f90
// Address: 0x162f90 - 0x162fa8
void entry_00162f90_0x162f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162f90_0x162f90");
#endif

    ctx->pc = 0x162f90u;

    // 0x162f90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x162f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x162f94: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162F94u;
    {
        const bool branch_taken_0x162f94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F94u;
        // 0x162f98: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f94) {
            ctx->pc = 0x162FA8u;
            return;
        }
    }
    ctx->pc = 0x162F9Cu;
    // 0x162f9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162F9Cu;
    {
        const bool branch_taken_0x162f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F9Cu;
        // 0x162fa0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f9c) {
            ctx->pc = 0x162FACu;
            return;
        }
    }
    ctx->pc = 0x162FA4u;
    // 0x162fa4: 0x0  nop
    ctx->pc = 0x162fa4u;
    // NOP
    ctx->pc = 0x162fa8u;
}
