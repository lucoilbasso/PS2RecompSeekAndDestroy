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

// Function: entry_001460b8
// Address: 0x1460b8 - 0x1460e0
void entry_001460b8_0x1460b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001460b8_0x1460b8");
#endif

    ctx->pc = 0x1460b8u;

    // 0x1460b8: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1460B8u;
    {
        const bool branch_taken_0x1460b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460B8u;
        // 0x1460bc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460b8) {
            ctx->pc = 0x1460F0u;
            return;
        }
    }
    ctx->pc = 0x1460C0u;
    // 0x1460c0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1460c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1460c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1460C4u;
    {
        const bool branch_taken_0x1460c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460c4) {
            ctx->pc = 0x1460C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460C4u;
            // 0x1460c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1460E0u;
            return;
        }
    }
    ctx->pc = 0x1460CCu;
    // 0x1460cc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1460CCu;
    {
        const bool branch_taken_0x1460cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460cc) {
            ctx->pc = 0x146104u;
            return;
        }
    }
    ctx->pc = 0x1460D4u;
    // 0x1460d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1460D4u;
    {
        const bool branch_taken_0x1460d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460D4u;
        // 0x1460d8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460d4) {
            ctx->pc = 0x1460F8u;
            return;
        }
    }
    ctx->pc = 0x1460DCu;
    // 0x1460dc: 0x0  nop
    ctx->pc = 0x1460dcu;
    // NOP
    ctx->pc = 0x1460e0u;
}
