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

// Function: entry_00177f80
// Address: 0x177f80 - 0x177fb0
void entry_00177f80_0x177f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177f80_0x177f80");
#endif

    ctx->pc = 0x177f80u;

    // 0x177f80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177f84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x177F84u;
    {
        const bool branch_taken_0x177f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F84u;
        // 0x177f88: 0x12182b  sltu        $v1, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f84) {
            ctx->pc = 0x177FC8u;
            return;
        }
    }
    ctx->pc = 0x177F8Cu;
    // 0x177f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177f90: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177F90u;
    {
        const bool branch_taken_0x177f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x177F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F90u;
        // 0x177f94: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f90) {
            ctx->pc = 0x177FC0u;
            return;
        }
    }
    ctx->pc = 0x177F98u;
    // 0x177f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x177F98u;
    {
        const bool branch_taken_0x177f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177f98) {
            ctx->pc = 0x177F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177F98u;
            // 0x177f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177FB0u;
            return;
        }
    }
    ctx->pc = 0x177FA0u;
    // 0x177fa0: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x177FA0u;
    {
        const bool branch_taken_0x177fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x177fa0) {
            ctx->pc = 0x177FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177FA0u;
            // 0x177fa4: 0xa2120055  sb          $s2, 0x55($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177FD4u;
            return;
        }
    }
    ctx->pc = 0x177FA8u;
    // 0x177fa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x177FA8u;
    {
        const bool branch_taken_0x177fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FA8u;
        // 0x177fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fa8) {
            ctx->pc = 0x177FD8u;
            return;
        }
    }
    ctx->pc = 0x177FB0u;
}
