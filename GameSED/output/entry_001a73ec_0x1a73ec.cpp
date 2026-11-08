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

// Function: entry_001a73ec
// Address: 0x1a73ec - 0x1a7410
void entry_001a73ec_0x1a73ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a73ec_0x1a73ec");
#endif

    ctx->pc = 0x1a73ecu;

    // 0x1a73ec: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A73ECu;
    {
        const bool branch_taken_0x1a73ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73ECu;
        // 0x1a73f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73ec) {
            ctx->pc = 0x1A7444u;
            return;
        }
    }
    ctx->pc = 0x1A73F4u;
    // 0x1a73f4: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A73F4u;
    {
        const bool branch_taken_0x1a73f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a73f4) {
            ctx->pc = 0x1A73F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A73F4u;
            // 0x1a73f8: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7410u;
            return;
        }
    }
    ctx->pc = 0x1A73FCu;
    // 0x1a73fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a7400: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7404: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A7404u;
    {
        const bool branch_taken_0x1a7404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7404u;
        // 0x1a7408: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7404) {
            ctx->pc = 0x1A7444u;
            return;
        }
    }
    ctx->pc = 0x1A740Cu;
    // 0x1a740c: 0x0  nop
    ctx->pc = 0x1a740cu;
    // NOP
    ctx->pc = 0x1a7410u;
}
