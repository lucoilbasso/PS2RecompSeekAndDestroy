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

// Function: entry_00171ae0
// Address: 0x171ae0 - 0x171b00
void entry_00171ae0_0x171ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171ae0_0x171ae0");
#endif

    ctx->pc = 0x171ae0u;

    // 0x171ae0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x171AE0u;
    {
        const bool branch_taken_0x171ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AE0u;
        // 0x171ae4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ae0) {
            ctx->pc = 0x171BD8u;
            return;
        }
    }
    ctx->pc = 0x171AE8u;
    // 0x171ae8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171aec: 0x245012a8  addiu       $s0, $v0, 0x12A8
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4776));
    // 0x171af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171af4: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x171af8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x171af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171afc: 0x0  nop
    ctx->pc = 0x171afcu;
    // NOP
    ctx->pc = 0x171b00u;
}
