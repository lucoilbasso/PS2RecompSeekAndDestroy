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

// Function: entry_00148af0
// Address: 0x148af0 - 0x148b18
void entry_00148af0_0x148af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148af0_0x148af0");
#endif

    ctx->pc = 0x148af0u;

    // 0x148af0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148af4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x148af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x148af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148AF8u;
    {
        const bool branch_taken_0x148af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AF8u;
        // 0x148afc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148af8) {
            ctx->pc = 0x148B18u;
            return;
        }
    }
    ctx->pc = 0x148B00u;
    // 0x148b00: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x148b00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148b04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148b08: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x148b08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x148b0c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x148B0Cu;
    {
        const bool branch_taken_0x148b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B0Cu;
        // 0x148b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b0c) {
            ctx->pc = 0x148CF4u;
            return;
        }
    }
    ctx->pc = 0x148B14u;
    // 0x148b14: 0x0  nop
    ctx->pc = 0x148b14u;
    // NOP
    ctx->pc = 0x148b18u;
}
