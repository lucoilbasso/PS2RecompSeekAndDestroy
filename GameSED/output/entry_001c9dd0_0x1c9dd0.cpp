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

// Function: entry_001c9dd0
// Address: 0x1c9dd0 - 0x1c9e18
void entry_001c9dd0_0x1c9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9dd0_0x1c9dd0");
#endif

    ctx->pc = 0x1c9dd0u;

    // 0x1c9dd0: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1C9DD0u;
    {
        const bool branch_taken_0x1c9dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD0u;
        // 0x1c9dd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dd0) {
            ctx->pc = 0x1C9F74u;
            return;
        }
    }
    ctx->pc = 0x1C9DD8u;
    // 0x1c9dd8: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1c9ddc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1c9ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c9de0: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x1c9de0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1c9de4: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1c9de8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c9dec: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1c9decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c9df0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1c9df0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c9df4: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1c9df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c9df8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C9DF8u;
    {
        const bool branch_taken_0x1c9df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DF8u;
        // 0x1c9dfc: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9df8) {
            ctx->pc = 0x1C9E70u;
            return;
        }
    }
    ctx->pc = 0x1C9E00u;
    // 0x1c9e00: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c9e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c9e04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9E04u;
    {
        const bool branch_taken_0x1c9e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E04u;
        // 0x1c9e08: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e04) {
            ctx->pc = 0x1C9E3Cu;
            return;
        }
    }
    ctx->pc = 0x1C9E0Cu;
    // 0x1c9e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e10: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1c9e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1c9e14: 0x0  nop
    ctx->pc = 0x1c9e14u;
    // NOP
    ctx->pc = 0x1c9e18u;
}
