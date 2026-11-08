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

// Function: entry_001cfdac
// Address: 0x1cfdac - 0x1cfde0
void entry_001cfdac_0x1cfdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfdac_0x1cfdac");
#endif

    ctx->pc = 0x1cfdacu;

    // 0x1cfdac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1cfdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cfdb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cfdb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cfdb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1cfdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1cfdbc: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1cfdbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cfdc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFDC0u;
    {
        const bool branch_taken_0x1cfdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDC0u;
        // 0x1cfdc4: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdc0) {
            ctx->pc = 0x1CFDE0u;
            return;
        }
    }
    ctx->pc = 0x1CFDC8u;
    // 0x1cfdc8: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x1cfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cfdcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cfdd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cfdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cfdd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFDD4u;
    {
        const bool branch_taken_0x1cfdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDD4u;
        // 0x1cfdd8: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdd4) {
            ctx->pc = 0x1CFDE8u;
            return;
        }
    }
    ctx->pc = 0x1CFDDCu;
    // 0x1cfddc: 0x0  nop
    ctx->pc = 0x1cfddcu;
    // NOP
    ctx->pc = 0x1cfde0u;
}
